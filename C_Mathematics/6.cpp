#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double mile;
    while(cin >> mile){
        double km = mile * 1.6;
        // use *10 to use rounding
        cout << fixed << setprecision(1) << round(10*km) / 10 << endl;
    }
}