#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double y;
    
    cin>>x;
    cin>>y;
    if(x%5==0 && x+0.50<=y)
    cout<<(double)(y-x-0.50);
    else
    cout<<y;
}