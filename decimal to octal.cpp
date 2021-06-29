#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,n,a[50],s,r,i;
	cout<<"Enter the Decimal Number\n";
	cin>>n;
	q=n;
	i=1;
	while(q>0){
		r=q%8;
		a[i++]=r;
		q/=8;
	}
	cout<<"Octal number is: ";
	for(int j=i-1;j>0;j--)
	cout<<a[j];
	
	return 0;
}
