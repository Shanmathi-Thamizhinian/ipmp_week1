#include <iostream>
using namespace std;

void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"enter no:"<<endl;
	int n;
	cin>>n;
	nForest(n);
}
