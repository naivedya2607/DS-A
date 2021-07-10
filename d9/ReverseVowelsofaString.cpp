class Solution {
public:
    string reverseVowels(string s) {
        string st;
        int h=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                st.push_back(s[i]);
            }  
        }
        reverse(st.begin(),st.end());
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=st[h];
                 h++; 
            }
           
        }
        cout<<st;
        return s;
    }
};
