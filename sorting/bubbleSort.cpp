#include <iostream>

using namespace std;

void bubbleSort( int arr[], int n){
	int temp;
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int a[] = { 5, 3, 7, 7, 2, 1, 4, 9, 6, 6, 0};
	int size = sizeof(a)/sizeof(a[0]);
	bubbleSort(a,size);

	for (int i=0; i<size; i++)
		cout<<a[i]<<' ';

	cout<<endl;

	return 0;
}