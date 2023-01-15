#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    // 35 is lcm of 5, 7
    for(int i = 35; i <= num; i += 35){
        if(i != 35) cout << " ";
        cout << i;
    }
    cout << endl;
}