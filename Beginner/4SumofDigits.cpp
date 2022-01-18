#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	int a =0;
	while(n>0){
	    int b =n%10;
	    a=a+b;
	    n=n/10;
	}
	cout<<a<<endl;
    }
	return 0;
}
