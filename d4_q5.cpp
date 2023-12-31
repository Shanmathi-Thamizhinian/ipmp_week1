class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long no=n;
        if(no<0) no=-1*no;
        while(no){
            if(no%2==1){
                ans=ans*x;
                no=no-1;
            }
            else{
                x=x*x;
                no=no/2;
            }
        }
        if(n<0) return 1/ans;
        else return ans;
    }
};
