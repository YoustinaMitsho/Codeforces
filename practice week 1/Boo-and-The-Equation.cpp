/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411175/problem/B
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
// (2a+3b)×5c
 
int main(){
    double x, y, z, result;
    cin >> x >> y >> z;
    result = (2*x + 3*y) * 5 * z;
    cout << fixed << setprecision(6) << result;
}