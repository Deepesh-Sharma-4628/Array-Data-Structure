class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
    //BruteForce
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(A[i]+A[j]+A[k]==X)
                    count++;
                }
            }
        }
        return count>0;
    }

            //BruteForce using SET
        vector<vector<int>>ans;
        set<vector<int>>s;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                    
                }
            }
        }
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;

        // Two Pointers
         vector<vector<int>>ans;
         sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++){
             if(i==0 || nums[i]!=nums[i-1]){
                int low=i+1;
                int high=nums.size()-1;
                int sum=-nums[i];
                while(low<high){
                    if(sum==nums[low]+nums[high]){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                    while(low<high && nums[low]==nums[low+1])low++;
                    while(low<high && nums[high]==nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if(sum>nums[low]+nums[high])low++;
                    else high--;
                }
             }
         }
         return ans;

};