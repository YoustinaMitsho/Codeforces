/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/G
Problem status: Error on test 3
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, x; cin >> n >> m >> x;
// The number of chairs, the number of times the boy should move and the first chair he will start from.
    if(m % 2 == 1) m +=1;
    long long k = x + m;
    if(k % n == 0) cout << n << endl;
    else cout << k % n << endl;
}