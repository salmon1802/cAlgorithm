////
//// Created by salmon on 2021-9-12.
////
//#include <math.h>
//int maxSubArray(int* nums, int numsSize){
//    int dp[numsSize];
//    dp[0] = nums[0];
//    int max = dp[0];
//    for (int i = 1; i < numsSize; ++i) {
//        dp[i] = fmax(nums[i],dp[i - 1] + nums[i]);
//        if(dp[i] > max){
//            max = dp[i];
//        }
//    }
//    return max;
//}
