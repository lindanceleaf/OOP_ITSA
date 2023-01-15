#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    // 1 must be factor
    cout << 1;
    // check every number whether is factor
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            cout << " " << i;
        }
    }
    cout << endl;
}