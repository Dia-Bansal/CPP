#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void InsertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
	int temp=arr[i];
	int j=i-1;
		for(;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}else{
				break;
			}
		}
		arr[j+1]=temp;
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
	InsertionSort(arr,size);
	printArray(arr,size);
}
