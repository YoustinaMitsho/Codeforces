/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/B
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
//#include <iomanip>
using namespace std;
 
int main(){
    char k; cin >> k;
    switch(k){
        case 'C':
        case 'h':
        case 'i':
            cout << "Yes";
            break;
        default:
            cout << "No";
            break;
    }
}