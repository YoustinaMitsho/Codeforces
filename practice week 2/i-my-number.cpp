/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412612/problem/E
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
void trop_counter(int n){
    for (size_t i = 0; i < n; i++)
    {
        if(i != n-1)
            cout << n << " ";
        else
            cout << n;
    }
    
}
int main(){
    int tsc; cin >> tsc;
    while(tsc--){
        int n; cin >> n;
        trop_counter(n);
    }
}