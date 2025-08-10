class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> count; 
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        vector<vector<int>> res{{}}; int sze = nums.size(); auto it = count.begin();
        while(sze != 0){
            if(it == count.end()) {
                it = count.begin();
                res.push_back({});
            }
            if(it->second > 0) {
                res.back().push_back(it->first);
                it->second--;
                sze--;
            }
            it++;
        }

        return res;
    }
};