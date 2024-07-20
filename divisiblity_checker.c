#include<stdio.h>
int main(){
    int no,i;
    printf("\n Enter number you want to check the divisiblity with:- ");
    scanf("%d",&i);
    printf("\n Enter a number to check its divisibility :- ");
    scanf("%d",&no);
    if(no%i==0){
        printf("\n%d is divisible by %d",no,i);
    }
    else{
        printf("\n%d is not divisible by %d",no,i);
        }
}