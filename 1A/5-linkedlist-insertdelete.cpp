#include <iostream>

using namespace std;

struct listEntry {
    int value; // value stored in this entry of the list
    listEntry *next;
};

extern int insertInto(listEntry * &l, int v);
extern int deleteFrom(listEntry * &l, int v);
extern int query(listEntry *l, int v);
extern void printList(listEntry *);

/*
    Accept the following commands:
    - i <int> : insert <int> in sorted order into the listEntry
    - d <int> : delete an occurrence of <int> from the listEntry
    - q <int> : check whether <int> is in the listEntry
*/
int main() {
    /* Declare our listEntry. Initialize it to empty */
    listEntry *head = 0;
    printList(head);

    char command;
    while(cin >> command) {
	int v;
	cin >> v;

	if(cin.fail()) {
	    cerr << "Invalid integer. Doing nothing." << endl;
	    cin.clear();
	}

	switch(command) {
	    case 'i':
		if(insertInto(head, v) < 0) {
		    cerr << "Error inserting into listEntry." << endl;
		}
		break;
	    case 'd':
		if(deleteFrom(head, v) < 0) {
		    cout << "Entry absent. Doing nothing." << endl;
		}
		break;
	    case 'q':
		if(query(head, v) < 0) {
		    cout << v << " is not in the listEntry." << endl;
		}
		else {
		    cout << v << " is in the listEntry." << endl;
		}
		break;
	    default:
		// Error
		cerr << "Invalid command. Doing nothing." << endl;
		break;
	}

	printList(head);
    }

    return 0;
}

/*
    Insert into listEntry in non-decreasing sorted order.
    - l: the listEntry
    - value: the value to be inserted
    - return: 0 on success, -1 on failure
*/
int insertInto(listEntry * &l, int v) {
    if(!l || v <= l->value) {
	/* Insert value at the head */
	listEntry *tmp = new listEntry;
	tmp->value = v;
	tmp->next = l;
	l = tmp;
    }
    else {
	/* First determine the entry *after* which we should insert */
	listEntry *i = l;
	for(; i->next; i = i->next) {
	    listEntry *j = i->next;
	    if(v <= j->value) break;
	}
	listEntry *tmp = new listEntry;
	tmp->value = v;
	tmp->next = i->next;
	i->next = tmp;
    }
    return 0;
}

/*
    Delete value from listEntry, if it exists
    - l: the listEntry from which to delete
    - value: the value to delete
    - return: 0 on success, -1 if item not found.
*/
int deleteFrom(listEntry * &l, int v) {
    if(l == 0) {
	// Empty listEntry. Nothing to delete.
	return -1;
    }

    if(v < l->value) {
    	// As listEntry is sorted non-decreasing,
    	// value is not in listEntry
    	return -1;
    }

    if(v == l->value) {
    	/* Delete entry at head */
    	listEntry *tmp = l->next;
    	delete l;
    	l = tmp;
    	return 0;
    }

    // Else -- look for the entry immediately prior
    listEntry *i = l;
    for(; i->next; i = i->next) {
	listEntry *j = i->next;
	if(v == j->value) break;
	if(v < j->value) return -1;
    }
    if(i->next == 0) {
	// We exhausted the listEntry without finding
	// the value we're looking for
	return -1;
    }
    // Else
    listEntry *j = i->next;
    listEntry *k = j->next;
    delete j;
    i->next = k;
    return 0;
}

/*
    Check if item is in the listEntry.
    - l: the listEntry in which to check
    - value: the value to check for
    - return: 0 if value is in the listEntry, -1 otherwise.
*/
int query(listEntry *l, int v) {
    listEntry *i = l;
    for(; i; i = i->next) {
	if(v <= i->value) break;
    }

    if(i && i->value == v) return 0;
    return -1;
}

void printList(listEntry *l) {
    cout << "The list: [";
    for(listEntry *i = l; i; i = i->next) {
	cout << i->value;
	if(i->next) cout << ",";
    }
    cout << "]" << endl;
}
