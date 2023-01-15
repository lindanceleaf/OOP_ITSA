#include <iostream>
using namespace std;

int main(){
    int start_hour, start_min, leave_hour, leave_min;
    cin >> start_hour >> start_min;
    cin >> leave_hour >> leave_min;
    int parking_min = leave_hour*60 + leave_min - (start_hour*60 + start_min);
    if(parking_min <= 120) cout << 30 * (parking_min / 30) << endl;
    else if(parking_min <= 240){
        parking_min -= 120;
        // it park at least 2 hours, result >= 120
        cout << 120 + 40 * (parking_min / 30) << endl;
    }
    else{
        parking_min -= 240;
        // it park at least 4 hours, result >= 120+160
        cout << 280 + 60 * (parking_min / 30) << endl;
    }
}