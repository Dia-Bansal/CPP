#include<iostream>
using namespace std;
void reverse(char name[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(name[start],name[end]);
		start++;
		end--;
	}
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
	reverse(name,ans);
	cout<<"Reverse Name is "<<name;
}
