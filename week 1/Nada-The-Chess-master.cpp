/*
Problem link: https://codeforces.com/group/048Nd2lQKb/contest/411177/problem/J
Problem status: Accepted
By: Youstina Mitsho
*/


#include <bits/stdc++.h>
using namespace std;
int main(){
    char letter; int num; cin >> letter >> num;
    int counter = 0;
    char baseLetter = letter; int baseNum = num;
    // four ways to go: 
    //1. letter inc num dec done
    //2. letter inc num inc done
    //3. letter dec num dec done
    //4. letter dec num inc

    while(letter < 'h' && num > 1){
        counter++;
        letter++;
        num--;
    }
    letter = baseLetter; num = baseNum;
    while(letter < 'h' && num < 8){
        counter++;
        letter++;
        num++;
    }
    letter = baseLetter; num = baseNum;
    while (letter > 'a' && num > 1) {
        counter++;
        letter--;
        num--;
    }
    letter = baseLetter; num = baseNum;
    while(letter > 'a' && num < 8){
        counter++;
        letter--;
        num++;
    }
    cout << counter;
}