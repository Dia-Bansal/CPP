#include <iostream>

using namespace std;
bool isEven(int n){
    if(n&1){
        //odd
        return 0;
    }else{
        //even
        return 1;
    }
}
int main()
{
    int n;
    cin>>n;
    int answer=isEven(n);
    cout<<answer;

    return 0;
}
