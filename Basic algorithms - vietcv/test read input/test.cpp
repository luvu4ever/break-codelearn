//--------------------LuvU4ever--------------------
 
#include<bits/stdc++.h>
 
using namespace std;
mt19937 Rand(time(0));
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<pll> > vvp64;
typedef vector<pll> vp64;
typedef vector<pii> vp32;
 
#define LuvU4ever "R U Confident or Not"
#define memset(f,a) memset(f,a,sizeof(f))
#define forr(i,a,b) for(int i=(a);i<=(b);++i)
#define ford(i,a,b) for(int i=(a);i>=(b);--i)
#define fore(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();++it)
#define f1(i,n) for(int i=1; i<=n; i++)
#define f0(i,n) for(int i=0; i<n; i++)
#define ALL(a) (a).begin(),(a).end()
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1)
#define oo 1e9+7
#define MOD
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ln "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(a) (a).begin(),(a).end()
#define sz(x) ((int)(x).size())
 
const int maxn=1e5;

int n; 

void solve()
{
    int x=n+3;
    int y=n+5;
    cout<<x+y;
}
 
main()
{
    fast_cin();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    solve();
    return 0;
}