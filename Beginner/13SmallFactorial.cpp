#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b=1;
        for (int i=1; i<=n; i++) {
        b=b*i;
        }
        cout<<b<<endl;
    }
}
