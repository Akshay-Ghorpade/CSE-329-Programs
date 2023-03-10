//detecting anagram
#include<iostream>
using namespace std;
main(){
	char arr1[]={"kshaya"};
	char arr2[]={"akshay"};
	int x=sizeof(arr1);
	int arr3[x];
	for(int i=0;i<x;i++){
		int count=0;
		for(int j=0;j<x;j++){
			if(arr1[i]==arr2[j]){
				count=count+1;
			}
			else{
				continue;
			}	
		}
		arr3[i]=count;
	}
	for(int a=0;a<x;a++){
		cout<<arr3[a];
	}
	for(int b=0;b<x;b++){
		if(arr3[b]==0){
			cout<<endl<<"not anagram";
			break;
		}
		else{
			continue;
		}
	}
}

