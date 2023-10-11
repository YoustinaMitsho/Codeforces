/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412518/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int main(){
    int n , r; cin >> n >> r;
    unsigned long long per = fact(n) / fact(n-r);
    cout << per;
}