#include <stdio.h>
void toh(int,char,char,char);
int a=0;
void toh(int n,char x,char y,char z){
 if (n==0)
    return;
 toh(n-1,x,y,z);
 printf("\n %c to %c,%d",x,z,++a);
 toh(n-1,z,y,x);
 int binarysearch(int*a,int m,int n){
 int l,u,mid;
 l=0,u=n+1;
 while (l<=u){
    mid=(l+u)/2;
    if(m==a[mid]){

    }
    void main(){
    int n =4;
    toh(n,'a','b','c');
    }
 }
 }
}
