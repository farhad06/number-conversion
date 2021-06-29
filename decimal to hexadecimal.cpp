#include<iostream>
using namespace std;
int main(){
	int n,q,i=1,j,r;
	char hex[50];
	cout<<"Enter a Decimal Number: ";
	cin>>n;
	q=n;
	while(q!=0){
		r=q%16;
		if(r<10)
		hex[i++]=r+48;
		else
		hex[i++]=r+55;
		q/=16;
	}
	cout<<"Hexadecimal Number is: ";
	for(j=i;j>0;j--)
	cout<<hex[j];
	return 0;
}
