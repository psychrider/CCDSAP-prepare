#include<bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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


void solve()
{
    ll n ;
    cin >> n;
    ll a[n];
    fori(0,n)cin >> a[i];
    int max = 0;
    pair<int,pair<int,int>> ans;
    for(int i=1;i<n;i++){
        for(int j=0; j<n-i;j++ ){
            int xo=0;
            for(int k=j;k <= i+j; k++){
                xo^=a[k];
            }
            if(xo > max)max = xo;
            ans = make_pair(max,make_pair(j,j+i));
        }
    }
    cout << ans.first << " "<<ans.second.first<< " "<< ans.second.second<<"\n";
}
    
int main()
{
    IOS;
    int t=1;
    //cin>>t;
    for(int i=0;i<t;i++)
    {
       solve();
    }
    return 0;
}