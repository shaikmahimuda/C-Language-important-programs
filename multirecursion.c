#include<stdio.h>
int multi(int a, int b){
    return a*b;}
int fact(int n){
    if(n==0)
     return 1;
    else 
     return n*fact(n-1);
}
int main(){
    int a=2, b=3;
    int prod=multi(a,b);
    int facts=fact(4);
    printf("multiple of %d and %d = %d\n", a,b, prod);
    printf("fact is %d", facts);
}
