#include<stdio.h>
int main(){
    int n,k;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        k=1;
        for(int j=1; j<=i;j++){
        printf("%d",k);
        k++;
    }
    printf("\n");
    }
    return 0;
}