void nStarTriangle(int n) {
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
