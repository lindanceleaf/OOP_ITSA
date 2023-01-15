#include <iostream>
using namespace std;

// use recursive gcd function to get gcd
int gcd(int a, int b){
    int r = a%b;
    a = b;
    b = r;
    if(b) return gcd(a, b);
    else return a;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
}