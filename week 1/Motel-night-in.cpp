/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/M
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main(){
    double d, s; cin >> d >> s;
    double twothirds = ((d*2)/3);
    double onethird = d/3;
    if(s >= twothirds) cout << "Sunny Day";
    else if(s <= onethird) cout << "Rainy Day";
    else cout << "Cloudy Day";
}