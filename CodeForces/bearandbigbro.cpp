#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int y = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        y += 1;
    }

    cout << y;
    return 0;
}