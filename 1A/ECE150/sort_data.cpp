#include <iostream>
#include "sort_data.h"
using namespace std;

int main(){
		
	for (int index_current = 0; index_current < 100000; index_current++){
			int index_smallest = index_current;
		
		
		for (int i = index_current; i < 100000; i++){
			if (sort_data[index_smallest] > sort_data[i]){
				 index_smallest = i;
			}
		}
	int intermediary = sort_data[index_current];
	sort_data[index_current] = sort_data[index_smallest];
	sort_data[index_smallest] = intermediary;
	}
	
	for (int k = 0; k < 100000; k++){
		cout << sort_data[k] << " ";
	}
		
	return 0;
}
