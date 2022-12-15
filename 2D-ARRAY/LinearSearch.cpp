#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int s,int i,int j){
    if(arr[i][j]==s){
		return 1;
	}

	return 0;
}
int main(){
	int arr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int s;
	cin>>s;
	if(ispresent(arr,s,3,4)){
		cout<<"Number is Present";
		
	}else{
		cout<<"Number is not present";
	}
	
}
