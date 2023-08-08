/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411175/problem/D
Problem status: Accepted
By: Youstina Mitsho
*/

#include <iostream>
//#include <iomanip>
using namespace std;
 
int main(){
    int a, b,c; cin >> a >> b >> c;
    int arr[3];
    arr[2] = max(max(a,b),c);
    arr[0] = min(min(a,b),c);
    if(arr[0] == a && arr[2] == b || arr[0] == b && arr[2] == a) arr[1] = c;
    else if(arr[0] == a && arr[2] == c || arr[0] == c && arr[2] == a) arr[1] = b;
    else if(arr[0] == b && arr[2] == c || arr[0] == c && arr[2] == b ) arr[1] = a;
 
    for (size_t i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; 
    }
}