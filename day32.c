#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    int arr1[n1], arr2[n2];
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    for(i = 0; i < n1; i++) printf("%d ", arr1[i]);
    for(i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}
