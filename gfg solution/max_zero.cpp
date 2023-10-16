


class Solution {
public:
    int lower_bound(vector<int> arr, int n, int x) {
        int l = 0;
        int h = n - 1;
        int res = n; // Initialize res to -1
        while (l <= h) { // Change the condition to l <= h
            int mid = l + (h - l) / 2;
            if (arr[mid] >= x) {
                res = mid; // Update res when the condition is met
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

    int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int cnt_max = 0;
        int cnt = 0;
        int index = -1; // Initialize index to -1
        for (int i = 0; i < n; i++) {
            cnt = m - lower_bound(arr[i], m, 1); // Pass the row arr[i] to lower_bound
            if (cnt > cnt_max) {
                cnt_max = cnt;
                index = i;
            }
        }
        return index;
    }
};
