class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high = n-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]==target) return mid;
            // now check which half is sorted
            if(nums[mid]>=nums[low]){
                if(target>=nums[low] && target<=nums[mid]) high=mid-1; //lies in range
                else low = mid+1; //not 
            }
            else if(nums[mid]<=nums[high]){
                if(target<=nums[high] && target>=nums[mid]) low = mid+1;
                else high = mid-1;
            }

        }
        return -1;
    }
};