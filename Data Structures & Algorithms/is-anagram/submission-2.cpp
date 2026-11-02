class Solution {
public:
    bool isAnagram(string s, string t){
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> freq_s;
        unordered_map<char,int> freq_t;

        for(int i=0;i<s.length();i++){
            freq_s[s[i]]++;
            freq_t[t[i]]++;
        }
        return freq_s == freq_t;
    }
};
