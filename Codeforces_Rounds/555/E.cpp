/* winners never quit and quitters never win.
      #swap                                 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define lb lower_bound
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    ll x[n];
    multiset<ll> m;
    for(ll a=0;a<n;a++)
        cin>>x[a];
    for(ll a=0;a<n;a++)
    {
        ll b;
        cin>>b;
        m.insert(b);
    }
    for(ll a=0;a<n;a++)
    {
        auto it=m.lb((n-x[a])%n);
        if(it==m.end())
            it=m.begin();
        ll p=*it;
        cout<<(x[a]+p)%n<<" ";
        m.erase(it);
    }
    
	return 0;
}
