#include "eventQueue.h"
using namespace std;

struct Queue {
  const Event*  _event;
  Queue *_next;
};
Queue* head = 0;
Queue* tail = 0;

bool enqueue(const Event* e){
	if(e->time < 0)
		return false;
	Queue* tmp = new Queue;
	tmp->_event = e;
	tmp->_next = 0;
	if (head == 0) {
		head = tmp;
		tail = tmp;
	}else if (tmp -> _event -> time > tail->_event->time){
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
  
	
return true;
}



const Event* dequeue(){
	if (head == 0) {
    return 0;
  }
  const Event* e = head->_event;
  head = head->_next;
  return e;
}
