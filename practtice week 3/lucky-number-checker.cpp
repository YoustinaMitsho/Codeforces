/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/413930/problem/D
Problem status: 
By: Youstina Mitsho
*/

#include <bits/stdc++.h>

using namespace std;

bool num_to_digit(int n , int num, int arr[]);

int main(){
    int n, num; cin >> n >> num;
    int arr[n];
    bool flg = num_to_digit(n, num, arr);
    if(flg){
        if(arr[0] % 2 == 0) cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}

bool num_to_digit(int n, int num, int arr[]){
    bool flg = true;
    for (int i = 0; i < n; i++){
        arr[i] = num % 10;
        num /= 10;
        if (arr[i] != 3 || arr[i] != 6 || arr[i] != 9){
            flg = false;
        }
    }
    return flg;
}