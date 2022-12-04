#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isprime=true;
    if(n==0||n==1){
        isprime=false;
    }
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}
