// hollow hourglass
#include <stdio.h>
void printHollowDiamondPattern(int n) {
    
    for (int i = 0; i < 2 * n - 1; i++) {
        
        int l = (i < n) ? i : 2 * n - 2 - i;

        
        for (int j = 0; j < l; j++) {
            printf("  ");
        }
        for (int k = 0; k < 2 * (n - l) - 1; k++) {
            if (k == 0 || k == 2 * (n - l) - 2 || i == 0 || i == 2 * n - 2)
                printf("%c ", k + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n ;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printHollowDiamondPattern(n);
    return 0;
}