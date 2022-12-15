#include<iostream>
using namespace std;
bool palidrome(char name[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
    if(name[start]!=name[end]){
        return 0;
    }else{
        start++;
        end--;
     }
    }
    return 1;
}

int getLength(char name[]){
	int count=0;
	for(int i=0;name[i]!='\0';i++){
	  count++;	
	}
	return count;
}
int main(){
	char name[20];
	cin>>name;
	cout<<"Your name is "<<name<<endl;
	int ans=getLength(name);
	cout<<"Palidrome or not: "<<palidrome(name,ans);
}
