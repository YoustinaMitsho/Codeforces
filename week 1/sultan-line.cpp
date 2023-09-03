/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/N
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main(){
    int p1x,p1y,p2x,p2y,p3x,p3y;
    cin >> p1x >> p1y >> p2x >> p2y >> p3x >> p3y; // (a,b) , (m,n) , (x,y)
    // Rule: (n-b)(x-m) = (y-n)(m-a)
    if((p2y - p1y)*(p3x - p2x) == (p3y - p2y)*(p2x - p1x)) cout << "Yes";
    else cout << "No";
}