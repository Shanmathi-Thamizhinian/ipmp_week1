#include<iostream>
using namespace std;

int main() {
	int rev=0;
	int N;
	cin>>N;
	if(N==0){
		cout<<N;
	}
	else{
		while(N>0){
			int n=N%10;
			rev=rev*10+n;
			N=N/10;
		}
		cout<<rev;
	}
	
}
