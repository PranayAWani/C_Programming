#include<stdio.h>
#include<string.h>
string name_short(string name,int no){
    if(no=2){
        printf("\n sorted name is %s%s...",name[0],name[no]);
    }
    else{
        printf("\n Work in progress");
    }
}
int main(){
    string name;
    string newname;
    int no;
    printf("\n Enter the id by the user:- ");
    scanf("%s",&name);
    printf("\n Enter how long name is required :- ");
    scanf("%d",no);
    if(sizeof(name)<=no){
        printf("\n Shorted id is :- ");
    }
    else{
    newname=name_short(string name,int no);
}
}