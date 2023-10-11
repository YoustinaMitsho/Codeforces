/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412612/problem/D
Problem status: Accepted
By: Youstina Mitsho
*/


#include <bits/stdc++.h>
using namespace std;
int main() {

    long long n, m; cin >> n >> m;

    vector <long long> vec;
    vector <long long> occurance;


    for (size_t i = 0; i < n; i++)
    {
        long long x; cin >>x;
        vec.push_back(x);
    }

    int count = 0;
    for(int l = 0; l < n; l++){
        if(m == vec[l]){
            occurance.push_back(l);
            count ++;
        }
    }


    if(!occurance.empty())
        cout << occurance[0] + 1 << " " << occurance[occurance.size() - 1] + 1 << " " << count << endl;
    else
        cout << "-1";
}