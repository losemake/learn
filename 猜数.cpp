#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){


srand(time(0));
int n=rand()%100+1;
int c=0;
int a=0;
printf("���Ѿ������һ��1��100����"); 
do {
	printf("��²�����ʲô��");
	scanf("%d",&a) ;
	c++;
	if(a>n){
		printf("��µ�������");
	}else if(a<n){
		printf("��µ���С��");
	}
} while(a!=n) ;
printf("��¶��ˣ�һ������%d��/n",c);
}
