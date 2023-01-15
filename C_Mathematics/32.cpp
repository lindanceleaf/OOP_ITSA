#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    int tmp = num;
    int sum = 0;
    // use a number to get every digit to calculate
    for(int i = 0; i < 3; i++){
        int t = tmp % 10;
        tmp /= 10;
        sum += (t * t * t);
    }
    if(sum == num) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}