#include <iostream>
#include <vector>
using namespace std;
main(){
	int n;
	cout<<"enter n";
	cin>>n;
	for(int j=1;j<=n;j++){
		vector<int> factors; // to store the prime factors
    while (j % 2 == 0) {
        factors.push_back(2);
        j /= 2;
    }
    for (int i = 3; i * i <= j; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            j /= i;
        }
    }
    if (j > 2) {
        factors.push_back(n);
    }
    // print the prime factors
//    cout << "Prime factors of the number: ";
    int z=factors[0];
    for (int i = 0; i < factors.size(); i++) {
        if(z>factors[i]){
        	continue;
		}
		else{
			z=factors[i];
		}
    }
    cout <<z;
}
	
}
