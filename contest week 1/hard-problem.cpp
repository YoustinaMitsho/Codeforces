/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412383/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1 , n2; cin >> n1 >> n2;
    if(max(n1,n2) == (2* min(n1,n2))) cout << "YES";
    else cout << "NO";
}