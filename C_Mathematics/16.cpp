#include <iostream>
using namespace std;

int main(){
    // the radius = 100, so x^2 + y^2 <= 100^2
    int x, y;
    cin >> x >> y;
    if(x*x + y*y <= 1e4) cout << "inside" << endl;
    else cout << "outside" << endl;
}