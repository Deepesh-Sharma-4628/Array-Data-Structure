class Solution{   
public:
    void segregate0and1(int arr[], int n) {
  
        //approach 1- Sorting
        sort(arr + 0,arr + n);
        //approach 2- count 0 and 1
        //Two pointers
        
        int low=0;
        int high=n-1;
        while(low<high){
            if(arr[low]==1 && arr[high]==0){
            swap(arr[low],arr[high]);
            low++;high--;}
            else if(arr[low]==0)low++;
            else if(arr[high]==1)high--;
        }
        
    }
};