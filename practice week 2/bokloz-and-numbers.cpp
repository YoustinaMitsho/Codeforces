/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412612/problem/B
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tsc; cin >> tsc;
    vector<long long> vec;
    for (long long i = 0; i < tsc; i++)
    {
        long long n; cin >> n;
        vec.push_back(n);
    }
    
    long long mx = vec[0];
    for (long long i = 1; i < tsc; i++)
    {
        if(vec[i] >= mx){
            mx = vec[i];
        }
    }
    
    cout << mx;
}