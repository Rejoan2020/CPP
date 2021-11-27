#include <bits/stdc++.h>
using namespace std;
long long t;
int static ar[100][100];

int knapsac(int wa[],int v[],int w,int n){
    if(w==0 || n==0) return 0;
    if(ar[n][w]!=-1)return ar[n][w];

    if(wa[n-1]>w)return ar[n][w]=knapsac(wa,v,w,n-1);
    else {
        return ar[n][w]=max((v[n-1]+knapsac(wa,v,w-wa[n-1],n-1)),knapsac(wa,v,w,n-1));
    }
}
int main() {
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        ar[i][j]=-1;
    }
}
        int ans=knapsac(a,b,10,n);
        cout<<ans<<endl;
    }
}
