#include<stdio.h>
int main(){
    int n,star=1;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    int space = n;
    for(int i = 1; i<=n ; i++){
        for(int j =1 ; j<=space; j++){
            printf(" ");
        }
         for(int j =1 ; j<=star; j++){
            printf("*");
        }
        star+=2;
        space--;
        printf("\n");
    }
    return 0;
}