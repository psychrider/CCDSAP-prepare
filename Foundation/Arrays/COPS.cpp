#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int M,x,y;
        cin >> M >> x >>y;
        int a[M];
        int ans =0;
        for(int i=0;i<M;i++){
            cin >> a[i];
            if(i==0){
                if(a[0]-1 < x*y) ans += a[0]-1 - x*y;
            }
            else if (i == M-1){
                if(a[i] + x*y < 100) ans += 100-a[i]-x*y;
            }
        }
        

    }
}