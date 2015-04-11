#include <stdio.h>
#include <string.h>
int solve(char str[],int n,int len){
	int i,j;
	int a,b;
	a=len/n;
	b=len%n;

	if(a==0){
		for(i=0;i<len;i++){
			printf("%c",str[i]);
		}
		if(i<=n-1){
			for(;i<n;i++)
				printf("%d",0);
		}
		printf("\n");
	}

	if(a>0){
		for(i=0;i<a;i++){
			for(j=0;j<n;j++){
			printf("%c",str[i*n+j]);
			}
			printf("\n");

		}

		if(len%n!=0){
		for(i=0;i<len%n;i++){
			printf("%c",str[i+a*n]);
		}
		if(i<=n-1){
			for(;i<n;i++)
				printf("%d",0);
		}
		printf("\n");
		}
	}
}

int main(){
	int i,m,n,len;
	char str[1000]; 
	while(scanf("%d %d",&m,&n)!=EOF){
//		printf("%d %d\n",m,n);
		for(i=0;i<m;i++){
			scanf("%s",str);
			len=strlen(str);
			solve(str,n,len);
		}
	}

	return 0;

}
