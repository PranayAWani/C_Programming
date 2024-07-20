#include<studio.h>
int main(){
    int no;
    printf("\n Enter a number to check its divisibility :-");
    scanf("%d",&no);
    if(no%7==0){
        printf("\nnumber is divisible by 7");
    }
    else{
        printf("\n Nymber is not divisible by 7");
    }
}