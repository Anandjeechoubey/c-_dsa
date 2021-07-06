#include <iostream>

using namespace std;

void insertionSort(int arr[], int n){
	for ( int i=1; i<n; i++){
		if(arr[i] < arr[i-1]){
			int temp = arr[i];
			int j = i-1;
			while(arr[j] > temp && j >= 0){
				arr[j+1] = arr[j];
				j--;
			}
			arr[j+1] = temp;
		}
	}
}

int main(){
	int a[] = { 5, 3, 7, 7, 2, 1, 4, 9, 6, 6, 0};
	int size = sizeof(a)/sizeof(a[0]);
	insertionSort(a,size);

	for (int i=0; i<size; i++)
		cout<<a[i]<<' ';

	cout<<endl;

	return 0;
}