#include <bits/stdc++.h>

using namespace std;

int main(){
    int tsc; cin >> tsc;
    while (tsc--){
        long long n; cin >> n;
        bool flg = false;
        for (size_t i = 3; i < n/2; i++)
        {
            if(n % i  == 0  && i % 2 != 0 ) flg = true;
        }
        if(flg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}