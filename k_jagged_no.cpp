#include <iostream>
#include <vector>
using namespace std;

bool isKJagged(int n, int k) {
    vector<int> factors; // to store the prime factors
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    // check if all prime factors are <= k
    for (int i = 0; i < factors.size(); i++) {
        if (factors[i] > k) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    cout << "Enter a positive integer n: ";
    cin >> n;
    cout << "Enter a positive integer k: ";
    cin >> k;
    cout << "K-jagged numbers less than or equal to n: ";
    for (int i = 1; i <= n; i++) {
        if (isKJagged(i, k)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

