bool checkArmstrong(int n){
	int org=n;
	int place=1;
	int sum=0;
	if(n==0)return true;
	else{
		while(n>0){
			int m=n%10;
			for(int i=0;i<place;i++){   //or sum+=(int)pow(m,place);
				m=m*m;
			}
			sum+=m;
			place++;
			n=n/10;
		}
		if(sum==org)return true;
		else{return false;}
	}
}
