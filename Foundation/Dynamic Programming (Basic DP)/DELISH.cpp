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
//SOLUCHAN======================================================================================================================================
void solve(){
    cin >> n;
    int a[n];

    rep(i,n) {
        cin >> a[i];
    }
    //rep(i,n)cout<<a[i];
    sort(a,a+n);
    int nsum =0;
    int psum =0;
    rep(i,n){
        if(a[i] < 0)nsum+=a[i];
        else psum+=a[i];
    }
    if(nsum==0){cout << psum - 2*a[0]<<endl;}
    else cout << psum-nsum<<endl;
    
    
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
