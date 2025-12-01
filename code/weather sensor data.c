#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);  // Number of temperature readings

    int arr[n];

    // Input readings
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, zero = 0;

    // Count positive, negative, and zero readings
    for (int i = 0; i < n; i++) {

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Output results
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d\n", zero);

    return 0;
}
