class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count_max = 0;
        int count =0;

        for (int i =0; i< nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }else{
                if(count_max < count){
                    count_max= count;
                }
                count =0;
            }

            if(count_max < count){
                    count_max= count;
                }

        }
        return count_max;
    }
};
