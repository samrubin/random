#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int sort_data[100]= {0};
	for (int x = 0; x < 100; x++){
		sort_data[x] = rand()%10;
		cout << sort_data[x] << " ";
	}
	cout << endl;
	for (int index_current = 0; index_current < 100; index_current++){
			int index_smallest = index_current;
		
		
		for (int i = index_current; i < 100; i++){
			if (sort_data[index_smallest] > sort_data[i]){
				 index_smallest = i;
			}
		}
	int intermediary = sort_data[index_current];
	sort_data[index_current] = sort_data[index_smallest];
	sort_data[index_smallest] = intermediary;
	}
	
	for (int k = 0; k < 100; k++){
		cout << sort_data[k] << " ";
	}
		
	return 0;
}
