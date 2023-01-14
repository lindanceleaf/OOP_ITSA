#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double length;
    while(cin >> length){
        // formula to calculate square area
        double area = length * length;
        cout << fixed << setprecision(1) << round(10*area) / 10 << endl;
    }
}