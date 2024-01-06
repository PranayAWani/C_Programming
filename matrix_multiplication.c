#include<stdio.h>
int main(){
    int i,j,k;
    int arr1[i][j];
    int arr2[k][j];
    int result[i][j];
    printf("\n Enter the values for Matrix 1");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n Enter the Value for %d , %d element",i,j);
            scanf("%d",arr1[i][j]);
        }
    }
    printf("\n Enter the values for Matrix 2");
    for(k=0;k<3;k++){
        for(j=0;j<3;j++){
            printf("\n Enter the Value for %d , %d element",k,j);
            scanf("%d",arr2[k][j]);
        }
    }
    printf("\n Multiplication of both the matrix is ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                result[i][j] +=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\n multiplicationoff the matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
}
