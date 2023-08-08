/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/D
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    long long a , b, c;
    cin >> a >> b >> c;
    if(a+b > c && a+c >  b && b+c > a) cout <<"YES";
    else cout << "NO";
}