#include<stdio.h>
int main(){
	int a,i;
	printf(" bang cuu chuong cua so :");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		printf("%d*%d=%d\n",a,i,a*i);
	}
}
