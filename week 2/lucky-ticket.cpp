/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412518/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int x; cin >> x;
        arr.push_back(x);
    }

    bool flg = false;
    for(auto l : arr){
        if(l == 4 || l == 7) flg = true;
    }

    if(flg) cout << "It's your lucky day." << endl;
    else cout << "Tough luck!" << endl;
    
}