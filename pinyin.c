#include <stdio.h>
#include <string.h>
void solve(char str[],int len){
	int i;
	for(i=0;i<len;){
		switch(str[i]){
			case 'y':
				printf("%d",1);
				i=i+2;
				break;
			case 'e': 
				//putchar('2');
				putchar(97);
				i=i+2;
				break;
			case 's':
				if(str[i+1]== 'a'){
					putchar('3');
					i+=3;
				}
				else{
					putchar('4');
					i+=2;
				}
				break;
			case 'w':
				putchar('5');
				i+=2;
				break;
			case 'l':
				putchar('6');
				i+=3;
				break;
			case 'q':
				putchar('7');
				i+=2;
				break;
			case 'b':
				putchar('8');
				i+=2;
				break;
			case 'j':
				putchar('9');
				i+=3;
				break;




		}

	}
	putchar('\n');
}
int main(){
	int i,j,len;
	char str[1000];
	while(scanf("%s",str)!=EOF){
		len=strlen(str);
		solve(str,len);
	}
	return 0;
}
