#include<bits/stdc++.h>
using namespace std;

int solve(int *a,int W, int n){
    int t[n+1][W+1];
    for(int i=0;i<=n;i++){
        t[i][0] = 0; 
    }
    for(int j=0;j<=W;j++){
        t[0][j] = INT_MAX-1; 
    }
    for(int j=1;j<=W;j++){
        if(j % a[0] == 0)t[1][j] = j/a[0];
        else t[1][j] = INT_MAX-1; 
    }
    for(int i=2;i<=n;i++){
        for(int j=1; j<=W;j++){
            if(a[i-1] <= j){
                t[i][j] = min (t[i-1][j], 1+ t[i][j-a[i-1]]);
            }
            else t[i][j] = t[i-1][j];
        }
    }
    return t[n][W];
    
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            sum += b[i];
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += solve(a,2*b[i],n);
        }
        cout << ans << "\n";
    }

}