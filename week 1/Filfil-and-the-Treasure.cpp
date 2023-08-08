/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/I
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main(){
    string num; cin >> num;
    int sum = (num[num.size()-1] - 48) + (num[num.size()-2] - 48);
    if(sum < 10) cout << "EFTA7 YA SIMSIM" << endl;
    else cout << "E2FEL YA SIMSIM" << endl;
}