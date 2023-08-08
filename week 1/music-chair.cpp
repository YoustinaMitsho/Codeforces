/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/G
Problem status: Error on test 3
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main(){
    unsigned long long n, m, x; cin >> n >> m >> x;
    if(m % 2 == 1) m +=1;
    unsigned long long k = x + m;
    if(k % n == 0) cout << n << endl;
    else cout << k % n << endl;
}