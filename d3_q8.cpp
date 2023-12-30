int LCM(int a,int b){
  int max=max(a,b);
  int min=min(a,b);
  for(int i=max;;i=i+max){
     if(i%min==0) return i;
  }
}
