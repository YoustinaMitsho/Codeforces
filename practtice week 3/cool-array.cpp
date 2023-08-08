/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/413930/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
    int num; cin >> num;
    int sum = 0;
    int arr [num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    bool flg = true;
    for(int i = 0; i < num; i++){
        if(sum % arr[i] != 0 ) flg = false;
    }

    if(flg) cout << "YES";
    else cout << "NO";
    
    return 0;
}