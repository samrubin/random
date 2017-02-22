#include <iostream>

using namespace std;

int main(){
	
	int sort_data[20]= {0};
	for (x = 0; x < 20; x++){
		sort_data[x] = rand;
		cout << sort_data[x] << endl;
	}
	
	for (int index_current = 0; index_current < o20; index_current++){
			int index_smallest = index_current;
		
		
		for (int i = (index_smallest + 1); i <= 20; i++){
			if (sort_data[index_smallest] > sort_data[i]){
				 index_smallest = i;
			}
		}
	int intermediary = sort_data[index_current];
	sort_data[index_current] = sort_data[index_smallest];
	sort_data[index_smallest] = intermediary;
	}
	
	for (int k = 0; k < 20; k++){
		cout << sort_data[k] << endl;
	}
		
	return 0;
}
