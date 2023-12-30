bool palindrome(int n)
{
    int org=n;
    int rev=0;
    if(n==0){
        return true;
    }
    else{
        while(n>0){
            int m=n%10;
            rev=rev*10+m;
            n=n/10;
        }
        if(rev==org)return true;
        else{return false;}
    }
}
