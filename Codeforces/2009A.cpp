#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll a,b;
    cin>>a>>b;
    ll mx = max(a,b);
    cout<<(mx-a)+(b-mx)<<endl;
    }
    return 0;
}