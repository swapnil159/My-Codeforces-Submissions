/* winners never quit and quitters never win.
      #swap                                 */
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("-O3")
using ll = long long;
using ld = long double;
const ll mod = 1e9+7;
const ll inf = 1e18;
#define rk 256
#define pb push_back
#define mp make_pair
#define vc vector
#define fs first
#define sec second
#define pq priority_queue
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll,ll> 
#define pls pair<ll,string>
#define psl pair<string,ll>
#define plc pair<ll,char>
#define pcl pair<char,ll>
#define pss pair<string,string>
#define all(v) v.begin(),v.end()
#define tol(s) transform(s.begin(),s.end(),s.begin(),::tolower);
#define tou(s) transform(s.begin(),s.end(),s.begin(),::toupper);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define T ll t=0;cin>>t;for(ll test=0;test<t;test++)
bool comp(pll a,pll b)
{
    if(a.fs==b.fs)
        return a.sec>b.sec;
    return a.fs<b.fs;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	//isprime();
	//coeff();
	/*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll n,r;
    cin>>n>>r;
    ll x[n],y[n]={0};
    rep(a,0,n){
        cin>>x[a];
    }
    vc<pll> v;
    ll ans=0;
    for(ll a=0;a<n;a++)
    {
        if(x[a]==0)
            continue;
        else
        {
            ans++;
            for(ll b=max(0*1LL,a-r+1);b<=min(n-1,a+r-1);b++)
                y[b]++;
        }
    }
    for(ll a=0;a<n;a++)
    {
        if(x[a])
        {
            bool flag=false;
            for(ll b=max(0*1LL,a-r+1);b<=min(n-1,a+r-1);b++)
                if(y[b]<2)
                    flag=true;
            if(!flag)
            {
                ans--;
                for(ll b=max(0*1LL,a-r+1);b<=min(n-1,a+r-1);b++)
                    y[b]--;
            }
        }
    }
    rep(a,0,n)
    {
        if(y[a]==0)
        {
            cout<<-1<<endl;
            exit(0);
        }
    }
    cout<<ans<<endl;
	return 0;
}
