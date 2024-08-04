
### C++ Solution

```cpp
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int longest =0;
        if(arr.size()<3){
            return 0;
        }
        // we give from 0-n-2 as peak cannot be last and last second
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                int left=i-1;
                int right =i+1;
                while(left>0 && arr[left]>arr[left-1]){
                    left--;
                }
                while(right<n-1 && arr[right]>arr[right+1]){
                    right++;
                }
                int total = right-left+1;
                 longest = max(longest,total);
                i = right;
            }
        }
        return longest;
    }
};

```

### Explanation

1. **Initial Checks**:
    - The function checks if the size of the array is less than 3. If it is, it returns 0 since a valid mountain cannot exist.

2. **Main Loop**:
    - The loop starts from the second element and goes up to the second last element (`1` to `n-2`). This is because a peak cannot be at the first or last position.
    - For each element, it checks if it is a peak by comparing it with its previous and next elements.

3. **Finding Mountain Boundaries**:
    - If the current element is a peak, the algorithm expands outwards from the peak to find the left and right boundaries of the mountain.
    - It moves left while the current element is greater than the previous one.
    - Similarly, it moves right while the current element is greater than the next one.

4. **Calculate Length**:
    - The length of the current mountain is calculated as `right - left + 1`.
    - The `longest` variable is updated if the current mountain length is greater than the previously recorded longest mountain.

5. **Optimization**:
    - To optimize, `i` is moved to `right` (end of the current mountain) to avoid unnecessary checks for elements that are part of the current mountain.

6. **Return Result**:
    - Finally, the function returns the length of the longest mountain found. If no valid mountain is found, it returns 0.

time complexity of O(n).
