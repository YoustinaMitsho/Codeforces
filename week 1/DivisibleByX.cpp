/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/P
Problem status: Accepted
By: Youstina Mitsho
*/


#include <iostream>
using namespace std;
int main(){
    long long a, b, x; cin >> a >> b >> x;
    long long counter = 0;
    long long c = max(a,b), d = min(a,b);
    for (long long i = d; i <= c; i++)
    {
        if(i % x == 0) counter++;
    }
    cout << counter;
}