#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void SelectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int minIndex=i;
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[minIndex])
		minIndex=j;
     } 
		swap(arr[minIndex],arr[i]);
	}
}

int main(){
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	SelectionSort(arr,size);
	printArray(arr,size);
}
