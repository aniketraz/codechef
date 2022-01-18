#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int sum=0;
    
    for (int i=0; i<n; i++) {
    long long int t;
    cin>>t;
    if(t%k==0){
        sum++;
    }
    else{
        sum=sum;
        }
    }
    cout<<sum<<endl;
    return 0;
}
