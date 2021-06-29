#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n,q,k,r;
	cout<<"Enter the octal number:\n";
	cin>>n;
	s=0,q=n,k=0;
	while(q>0){
		r=q%10;
		s=s+r*pow(8,k);
		k++;
		q/=10;
	}
	cout<<"Decimal number is: "<<s;
	return 0;
}
