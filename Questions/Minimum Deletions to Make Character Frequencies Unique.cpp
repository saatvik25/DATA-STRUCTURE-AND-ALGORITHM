Let's dry run the solution on **Example 3**:  
**Input**: `s = "ceabaacb"`

### Step 1: Count Character Frequencies
We first count how many times each character appears in the string.

- Frequency of 'c' = 2
- Frequency of 'e' = 1
- Frequency of 'a' = 3
- Frequency of 'b' = 2

So, the frequency map looks like this:
```cpp
{'c': 2, 'e': 1, 'a': 3, 'b': 2}
```

### Step 2: Store Frequencies in a Vector
We extract the frequencies and store them in a vector:
```cpp
frequencies = {2, 1, 3, 2}
```

### Step 3: Sort Frequencies in Descending Order
Next, we sort the `frequencies` vector in descending order:
```cpp
frequencies = {3, 2, 2, 1}
```

### Step 4: Adjust Frequencies to be Unique

We will now ensure that all frequencies are unique by potentially deleting characters. We initialize `maxAllowedFreq` as the highest frequency, which is `3` (from the sorted list).

We iterate through the frequencies one by one:

#### 1. First frequency = `3`
- This is the highest frequency, so no deletion is needed.
- Set `maxAllowedFreq = 3 - 1 = 2` for the next frequency.

#### 2. Second frequency = `2`
- This is less than or equal to `maxAllowedFreq` (which is `2`), so no deletion is needed.
- Set `maxAllowedFreq = 2 - 1 = 1` for the next frequency.

#### 3. Third frequency = `2`
- Now, this frequency is greater than `maxAllowedFreq` (which is `1`).
- We need to reduce the frequency from `2` to `1`, which requires **1 deletion**.
- Set `maxAllowedFreq = 1 - 1 = 0` for the next frequency.

#### 4. Fourth frequency = `1`
- This frequency is greater than `maxAllowedFreq` (which is `0`), so we need to delete all characters corresponding to this frequency (i.e., 1 deletion to make this frequency `0`).
- Set `maxAllowedFreq = max(0, 0 - 1) = 0`.

### Total Deletions
We made 2 deletions:
- 1 deletion to reduce a frequency of 2 to 1.
- 1 deletion to reduce a frequency of 1 to 0.

### Final Output:
```cpp
Output = 2
```

### Conclusion:
The dry run for the string `"ceabaacb"` shows that we need **2 deletions** to make all character frequencies unique.




class Solution {
public:
    int minDeletions(string s) {
        
        // to find frequency
        unordered_map<char,int> mp;

        for(char i : s){
            mp[i]++;
        }
        vector<int> freq;
        for(auto i : mp){
            freq.push_back(i.second);
        }
        sort(freq.rbegin(),freq.rend());
        int maxfreq = freq[0];
        int deletee =0;
        
        // frequencies = {3, 2, 2, 1}

       for(int i : freq){
            if(i> maxfreq){
                deletee += i-maxfreq;
                i=maxfreq;
            }
            maxfreq = max(0,i-1);
        }
        return deletee;
    }
};
