#include<stdio.h>
#include<conio.h>
int main(){
    int i,*j;
    printf("\n Enter the value of A");
    scanf("%d",&i);
    j=&i;
   printf("\n Add i=%u",&i);
   printf("\n Add i=%u",j);
   printf("\n Add j=%u",&j);
   printf("\n Value i=%d",i);
   printf("\n Value i=%d",*(&i));
   printf("\n Value i=%d",*j);
    return 0 ;
}
