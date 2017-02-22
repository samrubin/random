#include "Homework.h"
using namespace std;

bool isEarlier(const Assignment* a1, const Assignment* a2){
	if (a1 -> dueMonth < a2 -> dueMonth){
		return true;
	}else if (a1 -> dueMonth > a2 -> dueMonth){
		return false;
	}else if (a1 -> dueMonth == a2 -> dueMonth){
		if (a1 -> dueDay < a2 -> dueDay){
			return true;
		}else if (a1 -> dueDay < a2 -> dueDay){
			return false;
		}else 
			return false;
	}else
		return false;
}

bool enqueue(const Assignment* assignment, HomeworkQueue*& queue){
	if (assignment->dueDay < 1 || assignment-> dueDay > 31 || assignment -> dueMonth < 1 || assignment -> dueMonth > 12 || assignment -> course[0] == 0)
		return false;
	int count;
	for(count = 0; assignment->course[count] != '\0'; count++){	}
	if (count < 1 || count > 12)
		return false;
	
	
	
	HomeworkQueue* ass = new HomeworkQueue;
	ass -> assgn = assignment;
	ass -> next = 0;
	if (queue == 0){
		queue = ass;
		return true;
	}
	if (isEarlier(assignment, queue->assgn)){
		HomeworkQueue* tmp = queue;
		ass -> next = tmp;
		queue = ass;
		return true;
	}else {
			HomeworkQueue* current = queue;
			while (current -> next != 0) {
				if (isEarlier(assignment,current->next->assgn))
					break;
				current = current->next;
			}
		ass->next = current->next;
		current->next = ass;
		}
		return true;
}

const Assignment* dequeue(HomeworkQueue*& queue){
  if (queue == 0) {
    return 0;
  }
  const Assignment* a = queue -> assgn;
  HomeworkQueue* tmp = queue;
  queue = queue->next;
  delete tmp;
  return a;
}