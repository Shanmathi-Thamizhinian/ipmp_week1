
class Solution {
  public:
    void print_divisors(int n) {
        vector<int> rem;
       for(int i=1;i<=sqrt(n);i++){
           if(n%i==0){
               if(n/i==i){
                   cout<<i<<' ';
               }
               else{
                   cout<<i<<' ';
                   rem.push_back(n/i);
               } 
           }
       }
       for(int i=rem.size()-1;i>=0;i--){
           cout<<rem[i]<<' ';
       }
    }
};

