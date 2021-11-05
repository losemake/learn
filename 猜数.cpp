#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){


srand(time(0));
int n=rand()%100+1;
int c=0;
int a=0;
printf("我已经想好了一个1到100的数"); 
do {
	printf("请猜猜这是什么数");
	scanf("%d",&a) ;
	c++;
	if(a>n){
		printf("你猜的数大了");
	}else if(a<n){
		printf("你猜的数小了");
	}
} while(a!=n) ;
printf("你猜对了，一共用了%d。/n",c);
}
