// detecting panagram
#include<iostream>
using namespace std;
main(){
	char arr1[]={"asdfghjklqwertyuiopmnbvcxzas"};
	char arr2[]={"abcdefghijklmnopqrstuvwxyz"};
	int x=sizeof(arr2);
	int y=sizeof(arr1);
	int arr3[x];
	
	for(int i=0;i<x;i++){
		int count=0;
		for(int j=0;j<y;j++){
			if(arr2[i]==arr1[j]){
				count=count+1;
			}
			else{
				continue;
			}
		}
		arr3[i]=count;
	}
	for(int b=0;b<x;b++){
		if(arr3[b]==0){
			cout<<endl<<"not panagram";
			break;
		}
		else{
			continue;
		}
	}

}


