void nStarDiamond(int n) {
    for(int i=0;i<n;i++){
        for(int k=i;k<n-1;k++){
            cout<<' ';
        }
        for(int j=0;j<(2*i+1);j++){  //0-1 1-3 2-5
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<' ';
        }
        for(int j=i;j<(2*(n-i)-1)+i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
