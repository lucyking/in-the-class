```
# in-the-class
#include <stdio.h>
void sort(int a[],int lengh );
int main(){
    int i,a[8];

    printf("Please input your number:\n");

    for(i=0;i<8;i++)
        scanf("%d",&a[i]);

    for(i=0;i<8;i++)
        printf("%d:%d\n",i+1,a[i]);

    sort(a,8);
    printf("\n");

    for(i=0;i<8;i++)
        printf("%d:%d\n",i+1,a[i]);







    return 0;
}

void sort(int a[],int lengh ){
    int i,j,tmp;
    for(i=0;i<lengh;i++){
        for(j=0;j<lengh-i;j++){
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

}
```


