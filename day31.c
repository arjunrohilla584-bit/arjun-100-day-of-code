#include <stdio.h>

int main() {
    int n, i, key, found = -1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    printf("%d\n", found);
    return 0;
}
