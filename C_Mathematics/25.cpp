#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int sum = 0;
    // check every number between 1 and N whether is mod 3 == 0
    for(int i = 1; i <= N; i++){
        if(i % 3 == 0) sum += i;
    }
    cout << sum << endl;
}