#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[50],n,q,r,i=1,j;
	cout<<"Enter Decimal number\n";
	cin>>n;
	q=n;
	while(q>0){
		r=q%2;
		a[i++]=r;
		q=q/2;
	}
	cout<<"\nBinary number is: ";
	for(j=i-1;j>0;j--)
	cout<<a[j];
	return 0;
}
