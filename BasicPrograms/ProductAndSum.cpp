#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int product=1;
   int sum=0;
   for(int i=0;i<=n;i++){
       int rem=n%10;
       product=product*rem;
       sum=sum+rem;
       n=n/10;
   }
   cout<<"Product of digits of an integer is "<<product<<endl;
   cout<<"Sum of digits of an integer is "<<sum;
    return 0;
}
