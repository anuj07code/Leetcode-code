class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[mid+1]){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
       
        // for(int i=0;i<n-2;i++){
        //     // int j=i+1;
        //     // int k=j+1;
        //     if(nums[i]>nums[i+1] || nums[i+1]<nums[i+2]){
        //         continue;
        //     }
        //     if(nums[i]<nums[i+1] && nums[i+1]>nums[i+2]){
        //         return i+1;
        //     }
        // }
        // return 0;
    }
};