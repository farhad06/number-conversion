#include<bits/stdc++.h>
using namespace std;
int main(void){
	int s=0,k=0,q,n;
	cout<<"Enter the binary number\n ";
	cin>>n;
	q=n;k=0;s=0;
	while(q>0){
		int r= q%10;
		s=s+r*pow(2,k);
		q=q/10;
		k++;
	}
	cout<<"Decimal Value is: "<<s;

	return 0;
}
