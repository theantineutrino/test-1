#include<stdio.h>
int main()
{
    int row,spaces;
    printf("enter the number of rows : ");
    scanf("%d",&row);
    spaces=row;
    for(int i=1;i<=row;i++){
        spaces--;
        char ch='A';
        for(int j=1;j<=spaces;j++){
            printf(" ");}
        for(int col=1;col<=2*i-1;col++){
            if(col<=i-1){
                printf("%c",ch);
                ch++;}
            else if(col>=i){
                printf("%c",ch);
                ch--;}
            else{
                printf(" ");}
        }
        printf("\n");
    }
    return 0;   
}