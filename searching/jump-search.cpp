//jump-search.cpp

#include <iostream>
#include <math.h>

using namespace std;

int jumpSearch(int arr[], int size, int number){
	//let block size be underroot(arr.size)
	int block = sqrt(size);

	int i=0;
	for(i = 0; i < size; i+=block){
		if( arr[i] == number)
			return i;
		if( arr[i] > number)
			break;
	}

	for( int j = i - block + 1; j < i; j++ ){
		if( arr[j] == number)
			return j;
	}

	return -1;
}

int main(){
	int arr[] = {1,3,4,5,8,13,14,19,56,57,92,99};

	int size = sizeof(arr)/sizeof(arr[0]);

	//number to be searched
	int number = 13;

	cout<<jumpSearch(arr,size,number)<<endl;

	

	return 0;
}