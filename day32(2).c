#include <stdio.h>

int main() {
    int n, digit, i;
    int count[10] = {0};
    scanf("%d", &n);
    if(n < 0) n = -n;
    while(n != 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    int max = 0, most = 0;
    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            most = i;
        }
    }
    printf("%d\n", most);
    return 0;
}
