//Find second largest and Smallest Element in the Array.
#include <iostream>
#include <algorithm>
using namespace std;

void solve(int a[], int n) {
    sort(a, a + n, greater<int>());  

    int first = a[0];
    int second = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] != first) {
            second = a[i];
            break;
        }
    }

    if (second == -1)
        cout << "No second largest element\n";
    else
        cout << "Second largest: " << second << endl;
        
    int last = a[n - 1];
    int secondSmall = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] != last) {
            secondSmall = a[i];
            break;
        }
    }
    if (secondSmall == -1)
        cout << "No second smallest element\n";
    else
        cout << "Second smallest: " << secondSmall << endl;
}

int main() {
    int n;
    cout<<"Enter the Size:"<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter the Array Elements:"<<endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    solve(a, n);

    return 0;
}
