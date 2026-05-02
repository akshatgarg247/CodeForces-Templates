// Author @2025bce10693
// OUTPUTS THE SORTED ARRAY AND THE INDEX OF TARGET ELEMENT IN SORTED ARRAY

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int arr[10000];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }   
    }
    
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] == x) {
            cout << "\n" << mid;
            return 0;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    
    
    return 0;
}
