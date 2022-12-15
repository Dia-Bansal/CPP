#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int largestRowSum(int arr[][3],int i,int j){
    int max=INT_MIN;
    int rowindex=-1;
    for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum=sum+arr[i][j];
		}
		
    if(sum>max){
        max=sum;
        rowindex=i;
    }
    }
    cout<<"The maximum sum is "<<max<<endl;
    return rowindex;
}
int main(){
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int ans=largestRowSum(arr,3,3);
	cout<<"Max row is at index "<<ans<<endl;
	
}
