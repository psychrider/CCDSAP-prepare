#include <bits/stdc++.h>
using namespace std;
#define reo(i, n) for (int i = 1; i <= n; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repk(i,k,n) for(int i = k ; i < n; i++)
#define repi(i, n) for (auto i = n.begin(); i != n.end(); i++)
#define pb push_back
#define mp make_pair
using ll = long long;
#define uomp(ump) unordered_map<ll,ll> ump; ump.reserve(4096);ump.max_load_factor(0.25);
#define all(v) v.begin() , v.end() 
#define PI 3.1415926535897932384
#define mod 1000000007
ll max(ll a, ll b) {return(a>b?a:b);}
ll min(ll a, ll b) {return(a>b?b:a);}
//============================================================================================================================================
ll a,b,c,d,e,n,m,k,q,x,y,z,w,t,cur,cnt,ma,mi = LONG_LONG_MAX,l,r,sum,i,j,pro =1;
ll arr[200005];
ll arr1[200005];
ll arr2[200005];
ll dp[200005];
ll arr3[1000][1000];
string s;
vector<int> ans;
vector<vector<int>>TT;
//SOLUCHAN======================================================================================================================================
void subxor(int *a,int n,int xo){
    if(n==0){
        ans.push_back(xo);
        return;
    }
    if(TT[n][xo]!=-1)return;
    else{
        TT[n][xo]=1;
        subxor(a,n-1,a[n-1]^xo);        
        subxor(a,n-1,xo);
        //ans.push_back(xo);
    }
}

void solve(){
    ans.clear();
    int n,k;
    cin >> n>> k;
    int arr[n];
    rep(i,n) cin >> arr[i];
    TT.resize(n+1,vector<int>(1024,-1));
    subxor(arr,n,0);
    int max =0;
    for(int i=0;i<ans.size();i++){
        ans[i] = k^ans[i];
        if(max < ans[i])max = ans[i];
    }
    cout << max <<endl;   
}
//==============================================================================================================================================
int main()
{
    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout);
    ll t;
    t=1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
