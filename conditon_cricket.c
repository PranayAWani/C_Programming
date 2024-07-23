#include<stdio.h>
int main(){
    int score[5];
    int total=0;
    for (int i=0;i<4;i++){
        printf("\n Enter the score of match %d :- ",i+1);
        scanf("%d",&score[i]);
        total=total+score[i];
    }
    printf("\n Total score :- %d",total);
    if(total>=50){
        printf("\n Good score You will get the trophy");
    }
}