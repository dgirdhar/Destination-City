class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> tempMap;
        string res = "";
        
        for (int i = 0; i < paths.size(); ++i) {
            map<string, int>::iterator iter = tempMap.find(paths[i][0]);
            map<string, int>::iterator endIter = tempMap.end();
            
            if (iter != endIter) {
                iter->second += 1;
            }
            else {
                tempMap.insert(pair<string, int>(paths[i][0], 1));
            }
            
            iter = tempMap.find(paths[i][1]);
            endIter = tempMap.end();
            
            if (iter != endIter) {
                iter->second += 2;
            }
            else {
                tempMap.insert(pair<string, int>(paths[i][1], 2));
            }
        }
        
        map<string, int>::iterator iter = tempMap.begin();
        map<string, int>::iterator endIter = tempMap.end();
        
        for (; iter != endIter; ++iter) {
            if (iter->second == 2) {
                res = iter->first;
                break;
            }
        }
        
        return res;
    }
};
