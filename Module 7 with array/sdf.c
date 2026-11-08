#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    long long sum = 0; // Use long long to handle large sums
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    // Print absolute value of the sum
    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);

    return 0;
}
