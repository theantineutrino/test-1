#include<stdio.h>
int main(){
    int n,a=1;
    printf("enter number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d  ",a);
            a++;
        }
        printf("\n");
    }


    return 0;
}