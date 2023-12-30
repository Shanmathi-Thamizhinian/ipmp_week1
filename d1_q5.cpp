void symmetry(int n) {
    for(int i=1;i<=2*n;i++){
        int start=(i<n)?i:2*n-i;
        for(int j=1;j<=start;j++){
            cout<<"* ";
        }
        for(int j=1;j<=2*n-2*start;j++){
            cout<<"  ";
        }
        for (int j = 1; j <= start; j++) {
            cout << "* ";
        }
        cout<<endl;
    }
}
