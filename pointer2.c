#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main(){
int a=3,b=9;
printf("\n The value 3+9 is %d",sum(a,b));
return 0;
}
int sum(int a, int b){
    return a+b;
}
