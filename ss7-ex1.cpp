#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Cac phan tu trong mang la:\n");
	    for (int i = 0; i < n; i++) {
	        printf("a[%d] = %d\n", i, a[i]);
	    }	
	    printf("Do dai cua mang la: %d\n", n);
	
	    return 0;
	}
