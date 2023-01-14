#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int base, height;
    while(cin >> base >> height){
        // use the formula ab/2 to calculate area
        double area = (double)base * height / 2;
        cout << fixed << setprecision(1) << area << endl;
    }
}