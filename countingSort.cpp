#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Find maximum element
    int maxElement = *max_element(arr.begin(), arr.end());

    // Step 2: Create count array
    vector<int> count(maxElement + 1, 0);

    // Step 3: Store frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Step 4: Modify count array (prefix sum)
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Step 5: Output array (stable sort)
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Step 6: Copy back to original array
    arr = output;

    cout << "Sorted array:\n";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
