/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/424319/problem/B
Problem status: 
Solved time: 
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tsc; cin >> tsc;
    while (tsc--)
    {
        long long k, x; cin >> k >> x;
        long long sum  = 0; 
        for (long long i = 1; i <= k; i++){
            sum += i;
            if(sum >= x){
                cout << i << endl;
                break;
            } 
        }
        long long count = k;
        if(sum < x){
            if(k-1 == 0) cout << k << endl;
            else{
                for(long long i = k-1; i > 0; i--){
                    sum += i;
                    count++;
                    if(sum > x){
                        cout << count << endl;
                        break;
                    }
                }
                if(sum < x) cout << count << endl;
            }
        }
    }
}