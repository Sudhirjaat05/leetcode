class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int ans=n;
        while(n>0){
            int i=n%10;
            sum+=i;
            prod*=i;
            n/=10;
        }
        if(ans%(sum+prod)==0) return true;
        else return false;
    }
};