/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/P
Problem status: Accepted
By: Youstina Mitsho
*/


#include <iostream>
using namespace std;
int main(){
    long long a, b, x; cin >> a >> b >> x;
    long long c = max(a,b), d = min(a,b);
    c = c/x; d = d/x;
    long long counter = c - d;
    cout << counter;
}