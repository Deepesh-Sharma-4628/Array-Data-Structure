class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        int p2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[p2]!=0){
                swap(nums[p1],nums[p2]);
                p1++;
                p2++;
            }
            else p2++;
        }
    }
};