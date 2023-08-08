/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/C
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
#include <math.h>
//#include <iomanip>
using namespace std;
 
int main(){
    long long r, s; cin >> r >> s;
    if((2*r) >= sqrt(2)*s) cout << "Circle";
    else if((2*r) <= s) cout << "Square";
    else cout << "Complex";
}