#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;
    scanf("%d", &n);
    int mat[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) scanf("%d", &mat[i][j]);
    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(mat[i][i] == mat[j][j]) distinct = 0;
    if(distinct) printf("Distinct\n");
    else printf("Not Distinct\n");
    return 0;
}
