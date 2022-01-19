#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a , b;
        cin>>a>>b;
        if(a==b){
            cout<<"="<<endl;
        }
        else if(a<b){
            cout<<"<"<<endl;
        }
        else if(a>b){
            cout<<">"<<endl;
        }
        
    }
    return 0;
}
