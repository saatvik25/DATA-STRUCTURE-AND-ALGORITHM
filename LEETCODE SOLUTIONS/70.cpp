


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
// int climbStairs(int n) {
//         int arr[46];  // because Constraints are: 1 <= n <= 45
//         arr[0] = 1; // oth stairs should be 1
//         arr[1] = 1; // 1th stair should be 1
//         arr[2] = 2; // 2nd stair should be 2
//         for(int i=3; i<=n; i++){
//             arr[i] = arr[i-1] + arr[i-2];
//         }
//         return arr[n]; // finally returning the answer
//     }
