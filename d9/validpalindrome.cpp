class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z' || (s[i]>='0' && s[i]<='9')){}
            else if(s[i]>='A'&& s[i]<='Z'){
                s[i]=s[i]+32;
            }
            else{
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<s;
        string str=s;
        reverse(str.begin(),str.end());
        if(s==str){
            return true;
        }
        return false;}
};
