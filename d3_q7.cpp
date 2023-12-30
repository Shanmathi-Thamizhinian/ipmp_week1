int gcd(int a,int b)
{
	int gcd=0;
	for(int i=1;i<=a&&i<=b;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	return gcd;
}

/*int gcd(int a,int b)
{
	while(a>0 && b>0){
      if(a>b) a=a%b;
      else b=b%a;
 }
 if(a==0) return b;
 else return a;
}*/
