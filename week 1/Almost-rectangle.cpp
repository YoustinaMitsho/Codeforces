/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/O
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a,b,c,d; cin >> a >> b >> c >> d;
    float e = a - c;
    float area =(b*c) + (0.5*(d+b)*e);
    cout << fixed << setprecision(6) << area;
}