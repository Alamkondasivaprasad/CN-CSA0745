#include<stdio.h>
int gcd(int a,int b){
	return b==0 ? a: gcd(b,a%b);
}
int main(){
	int n=3599;
	int cf=59;
	int p=gcd(n,cf);
	int q=n/p;
	printf("common factor: p=%d,q=%d\s",p,q);
	return 0;
}
