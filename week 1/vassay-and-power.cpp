/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/L
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    isPowerOfTwo(n) ? cout << "Yes\n" : cout << "No\n";
}