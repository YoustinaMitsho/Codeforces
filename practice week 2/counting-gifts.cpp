/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/412612/problem/C
Problem status: Accepted
By: Youstina Mitsho
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int toys = 0, electronics = 0, books = 0, cds = 0;
    while (n--)
    {
        char ch; cin >> ch;
        switch (ch) {
            case 't':
                toys++; 
                break;
            case 'e':
                electronics++;
                break;
            case 'b':
                books++; 
                break;
            case 'c':
                cds++;
                break;
            default:
                break;
        }
    }
    cout << toys << " " << electronics << " " << books << " " << cds;
}