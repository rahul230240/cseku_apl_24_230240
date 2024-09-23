#include<stdio.h>
int g(int a,int b){while(b!=0){int t=b;b=a%b;a=t;}return a;}int main(){int x,y;scanf("%d%d",&x,&y);printf("%d",g(x,y));return 0;}
