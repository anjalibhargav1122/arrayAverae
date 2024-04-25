#include <iostream>
using namespace std;

int main(){
     int num;
    cout << "Enter the numbers: ";
    cin >> num;

int arr [num];

 for (int i = 0; i < num; ++i) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

 int sum = 0;
    for (int i = 0; i < num; ++i) {
        
        sum += arr[i];
    }
    
     float s = sum/num;

    cout << "Average: " << s << endl;

}

