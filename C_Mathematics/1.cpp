#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int upper, lower, height;
    while(cin >> upper >> lower >> height){
        double area = (double)height * (upper + lower) / 2;
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }
}