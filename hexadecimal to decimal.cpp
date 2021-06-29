#include<bits/stdc++.h>
using namespace std;
int main(){
	char num[50];
	int len,hex=0,i,r;
	cout<<"Enter the Hexadecimal number: ";
	cin>>num;
	len=strlen(num);
	for(i=0;num[i]!='\0';i++){
		len--;
		if(num[i]>='0' && num[i]<='9')
		r=num[i]-48;
		else if(num[i]>='a' && num[i]<='f')
		r=num[i]-87;
		else if(num[i]>='A' && num[i]<='F')
		r=num[i]-55;
		hex=hex+r*pow(16,len);
	}
	cout<<"Decimal Number is: "<<hex;
	return 0;
}
