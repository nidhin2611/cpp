#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    
    if (n < 2) {
        cout << "Array should have at least two elements!" << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    if (secondLargest == INT_MIN)
        cout << "No second largest number (all elements may be equal)." << endl;
    else
        cout << "Second largest number: " << secondLargest << endl;

    return 0;
}

        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    if (secondLargest == INT_MIN)
        cout << "No second largest number (all elements may be equal)." << endl;
    else
        cout << "Second largest number: " << secondLargest << endl;

    return 0;
}
