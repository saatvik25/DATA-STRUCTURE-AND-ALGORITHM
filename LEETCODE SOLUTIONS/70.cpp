


class Solution {
public:
    int climbStairs(int n) {
        // if(n<0){
        //     return 0;
        // }
        // if(n == 0 ){
        //     return 1;
        // }

        // int ans = climbStairs(n-1) + climbStairs(n-2);

        // return ans;

        int arr[46]; //as constrain is less than 45
        arr[0]= 0;
        arr[1] = 1;
        arr[2] = 2;
        
        for(int i=3;i<=n;i++){
         arr[i]= arr[i-1] + arr[i-2];
         
        }
        return arr[n];
    }
};

