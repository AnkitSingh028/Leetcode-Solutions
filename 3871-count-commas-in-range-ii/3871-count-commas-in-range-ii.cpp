class Solution {
public:
    long long countCommas(long long n) {
        // 0 commas
        if(n<1000)return 0;
        // 1 
        if(n<1e6)return (n-1000)+1;
        long long ans = 1LL*(1e6-1e3);
        // 2
        if(n<1e9)return ans+ 1LL*(n-1e6+1)*2;
        // 3
        ans+= 1LL*(1e9-1e6)*2;
        if(n<1e12)return ans + 1LL*(n-1e9+1)*3;
        // 4
        ans+= 1LL*(1e12-1e9)*3;
        if(n<1e15)return ans + (n-1e12+1)*4;
        // 5
        return ans + (1e15-1e12+1)*4 + 1;
    }
};