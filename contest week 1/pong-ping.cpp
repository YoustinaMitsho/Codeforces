/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412383/problem/B
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
using namespace std;
int main() {
  int n1, n2; 
  cin >> n1>> n2;
  if(((n1+n2)/2) %2==0) cout << "Beevo";
  else cout <<"Oveeb";
}