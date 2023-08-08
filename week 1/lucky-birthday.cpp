/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/K
Problem status: Error on test 36
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main() {
    long long year, age; cin >> year >> age;
    if((year + age) % 4 == 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;
}