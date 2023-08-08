/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411175/problem/A
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
 
long long calc_price(long long x, long long y);
long long total_Gain(long long n, long long cost);
 
int main(){
    long long n, x, y;
    cin >> n >> x >> y;
    long long cost = calc_price(x, y);
 
    long long total = total_Gain(n, cost);
    cout << total;
}
 
long long calc_price(long long x, long long y){
    long long sum = y - x;
    return sum;
}
 
long long total_Gain(long long n, long long cost){
    long long total = n * cost;
    return total;
}