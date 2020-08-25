#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n];
       for(int i=0;i<n;i++){cin >> a[i];}
       vector<long long>ans;
       ans.push_back(1);
       if(n==1)cout << 1 <<endl;
       else{
           for(int i = n-2; i >=0 ; i--){
           if(a[i]*(long long)a[i+1] > 0){
               ans.push_back(1);
           }
           else{
               ans.push_back(1+ans.back());
           }
        }
        reverse(ans.begin(),ans.end());
       for(int i=0;i<n;i++){cout << ans[i] << " ";}
       cout << endl;
       }
       
    }
    return 0;
}