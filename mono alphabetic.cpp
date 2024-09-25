#include<stdio.h>
#include<string.h>
int main(){
	char pt[100],cp[100];
	char key[]="QWERTYUIOPLKJHGFDSAZXCVBNM";
	printf("enter the plain text:");
	scanf("%s",pt);
	for(int i=0;pt[i] !='\0';i++){
		cp[i]=key[pt[i]-'A'];
	}
	cp[strlen[pt]]='\0';
	printf("cipher text:%s\n",cp);
	return 0;
}
