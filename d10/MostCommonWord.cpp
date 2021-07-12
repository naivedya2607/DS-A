class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string ar;
        int i=0,j,c = 0;
        unordered_map<string, int> mp;
        while(i < paragraph.size()){
            string ar = "";
            while(i < paragraph.size() && isalpha(paragraph[i])){
                ar += tolower(paragraph[i]);
                i++;
            }
            if(ar != "")
                mp[ar]++;
            i++;
        }
        for(j=0;j<b.size();j++){
            mp.erase(banned[j]);
        }
        for(auto it : mp){
            if(c < it.second){
                ar = it.first;
                c = it.second;
            }
        }
        return ar;
    }
};

