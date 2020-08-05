/**
Given an array of N elements and a integer K. Your task is to return the position of first occurence of K in the given array.
Note: Position of first element is considered as 1.
**/
//GeeksforGeeks
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n,k,flag=-1;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for (int i=0;i<n;i++)
	if(a[i]==k)
	{flag=i+1;break;}
	cout<<flag<<endl;
	}
	return 0;
}
