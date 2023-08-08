/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/K
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main() {
    long long year, age; cin >> year >> age;
    if((year + age) % 4 != 0 || (year + age) % 100 == 0 && (year + age) % 400 !=  0) cout << "No" << endl;
    else cout << "Yes" << endl;
}