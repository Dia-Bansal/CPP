#include<iostream>
using namespace std;
void waveprint(int arr[][3],int rows,int cols){
    for(int j=0;j<cols;j++){
    if(j&1){
        for(int i=rows-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
        }
    }else{
        for(int i=0;i<rows;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    }
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
    waveprint(arr,3,3);
}
