// array rotations
#include<iostream>
using namespace std;
main(){
	int arr[4] = {1,2,3,4};
	int n=4,d=2;
	for (int i=0;i<=n-1;i++){
		if(i>n-d){
			arr[i-n]=arr[i];
		}
		else{
		arr[i+2]=arr[i];}
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<"\t"<<arr[i];
	}
}

