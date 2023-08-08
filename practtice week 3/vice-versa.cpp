/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/413930/problem/C
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string name; cin >> name;
    string rev = name; 
    reverse(name.begin(), name.end()); 
    cout << name << endl;
    if(rev == name) cout << "YES" << endl;
    else cout << "NO" << endl;
}