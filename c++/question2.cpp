class Solution {
public:
    int findLucky(vector<int>& arr) {


        unordered_map<int, int> freq_map;
        int result = -1;

        for (int x: arr){
            freq_map[x]++;
        }


        for (auto x: freq_map){
            if (x.first == x.second){
                result = max(result, x.first);
            }
        }

        return result;

    }
};
