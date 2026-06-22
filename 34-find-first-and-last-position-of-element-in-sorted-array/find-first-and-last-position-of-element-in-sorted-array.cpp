class Solution {
public:
    int lowerbound(vector<int>& nums,int n,int target){
        int low=0,high=n-1,ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }

    int upperbound(vector<int>& nums,int n,int target){
        int low=0,high=n-1,ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums,n,target);
        if(lb==n || nums[lb]!=target) return {-1,-1};
        int ub = upperbound(nums,n,target);
        return {lb, ub-1};
    }

    // vector<int> searchRange(vector<int>& nums, int target) {
    //    int n=nums.size();

    //    int first=-1;
    //    int last=-1;
    //    for(int i=0;i<n;i++){
    //        if(nums[i]==target){
    //         if(first==-1){
    //             first=i;
    //         }
    //         last=i;
    //        }
    //    }
    //    return {first,last};
    // }
};