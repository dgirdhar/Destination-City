class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> tempMap;
        string res = "";
        
        for (int i = 0; i < paths.size(); ++i) {
            tempMap[paths[i][0]] += 1;
            tempMap[paths[i][1]] += 2;
        }
        
        unordered_map<string, int>::iterator iter = tempMap.begin();
        unordered_map<string, int>::iterator endIter = tempMap.end();
        
        for (; iter != endIter; ++iter) {
            if (iter->second == 2) {
                res = iter->first;
                break;
            }
        }
        
        return res;
    }
};
