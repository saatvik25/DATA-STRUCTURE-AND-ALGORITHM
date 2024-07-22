To solve the "Gas Station" problem, we need to determine the starting gas station index from which we can travel around the circuit once in the clockwise direction. If such a starting index exists, it is guaranteed to be unique. Here's a solution in C++ that efficiently determines this index:

### Key Observations:

1. **Net Gas Calculation**: If the total amount of gas available (`sum_gas`) is less than the total amount of gas required (`sum_cost`), it's impossible to complete the circuit. Hence, return -1.
2. **Greedy Approach**: If `sum_gas` is greater than or equal to `sum_cost`, there must be a valid starting index. We need to find this index by iterating through the gas stations and maintaining a running sum of the net gas (`gas[i] - cost[i]`). If this running sum becomes negative at any point, it indicates that we cannot start from the previous starting point and should try starting from the next station.

### Solution:

1. Calculate the total gas and total cost.
2. Iterate through the gas stations while maintaining a running sum of the net gas. If the running sum becomes negative, reset the sum and set the next station as the starting point.
3. After the loop, if the total gas is greater than or equal to the total cost, return the starting index; otherwise, return -1.

### C++ Code:

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0;
        int total_cost = 0;
        int current_gas = 0;
        int start_station = 0;

        for (int i = 0; i < gas.size(); i++) {
            total_gas += gas[i];
            total_cost += cost[i];
            current_gas += gas[i] - cost[i];

            // If current_gas is negative, reset start station to i + 1
            if (current_gas < 0) {
                start_station = i + 1;
                current_gas = 0;
            }
        }

        // Check if total gas is sufficient to cover total cost
        if (total_gas < total_cost) {
            return -1;
        } else {
            return start_station;
        }
    }
};
```

### Explanation:

1. **Initialization**: Initialize `total_gas` and `total_cost` to zero. These will track the overall gas and cost. `current_gas` tracks the gas available in the current segment, and `start_station` keeps track of the potential starting gas station.

2. **Iteration**: Loop through each gas station:
   - Update the total gas and total cost.
   - Update the `current_gas` by subtracting the cost from the gas available.
   - If `current_gas` drops below zero, it means starting from the previous `start_station` can't complete the circuit. So, we set `start_station` to `i + 1` and reset `current_gas`.

3. **Validation**: After the loop, if `total_gas` is less than `total_cost`, return -1. Otherwise, return `start_station`.

This algorithm runs in O(n) time complexity, making it efficient for large inputs.
