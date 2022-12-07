#include <iostream>

using namespace std;
bool linearsearch(int arr[],int n){
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            //if found
            return 1;
        }
    }
    //not found
    return 0;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    int ans=linearsearch(arr,size);
    cout<<ans;
    return 0;
}
