
### Explanation Line by Line

1. **Class and Method Definition**:

```cpp
class Solution {
public:
    bool hasAllCodes(string s, int k) {
```

- Define a class `Solution` with a public method `hasAllCodes` that takes a string `s` and an integer `k`.

2. **Initial Check**:

```cpp
        if (s.size() < k) return false;
```

- If the length of the string `s` is less than `k`, return `false` because it's impossible to have all binary codes of length `k`.

3. **Set to Track Substrings**:

```cpp
        unordered_set<string> seen;
```

- Use an unordered set `seen` to store all unique substrings of length `k`.

4. **Sliding Window**:

```cpp
        for (int i = 0; i <= s.size() - k; ++i) {
            string sub = s.substr(i, k);
            seen.insert(sub);
        }
```

- Slide a window of length `k` over the string `s`.
- For each position `i` from `0` to `s.size() - k`, extract the substring of length `k` starting at `i` and add it to the set `seen`.

5. **Check Number of Unique Substrings**:

```cpp
        return seen.size() == pow(2, k);
    }
};
```

- Check if the number of unique substrings in the set `seen` is equal to `2^k`.
- If yes, return `true`; otherwise, return `false`.

### Example Walkthrough

For `s = "00110110"` and `k = 2`:

1. Slide window of length 2:
   - `"00"`, `"01"`, `"11"`, `"10"`, `"01"`, `"11"`, `"10"`
2. Unique substrings are:
   - `{"00", "01", "11", "10"}`
3. There are `2^2 = 4` unique substrings, so the function returns `true`.

This approach ensures that we efficiently check for all possible binary codes of length `k` in the string `s` using a sliding window and a set.




  #include <unordered_set>
#include <string>
#include <cmath>
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>ans;

        int len = s.length();
        if(len<k){
            return false;
        }

        // now use sliding window as it has specific size k;
        for(int i=0;i<len-k;i++){
            string subs = s.substr(i,k);
            ans.insert(subs);
        }
        return ans.size() == pow(2, k);

    }
};
