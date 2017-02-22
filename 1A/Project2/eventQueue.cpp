#include "eventQueue.h"
using namespace std;

struct Queue {
  const Event*  _event;
  Queue *_next;
};
Queue* q = 0;

bool enqueue(const Event* e){
	if(e->time < 0)
		return false;
	Queue* tmp = new Queue;
	tmp->_event = e;
	tmp->_next = 0;
	if (q == 0) {
		q = tmp;
		return true;
	} else {
		Queue* current = q;
		if (q->_event->time > tmp->_event->time){
			while ((current ->_next != 0 && current->_next->_event->time > tmp->_event->time)) {
				current = current->_next;
			}
		}
		tmp->_next = current->_next;
		current->_next = tmp;
		return true;
  }
	
return true;
}



const Event* dequeue(){
	if (q == 0) {
    return 0;
  }
  const Event* e = q->_event;
  Queue* tmp = q;
  q = q->_next;
  delete tmp;
  return e;
}