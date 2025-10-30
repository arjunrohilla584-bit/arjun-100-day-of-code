#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }
    printf("Positive: %d, Negative: %d, Zero: %d\n", pos, neg, zero);
    return 0;
}
