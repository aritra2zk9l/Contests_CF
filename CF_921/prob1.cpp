#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define fr(i, m, n) for (ll i = m; i < n; i++)
#define rfr(i,m, n) for(ll i = m; i > n-1;i--)
#define cnl cout<<endl
#define r0 return 0
#define all(v) v.begin(),v.end()
#define yy cout<<"Yes"<<endl
#define nn cout<<"No"<<endl
#define ff first
#define ss second
#define vll vector<ll>
#define pb push_back
#define pop pop_back
#define dbg(a) cerr<< #a << "=" << (a)<<"\n";
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define ub(num) upper_bound(v.begin(),v.end(),num) 
#define lb(num) lower_bound(v.begin(),v.end(),num)

const ll L=1e18;
const ll mod=1000000007;


                //Functions to remember and use:

//auto i=mp.rbegin(); or ll i=*mp.rbegin()       } To access the last element of map(mp)
//cout<<i->second.first<<" "<<i->second.second;  }
//if(x&(1<<i)) for i in range(0,32)             to check which setbits of x are 1
//s.rfind(s2) for last occurence
//s.substr(i,n) substring of length n from i
//s.append(s2)  to add s2 at the end of s
//__builtin_ctz(x) ; __builtin_clz(x) ; 
//__builtin_popcount(x); __builtin_parity(x);
//-------------------------------------------------------------------------------------------------------------------------------------------------------
ll divandfloor(ll x, ll y) {
    assert(y!= 0);
    if((x>=0 and y>0) or (x<=0 and y<0))return x/y;
    return (1-abs(x))/abs(y)-1;
}
ll divandceil(ll x, ll y) {
    assert(y!=0);
    if((x>=0 and y<0) or (x<=0 and y>0))return x/y;
    return (abs(x)-1)/abs(y)+1;  
}
struct ReverseComparator {
    bool operator()(ll a, ll b) const {
        return a > b;
    //set<ll, ReverseComparator> reverseSet;
    }
    };
bool sortBySecond(pair<ll, ll> left, pair<ll, ll> right) {
    return left.second < right.second;
    // sort(myVector.begin(), myVector.end(), sortBySecond);
}
int solve(){
    ll n,k;cin>>n>>k;
    string s;
    fr(i,0,n){
        fr(i,0,k){
            char z=i+'a';
            s+=z;
        }
    }
    cout<<s<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    // cout<<fixed<<setprecision(12);
    while(t--){
        solve();
    }
    return 0;
}