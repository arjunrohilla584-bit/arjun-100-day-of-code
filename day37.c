#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }
    for(i = 0; i < r; i++) printf("%d ", rowSum[i]);
    printf("\n");
    return 0;
}
