#include <iostream>
#include <vector>
#include <algorithm> // Fix 1: Added for sort()

using namespace std;

bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist) {
    int cows = 1;
    int lastStallPos = arr[0];
    
    // Fix 2: Changed i <= N to i < N to prevent out-of-bounds errors
    for (int i = 1; i < N; i++) {
        if (arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows >= C) { // Fix 3: Standardized conditional safety
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());
    
    int st = 1;
    int end = arr[N - 1] - arr[0];
    int ans = -1; // Fix 4: Removed the broken "-a" syntax
    
    while (st <= end) {
        int mid = st + (end - st) / 2;
        
        if (isPossible(arr, N, C, mid)) {
            ans = mid;
            st = mid + 1; // Try to maximize the minimum distance
        } else {
            end = mid - 1; // Look for a smaller, feasible gap
        }
    }
    return ans; // Fix 5: Added missing return statement
}

int main() {
    int N = 5, C = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    
    cout << getDistance(arr, N, C) << endl; // Output will be 3
    return 0;
}
