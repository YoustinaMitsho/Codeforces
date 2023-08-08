/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411175/problem/C
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
//#include <iomanip>
using namespace std;
 
int main(){
    long long a , b , c , d;
    cin >> a >> b >> c >> d;
    // a (+, -, *) b (+, -, *) c = d
    if(a + b - c == d) cout << "YES";
    else if(a + b * c == d) cout << "YES";
    else if(a - b + c == d) cout << "YES";
    else if(a - b * c == d) cout << "YES";
    else if(a * b + c == d) cout << "YES";
    else if(a * b - c == d) cout << "YES";
    else cout << "NO";
}