
#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
        int n, r, sum;
        cin>>n;
        r=n%10;
        while(n>0){
            sum=n%10;
            n=n/10;
        }
        cout<<r+sum<<endl;
}
    
    
}
