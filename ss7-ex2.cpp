#include<stdio.h>

int main(){	
    int a[5];
    for(int i=0;i<5;i++){
    	printf("Nhap so nguyen thu %d: ",i+1);
	    scanf("%d",&a[i]);
		}
	    printf("Mang vua nhap la:");
			for(int i=0;i<5;i++){
			printf("%d ",a[i]);
			}
	return 0;
}
