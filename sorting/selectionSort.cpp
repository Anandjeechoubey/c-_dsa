//Selection Sort CPP
#include <iostream>

using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n){
	for (int i=0; i<n; i++){
		int min = i;
		for (int j=i+1; j<n; j++){
			if(arr[j]< arr[min]){
				min = j;
			}
			swap(&arr[min],&arr[i]);
		}
	}
}

int main(){
	int a[] = { 5, 3, 7, 7, 2, 1, 4, 9, 6, 6, 0};
	int size = sizeof(a)/sizeof(a[0]);
	selectionSort(a,size);

	for (int i=0; i<size; i++)
		cout<<a[i]<<' ';

	cout<<endl;

	return 0;
}