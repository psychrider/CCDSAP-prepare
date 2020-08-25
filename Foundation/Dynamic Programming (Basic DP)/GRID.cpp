#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define all(a) begin(a), end(a)
#define s second
#define f first
#define mp make_pair 
#define pii pair<int,int>
#define vpii vector<pii> 
#define ms(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tlower(s1)   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
#define pll pair<ll,ll>
#define cinn(n) int n; cin>>n;
#define cinvi(n) vector <int> v(n); for(int i=0;i<n;i++) cin>>v[i];
#define cinvl(n) vector <ll> v(n); for(int i=0;i<n;i++) cin>>v[i];
#define cinvp(n) vpii v(n); for(int i=0;i<n;i++) cin>>v[i].f>>v[i].s;
#define fori(a,n) for(int i=a;i<n;i++)
# define PI  3.14159265358979323846
#define MOD 1000000007
//nth_element(v,v+k,v+n) gives the array with v[k] in its sorted positon in O(n)

bool cmp(string a,string b)
{
    return a.size()<b.size();
}


void showvi(vector<int> v)
{
    cout<<v.size()<<" ";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void showvl(vector<ll> v)
{
    // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" "<<" ";
    cout<<endl;
}

void showvp(vector<pii> v)
{
    // cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i].f<<" " <<v[i].s<<endl;
}

// a+b=a^b + 2∗(a&b)  imp result

ll fastpower(ll a,ll n,ll p)
{
    ll ans=1;
    while(n>0)
    {
        if(n&1)
            ans=(ans*a)%p;
        a=(a*a)%p;
        n=n>>1;
    }
    return ans%p;
}

vector<bool> prime(1002,true); 
 
void SOE(int n) 
{
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
}

void factor(int n,vector<int> &v)
{
    for (int i = 2; i*i<= n; i++) 
    { 
        if(n%i==0)
        {
            if(i%2!=0)
                v.pb(i);
            int z=n/i;
            if(z%2!=0)
                v.pb(z);
        }
    }  
}

void dfs(vector<int> v[],int i,int mark[],set<int> &st,vector<int> b,vector<int> &id)
{
    mark[i]=1;
    id.pb(i);
    // cout<<i<<" ";
    st.insert(b[i-1]);
    for(auto it=v[i].begin();it!=v[i].end();it++)
    {
        if(mark[*it]==0)
            dfs(v,*it,mark,st,b,id);
    }    
}


void solve()
{
    int n;
    cin >> n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    vector<vector<pair<int,int>>> t ;
    t.resize(n,vector<pair<int,int>>(n,make_pair(0,0)));


    if(a[n-1][n-1]=='#'){
        t[n-1][n-1].first=1;
        t[n-1][n-1].second=1;
    }
    for(int j=n-2;j>=0;j--){
        if(a[n-1][j]!='#' && t[n-1][j+1].second==0){
            t[n-1][j].second=0;
        }
        
    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(a[i][j]=='.'){
                if(a[i+1][j]=='#')t[i][j].first=1;
            }
        }
    }

}
    
int main()
{
    IOS;
    int t=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       solve();
    }
    return 0;
}