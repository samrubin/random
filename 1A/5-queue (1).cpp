/////////////////////////////////////////////
//
// Queue Class
// Not very efficient, but it works
//

#include <iostream>

using namespace std;

enum TYPE { RED, GREEN, BLUE };

struct Data {
  TYPE type;
  char subtype[20];
};

struct Queue {
  Data*  _data;
  Queue *_next;
};

bool isEmpty(Queue* q) {
  return (q == 0);
}

int numItems(Queue* q) {
  if (q == 0) {
    return 0;
  }
  return 1+numItems(q->_next);
}

void enqueue(Data* d, Queue*& q) {
  Queue* tmp = new Queue;
  tmp->_data = d;
  tmp->_next = 0;
  if (q == 0) {
    q = tmp;
  } else {
    Queue* current = q;
    while (current->_next != 0) {
      current = current->_next;
    }
    current->_next = tmp;
  }
}

Data* dequeue(Queue*& q) {
  if (q == 0) {
    return 0;
  }
  Data* d = q->_data;
  Queue* tmp = q;
  q = q->_next;
  delete tmp;
  return d;
}

void printQueue(Queue* q) {
    if (q == 0) {
      cout << "]" << endl;
    }
    else {
      switch (q->_data->type) {
      case RED:
	cout << "(Red,";
	break;
      case GREEN:
	cout << "(Green,";
	break;
      case BLUE:
	cout << "(Blue,";
	break;
      default:
	cerr << "Unknown Data Type; exiting" << endl;
	exit(-1);
	break;
      }
      cout << q->_data->subtype << ")";
      printQueue(q->_next);
    }
}

void print(Queue* q) {
    cout << "The queue: [";
    printQueue(q);
}

int main(int argc, char *argv[]) {
    if(argc != 2) return -1;
    int n = atoi(argv[1]);

    Queue* q = 0;
    srandom(2);

    for(int i = 0; i < n; i++) {
	Data *tmp = new Data;

	int r = random()%3;
	tmp->type = (TYPE)r;
	cout << "Enter a type of ";
	switch(tmp->type) {
	case RED:
	  cout << "red: ";
	  break;
	case GREEN:
	  cout << "green: ";
	  break;
	case BLUE:
	  cout << "blue: ";
	  break;
	default:
	  cerr << "Unknown colour type: " << r << endl;
	  exit(-1);
	}
        cin >> tmp->subtype;
	enqueue(tmp, q);
    }

    print(q);

    while (!isEmpty(q)) {
      Data* d1 = dequeue(q);
      switch(d1->type) {
      case RED:
	cout << "Red: ";
	break;
      case GREEN:
	cout << "Green: ";
	break;
      case BLUE:
	cout << "Blue: ";
	break;
      default:
	cout << "Unknown type: " << d1->type;
	break;
      }
      cout << d1->subtype << endl;
      cout << numItems(q) << " remaining on queue" << endl;
    }
}
