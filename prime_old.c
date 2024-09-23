#include<stdio.h>
int main(){int x,i,f=1;scanf("%d",&x);for(i=2;i<x;i++){if(x%i==0){f=0;break;}}if(f==1){printf("prime");}else{printf("not prime");}return 0;}
