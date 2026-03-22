bool compare(string a, string b){
        return a+b>b+a;
}   
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int it:nums)v.push_back(to_string(it));
        sort(v.begin(),v.end(),compare);
        string s;
        for(int i=0;i<v.size();i++)s+=v[i];
        if(s[0]=='0')return "0";
        return s;
    }
};