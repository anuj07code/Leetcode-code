class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high){
            if(nums[low]<nums[high]){
                ans=min(ans,nums[low]);
                break;
                
            }
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
                if(nums[mid]<=nums[high]){
                    ans=min(ans,nums[mid]);
                    high=mid-1;
                }
                
            }
        }
        return ans;
        // int min=INT_MAX;
        // for(int i=0;i<n;i++){
        //     if(nums[i]<min){
        //         min=nums[i];
        //     }
        // }
        // return min;

    }
};