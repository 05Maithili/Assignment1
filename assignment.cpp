#include <iostream>
using namespace std;
class a
{
    public:
    int A[10], i, n, target, flag = 0, temp;
    void element(int n)
    {
       for (i = 0; i < n; i++) {
        cout << "\nEnter the array element:\t";
        cin >> A[i];
    }

    cout << "\nUnsorted array is:";
    for (i = 0; i < n; i++) {
        cout << "\t" << A[i];
    }
    }
    
    void sorting(int n)
    {
        int temp;
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
    }
    void searching(int target , int n)
    {
       for (i = 0; i < n; i++) {
        if (target == A[i]) {
            cout << "\nTarget found at index: " << i<<"\n";
            flag = 1;
            break;  
        }
    }

    if (flag != 1) {
        cout << "\nTarget not found.\n";
    }
    }
};
int main() 
{  a l,m;
   int N,Target;
   cout << "\nEnter the size of the array:\t";
   cin >> N;
   l.element(N);
   l.sorting(N);
   cout << "\nEnter target:\t";
   cin >> Target;
   l.searching(Target,N);
   return 0;
}
