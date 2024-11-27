#include <stdio.h>

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
     for (int i = 0; i < 5; i++){
     	if( a[i] % 2!=0 ){
        a[i] += 2;
    	printf ("So %d la so le nen tang 2 don vi :%d\n",a[i]-2,a[i]);
	}else{
		a[i] += 3;
		printf ("So %d la so chan nen tang 3 don vi :%d\n",a[i]-3,a[i]);
	}        
}       
        return 0;
}
