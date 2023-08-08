/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/413930/problem/B
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> solider;
    for (int i = 0; i < n; i++){
        int num; cin >> num;
        solider.push_back(num);
    }

    int count = 0;
    vector<int> kills;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (solider[i] > solider[j]){
                count++;
            }
        }
        kills.push_back(count);
        count = 0;
    }

    for (auto k : kills){
        cout << k << " ";
    }
}