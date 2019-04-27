/* winners never quit and quitters never win.
      #swap                                 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll n;
    cin>>n;
    ll x[n];
    for(ll a=0;a<n;a++)
        cin>>x[a];
    string s;
    ll ans=0;
    ll start=0,end=n-1,last=0;
    while(start<=end)
    {
        if(x[start]<x[end])
        {
            if(x[start]>last)
            {
                ans++;
                s+="L";
                last=x[start];
                start++;
            }
            else if(x[end]>last)
            {
                ans++;
                s+="R";
                last=x[end];
                end--;
            }
            else
                break;
        }
        else if(x[start]>x[end])
        {
            if(x[end]>last)
            {
                ans++;
                s+="R";
                last=x[end];
                end--;
            }
            else if(x[start]>last)
            {
                ans++;
                s+="L";
                last=x[start];
                start++;
            }
            else
                break;
        }
        else
        {
            ll cnt1=0,cnt2=0;
            ll pos=start,las=last;
            while(x[pos]>las and pos<=end)
            {
                las=x[pos];
                pos++;
            }
            cnt1=pos-start;
            pos=end,las=last;
            while(x[pos]>las and pos>=start)
            {
                las=x[pos];
                pos--;
            }
            cnt2=end-pos;
            if(cnt1==0 and cnt2==0)
                break;
            else if(cnt1>=cnt2)
            {
                ans++;
                s+="L";
                last=x[start];
                start++;
            }
            else
            {
                ans++;
                s+="R";
                last=x[end];
                end--;
            }
        }
    }
    cout<<ans<<endl<<s<<endl;
	return 0;
}
