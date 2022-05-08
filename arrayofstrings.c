#include<stdio.h>
int main(){
	int i;
	char s[10][30],t[30];
	for(i=0;i<10;i++){
		scanf("%s",s[i]);
		for(i=0;i<10;i++){
			printf("\n%s",s[i]);
		}
	}
	return 0;
}
