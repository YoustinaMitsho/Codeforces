/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412383/problem/C
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l , r; cin >> l >> r;
    cout << min(l * l, min(r * r, l * r)) << " " << max(l * l, r * r);
}