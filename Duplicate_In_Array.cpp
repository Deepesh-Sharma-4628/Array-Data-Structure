#include<map>
int findDuplicate(vector<int> &arr) 
{
    // Approach 1:- Using XOR {T.C O(n)}
    int ans=0;
	for(int i=0;i<arr.size();i++){
        ans=ans^arr[i]^i;
    }
    return ans;
    
    //Approach 2:- Bruteforce (Counting occurance)(T.C O(n^2))
    for(int i=0;i<arr.size();i++){
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j])
                count++;
        }
        if(count>1)
            return arr[i];
    }
    
    // Approach 3:- Using Map (T.C O(n logn))
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>1)
            return it.first;
    }
///Approach fast ans slow pointer
    class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int fast=nums[0],slow=nums[0];
      do {
           slow=nums[slow];
           fast=nums[nums[fast]];
       }while(slow!=fast);

       fast=nums[0];
       while(fast!=slow){
           fast=nums[fast];
           slow=nums[slow];
       }
       return slow;
    }
};
}