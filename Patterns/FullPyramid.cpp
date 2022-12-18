#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int s=i-1; s>=1;s--){
            cout<<s<<" ";
        }
        cout<<endl;
    }

    return 0;
}
