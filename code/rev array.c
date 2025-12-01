#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);   // Number of days

    int arr[n];

    // Input exercise times
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) printf(" ");  // Avoid trailing space
    }

    return 0;
}
