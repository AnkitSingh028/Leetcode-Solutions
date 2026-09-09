class Solution {
public:
    int countVowelSubstrings(string word) {
        int cnt = 0;
        for(int i =0;i<word.size();i++){
            unordered_set<char> s;
            for(int j=i;j<word.size();j++){
                if((!isVowel(word[j])))break;
                s.insert(word[j]);
                if(s.size()==5)cnt++;
            }
        }
        return cnt;
    }
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
        return false;
    }
};