// gcd using Euclidean algorithm
//euclidien algorithm
/* GCD A=270 B=192
GCD(270,192)= 270/192=78
GCD(192,78)= 192/78=36
GCD(78,36)= 78/36=6 and so on */
#include <iostream>

using namespace std;

int findGCD(int num1, int num2) {
    // Ensure num1 is greater than or equal to num2
    if (num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Apply Euclidean algorithm
    while (num2 != 0) {
        int temp = num1 % num2;
        num1 = num2;
        num2 = temp;
    }

    return num1;
}

int main() {
    int num1 = 24;
    int num2 = 36;

    int gcd = findGCD(num1, num2);

    cout << "The GCD of " << num1 << " and " << num2 << " is " << gcd << endl;

    return 0;
}

