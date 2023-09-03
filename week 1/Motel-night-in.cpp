#include <iostream>
using namespace std;
int main(){
    long long d, s; cin >> d >> s;
    double twothirds = ((d*2)/3);
    double onethird = d/3;
    if(s >= twothirds) cout << "Sunny Day";
    else if(s <= onethird) cout << "Rainy Day";
    else cout << "Cloudy Day";
}