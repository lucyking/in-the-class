#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int i,j,len;
	j=1;
	while(scanf("%s",str)!=EOF){
		len=strlen(str);

		printf("%d>",j++);
		printf("%d:",len);

		for(i=0;i<len;i++){
			printf("%c",str[i]);
		}
		printf("\n");


	}

	return 0;
}
