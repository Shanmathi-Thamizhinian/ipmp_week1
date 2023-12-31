//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    vector<int> result;
	    vector<bool>spf(N+1,true);
	    for(int i=2;i*i<=N;i++){
	        if(spf[i]==true){
	            for(int j=i*i;j<=N;j=j+i){
	                    spf[j]=false;
	           }
	        }
	    }
	    while(N!=1){
	        int prev=0;
	        for(int i=2;i<=N;i++){
	            while(spf[i] && N%i==0){
	                if(prev!=i){
	                    result.push_back(i);
	                    prev=i;
	                }
	                N=N/i;
	            }
	        }
	    }
	    
	    return result;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
