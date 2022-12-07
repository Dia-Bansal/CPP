#include<iostream>
using namespace std;
void unique(int arr[],int n){
   int count;
   for(int i=0;i<n;i++){
       count=0;
       for(int j=0;j<n;j++){
           if(arr[i]==arr[j]){
               count++;
           }
       }
       if(count==1){
           cout<<arr[i]<<" ";
       }
   }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    unique(arr,n);
}
