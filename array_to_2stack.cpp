//implementing two stacks in array 
#include<iostream>
using namespace std;
int arr[6]={1,2,3,4,5,6};
//int x=sizeof(arr);
//int y=x/2;
int st1[3];
int st2[3];
void stacks(){
	for(int q=0;q<3;q++){
		st1[q]=arr[q];
	}
	for(int r=0;r<3;r++){
		st2[r]=arr[r+3];
	}
}
void displays1(){
	for(int a=0;a<3;a++){
		cout<<st1[a]<<"\t";
	}
}
void displays2(){
	for(int a=0;a<3;a++){
		cout<<st2[a]<<"\t";
	}
}
int main(){
	stacks();
	cout<<"elements of stack 1 are -> ";
	displays1();
	cout<<"\n elements of stack 2 are -> ";
	displays2();
}

