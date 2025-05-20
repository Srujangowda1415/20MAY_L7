#include <stdio.h>

int main() {
    int n;
    printf("enter the no of rowsa: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) {
            for (int k = 10; k >= (i + 2); k--) {
                printf("%d ", k);
            }
            printf("\n");
        }
    }
    return 0;
}
