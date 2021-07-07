#include <iostream>

using namespace std;

int binarySearch(int arr[], int i, int j, int n){
	int mid = ( j + i )/2;

	if( n == arr[mid] ){
		return mid;
	}
	else if (i != j ){
		if ( n > arr[mid] ){
			return binarySearch(arr, mid + 1, j, n);
		}
		else if ( n < arr[mid] ){
			return binarySearch(arr, i, mid - 1, n);
		}
	}
	
	return -1;
}

int main(){

	//for binarySearch we need a sorted array
	int a[] = {1, 2, 3, 4, 6, 7, 9};

	//searching all the numbers
	for(int i=1; i<=9; i++){
		int result = binarySearch(a, 0, 8, i);
		cout<<result<<endl;
	}
	
	return 0;
}