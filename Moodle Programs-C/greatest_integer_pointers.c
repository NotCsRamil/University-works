#include<stdio.h>
int main(){
    int a,b,c;
    int *p1,*p2,*p3;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    p1=&a;
    p2=&b;
    p3=&c;
    if(*p1>*p2 && *p1>*p3){
        printf("%d",*p1);
    }
    else if(*p2>*p1 && *p2>*p3){
        printf("%d",*p2);
    }
    else{
        printf("%d",*p3);
    }
}

