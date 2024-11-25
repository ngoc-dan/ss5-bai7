#include <stdio.h>
int main(){
	int a,b;
	
	printf("nhap so a : ");
	scanf("%d",&a);
	printf("nhap so b : ");
	scanf("%d",&b);
	int min =a < b ? a : b;
	for(int i = min;i >=1;i--){
		if((a % i == 0) && (b%i==0)){
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}
