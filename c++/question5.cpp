#include <string.h>
#include <iostream>
#include <map>
#include <utility>

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        // return max if size less than 3
        if(nums.size()<3){
            return *max_element(nums.begin(),nums.end());
        }


        long first_max=LONG_MIN, second_max = LONG_MIN, third_max = LONG_MIN;

        for(int i =0; i<nums.size(); i++){
            // check for distinct elements only
            if(nums[i] == first_max || nums[i] == second_max || nums[i] == third_max)
                continue;

            if(first_max < nums[i]){
                third_max = second_max;
                second_max = first_max;
                first_max = nums[i];
            }
            // if nums[i] is between first_max and second_max
            else if(second_max < nums[i]){
                third_max =second_max;
                second_max = nums[i];
            }
            // if nums[i] is between second_max and third_max
            else if(third_max < nums[i]){
                third_max = nums[i];
            }
        }

        // if third_max exists return that else return firs_max
        return  third_max == LONG_MIN ? first_max : third_max  ;
    }

    };
