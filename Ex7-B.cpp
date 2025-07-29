//Varija K
//24070123165
//Program 2
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, num;
    bool exists = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            cout << "Position: " << i + 1 << endl;
            exists = true;
            break;
        }
    }

    if (!exists) {
        cout << "Number is not in the array." << endl;
    }

    return 0;
}