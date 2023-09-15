/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412612/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string num; cin >> num;
    int even = 0, odd = 0;
    for(int i = 0; i < num.size(); i++){
        if(num[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even : " << even << "\nOdd : " << odd;
}