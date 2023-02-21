#include<iostream>
using namespace std;
main(){
	int m[3][3]={1,2,3,4,5,6,7,8,9};
	int n,q=0,r=0;
//	int p=((3+1)/2)-1;
int p=1;
	for(int i=0;i<=2;i++)
	{
		cout<<m[p][i]<<endl;
		q=q+m[p][i];
		//cout<<"sum is------"<<q;
	}
	for(int j=0;j<3;j++)
	{
		cout<<m[j][p]<<endl;
		r=r+m[j][p];
	
}
	cout<<"sum of row--"<<q<<endl;
	cout<<"sum of column--"<<q<<endl;


}
