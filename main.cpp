#include "bits/stdc++.h"
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a > b) {
        cout << "a is greater!";
    }
    else if (b > a) {
        cout << "b is greater!";
    }
    else {
        cout << "equal equal!";
    }
}