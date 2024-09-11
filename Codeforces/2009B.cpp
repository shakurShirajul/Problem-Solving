#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        char ch;
        ll n;
        cin>>n;
        ll arr[n]={0};
        for(ll i = 0;i<n;i++){
            for(ll j=0;j<4;j++){
                cin>>ch;
                if(ch=='#'){
                    arr[i]=j+1;
                }
            }
        }
        for(ll i=n-1;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}