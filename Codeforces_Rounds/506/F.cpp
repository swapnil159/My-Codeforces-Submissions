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
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	//isprime();
	//coeff();
	/*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll a,b;
    cin>>a>>b;
    ll area=a+b;
    vc<pll> v1,v2;
    for(ll c=1;c*c<=a;c++)
    {
        if(a%c==0)
        {
            v1.pb({c,a/c});
        }
    }
    for(ll c=1;c*c<=b;c++)
    {
        if(b%c==0)
        {
            v2.pb({c,b/c});
        }
    }
    ll ans=2*(a+b+1);
    for(ll c=1;c*c<=area;c++)
    {
        if(area%c==0)
        {
            bool flag=false;
            ll side1=c,side2=area/c;
            for(auto y:v1)
            {
                if(y.fs<=side1 and y.sec<=side2)
                    flag=true;
            }
            for(auto y:v2)
            {
                if(y.fs<=side1 and y.sec<=side2)
                    flag=true;
            }
            if(flag)
                ans=min(ans,2*(side1+side2));
        }
    }
    cout<<ans<<endl;
	return 0;
}
