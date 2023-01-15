#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int minutes;
    cin >> minutes;

    // confirm that output to the tenth
    cout << fixed << setprecision(1);
    if(minutes <= 800) cout << round(10 * 0.9 * minutes) / 10 << endl;
    else if(minutes < 1500) cout << round(10 * 0.81 * minutes) / 10 << endl;
    else cout << round(10 * 0.79 * 0.9 * minutes) / 10 << endl;
}