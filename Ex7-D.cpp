//Varija K
//24070123165
//Program 4
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int min, max;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    min = max = arr[0];  // Initialize both to the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum number = " << min << endl;
    cout << "Maximum number = " << max << endl;

    return 0;
