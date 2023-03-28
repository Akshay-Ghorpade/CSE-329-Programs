#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    if(n>=10)
    {
        if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
            cout<<"no";
        }
        else{cout<<"yes";}
    }
    else{
        if(n==1 || n==2 || n==3 || n==5 || n==7){
            cout<<"yes";
        }
        else{cout<<"no";}
    }
    
    return 0;
}

