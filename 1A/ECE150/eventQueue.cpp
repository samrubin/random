#include "eventQueue.h"
#include <iostream>
using namespace std;

struct Queue {
  const Event*  _event;
  Queue *_next;
};
Queue* head = 0;
Queue* tail = 0;


// void print(){
	// Queue* curr = head;
	// for (;curr!= NULL; curr = curr->_next)
		// cout << "["<<curr->_next << ":" << curr -> _event->time <<"]" <<" * ";
	// cout << endl;
	// return;
		
// }

bool enqueue(const Event* e){
	bool flag=true;
	if(e->time < 0)
		flag=false;
	else{
		Queue* tmp = new Queue;
		tmp->_event = e;
		tmp->_next = 0;
		if (head == 0) {
			head = tmp;
			tail = tmp;
		}else if (tmp -> _event -> time >= tail->_event->time){
			tail ->_next = tmp;
			tail = tmp;
		}else if (tmp -> _event -> time < head -> _event -> time){
			tmp ->_next = head;
			head = tmp;
		} else {
			Queue* current = head;
				while (current ->_next != 0 && (current->_next->_event->time <= tmp->_event->time)) {
					current = current->_next;
				}
			tmp->_next = current->_next;
			current->_next = tmp;
		}
	}
	
	// print();
	int a=0;
  
	
return flag;
}



const Event* dequeue(){
	const Event* e;
	if (head == 0) {
		e=NULL;
	}
	else{
		e= head->_event;
		head = head->_next;  
	}
	// print();
	int a=0;
	return e;
}
/*


int main()
{
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
		Event* temp=new Event;
		temp->time=rand()%100;
		//cout<<temp->time<<" ";
		enqueue(temp);
	}
	
	
	// 72 55 54 93 31 93 98 68 44 49

	// {
		// Event* temp=new Event;
		// temp->time=49;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=44;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=68;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=98;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=93;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=31;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=93;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=54;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=55;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		// Event* temp=new Event;
		// temp->time=72;
		// cout<<temp->time<<" ";
		// enqueue(temp);
		
	// }
	cout<<endl;
	
	for(int i=0;i<10;i++)
	{
		const Event* temp=dequeue();
		//cout<<temp<<":";
		//cout<<temp->time<<" ";
	}
	cout<<endl;
	
}*/