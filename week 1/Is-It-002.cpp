/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/F
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    long long x , y , z;
    char k, l ; cin >> x >> k >> y >> l >> z;
    if(k == '+'){
        if(x+y == z) cout << "Yes";
        else cout << x+y;
    }
    else if(k == '-'){
        if(x-y == z) cout << "Yes";
        else cout << x-y;
    }
    else if(k == '*'){
        if(x*y == z) cout << "Yes";
        else cout << x*y;
    }
}