class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> a{2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        int n=words.size();
        vector<string>s;
        for(int i=0;i<n;i++){
            int x=a[tolower(words[i][0])-'a'];
            int flag=0;
            for(int j=1;j<words[i].length();j++){
                if(x!=a[tolower(words[i][j])-'a']){
                    flag=1;
                }
            }
            if(flag==0){
                s.push_back(words[i]);
            }
        }
        return s;
    }
};
