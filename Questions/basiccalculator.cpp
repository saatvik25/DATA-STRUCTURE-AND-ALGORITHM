// Problem Explanation
// The "Basic Calculator II" problem requires implementing a basic calculator to evaluate a simple expression string. The expression string can contain non-negative integers, +, -, *, /, and empty spaces. The operations are performed in the standard operator precedence, which means multiplication and division should be performed before addition and subtraction.

// Example
// For the input "3+2*2", the result should be 7 because:

// First, multiply 2 * 2 to get 4.
// Then, add 3 + 4 to get 7.
// Approach to Solve the Problem
// Use a Stack:

// We'll use a stack to handle the numbers and intermediate results.
// We'll iterate through the string, parse the numbers, and handle the operators.
// Handling Operators:

// When we encounter + or -, we'll push the current number to the stack (add or subtract).
// For * and /, we'll perform the operation with the top of the stack and update the stack.
// Final Sum:

// After processing the entire string, the result will be the sum of the numbers in the stack.




class Solution {
public:
    int calculate(string s) {
        int num=0;
        char opr='+';
        stack<int>st;

        for(int i=0;i<s.length();i++)
        {
            char c=s[i];

            //if char is digit,convert char c to numeric val
            if(isdigit(c))
            {
                num=num*10+(c-'0');
            }

            if((!isdigit(c) && c!=' ') || i==s.size()-1)
            {
                if(opr=='+')
                {
                    st.push(num);
                }
                else if(opr=='-')
                {
                    st.push(-num);
                }
                else if(opr=='*')
                {
                    int temp=st.top()*num;
                    st.pop();
                    st.push(temp);
                }
                else if(opr=='/')
                { 
                        int tmp=st.top()/num;
                        st.pop();
                        st.push(tmp);
                }
                opr=c;
                num=0;
            }
        }

        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
