Problem Description
Given an integer 
N
N, calculate the "clumsy factorial" using the operations in the following order:

Multiply by the next number.
Divide by the next number.
Add the next number.
Subtract the next number.
The sequence of operations repeats every four numbers.

Example
For 
N
=
10
N=10, the clumsy factorial is calculated as follows:

10
∗
9
/
8
+
7
−
6
∗
5
/
4
+
3
−
2
∗
1
10∗9/8+7−6∗5/4+3−2∗1

Steps to Solve the Problem
Initialize Variables:

A stack to keep track of intermediate results.
A variable to keep track of the current operation.
Iterate through Numbers:

Starting from 
N
N down to 1.
Apply the operations in the correct sequence.
Handle Each Operation:

Multiply: Multiply the top of the stack by the current number.
Divide: Divide the top of the stack by the current number (integer division).
Add: Push the current number onto the stack.
Subtract: Push the negative of the current number onto the stack.
Sum Up the Stack:

After processing all numbers, the stack will contain the results of addition and subtraction operations.
Sum up the stack to get the final result.



      class Solution {
    public:
    int clumsy(int n) {
        stack<int> ans;
        ans.push(n);
        n--;
        int operation =0;
        while(n>0){
            if(operation == 0){
                int top = ans.top();
                ans.pop();
                ans.push(top*n);
            }
            else if(operation == 1){
                int top = ans.top();
                ans.pop();
                ans.push(top/n);
            }
            else if(operation == 2){
                ans.push(n);
            }
            else if(operation==3){
                ans.push(-n);
            }
            operation = (operation+1)%4;
            // as we repeat afeter every 4 operation so % as it give remainde
            n--;
        }
        // now sum up all in stack
        int result =0;
        while(!ans.empty()){
            result += ans.top();
            ans.pop();
        }
        return result;
    }
};
