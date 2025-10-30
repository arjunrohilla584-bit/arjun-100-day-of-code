#include <stdio.h>

int main() {
    int n, i, key, left, right, mid, found = -1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    left = 0;
    right = n-1;
    while(left <= right) {
        mid = (left + right)/2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("%d\n", found);
    return 0;
}
