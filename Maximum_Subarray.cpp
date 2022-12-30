class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute Force
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int currsum=0;
                for(int j=i;j<nums.size();j++){
                    currsum+=nums[j];
                    if(currsum>maxsum)
                    maxsum=currsum;
                }
        }
        return maxsum;
    }

    //Kadane's Algorithm
       int maxsum=INT_MIN;
       int currsum=0;
       for(int i=0;i<nums.size();i++){
           currsum+=nums[i];
           if(currsum>maxsum)
           maxsum=currsum;
           if(currsum<0){
               currsum=0;
           }
       }
       return maxsum;
};