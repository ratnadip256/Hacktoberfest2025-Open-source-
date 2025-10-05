class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mideum = 0;
        int high = nums.size() - 1;
        while(mideum <= high){
            if(nums[mideum] == 0) {
                swap(nums[low],nums[mideum]);
                low ++;
                mideum ++;
            } else if(nums[mideum] == 1) {
                mideum ++;
            } else {
                swap(nums[mideum],nums[high]);
                high --;
            }
        }
    }
};
