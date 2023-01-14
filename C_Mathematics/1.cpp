#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int upper, lower, height;
    // get data
    while(cin >> upper >> lower >> height){
        double area = (double)height * (upper + lower) / 2;
        // output with rule that round to tenth
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }
}