class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        vector<int> nums_sorted;
        nums_sorted = nums;
        sort(nums_sorted.begin(),nums_sorted.end());
        int start = nums.size(), end =0;

        for(int i=0; i<nums.size(); i++){

            if(nums[i] != nums_sorted[i]){
                start = min(start, i);
                end = max(end,i);
            }
        }

        return (end-start >= 0) ? end-start+1 : 0;

    }
};
