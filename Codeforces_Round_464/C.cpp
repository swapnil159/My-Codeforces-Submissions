/* winners never quit and quitters never win.
      #swap                                 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vc vector
#define all(v) v.begin(),v.end()
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	//coeff();
	/*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll n;
    cin>>n;
    ll dp[2*n]={0};
    for(ll a=0;a<n;a++)
    {
        cin>>dp[a];
        dp[a+n]=dp[a];
    }
    ll s,f;
    cin>>s>>f;
    ll prd=f-s;
    for(ll a=1;a<2*n;a++)
        dp[a]+=dp[a-1];
    ll ans=0,pos=0;
    for(ll a=0;a<n;a++)
    {
        ll k=dp[a+prd-1];
        if(a)
            k-=dp[a-1];
        ll pp=s-a;
        if(pp<1)
            pp=pp+n;
        if(k>ans)
        {
            ans=k;
            pos=pp;
        }
        else if(k==ans)
            pos=min(pos,pp);
    }
    cout<<pos<<endl;
	return 0;
}
