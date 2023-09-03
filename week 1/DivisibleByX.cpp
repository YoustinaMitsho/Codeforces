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
    if(d % x == 0) cout << (c / x) - (d / x) + 1;
    else cout << (c / x) - (d / x);
}