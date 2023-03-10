#include<iostream>
using namespace std;
int main(){
	int n=4,m=25,i;
	int arr[5]={10,12,14};
	for(i=n;n<=2;n--){
		arr[i+1]=arr[i];
	}
	arr[2]=m;
	cout<<arr;
}
