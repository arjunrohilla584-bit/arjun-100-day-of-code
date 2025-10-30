#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if(c1 != r2) return 0;
    int mat1[r1][c1], mat2[r2][c2], res[r1][c2];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++) scanf("%d", &mat1[i][j]);
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++) scanf("%d", &mat2[i][j]);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(k = 0; k < c1; k++) res[i][j] += mat1[i][k] * mat2[k][j];
        }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}
