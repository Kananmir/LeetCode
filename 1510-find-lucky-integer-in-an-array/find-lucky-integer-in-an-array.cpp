class Solution {
public:
    int findLucky(vector<int>& arr) {

        map<int, int>mp;
        for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]]++;
        }
        int max_lucky=-1;
        for(auto pair : mp){
            if (pair.first == pair.second){
                max_lucky = max(max_lucky, pair.first);
            }
        }
        return max_lucky;
    }
};