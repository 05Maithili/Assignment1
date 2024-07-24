#include <iostream>
using namespace std;

int main() {
    int A[10], i, n, target, flag = 0, temp;

    cout << "\nEnter the size of the array:\t";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "\nEnter the array element:\t";
        cin >> A[i];
    }

    cout << "\nUnsorted array is:";
    for (i = 0; i < n; i++) {
        cout << "\t" << A[i];
    }

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Array is:";
    for (i = 0; i < n; i++) {
        cout << "\t" << A[i];
    }

    cout << "\nEnter target:\t";
    cin >> target;

    
    for (i = 0; i < n; i++) {
        if (target == A[i]) {
            cout << "\nTarget found at index: " << i;
            flag = 1;
            break;  
        }
    }

    if (flag != 1) {
        cout << "\nTarget not found.";
    }

    return 0;
}

