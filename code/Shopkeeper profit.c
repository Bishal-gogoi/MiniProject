#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);  // Number of days

    int records[n];

    // Input daily profit/loss values
    for (int i = 0; i < n; i++) {
        scanf("%d", &records[i]);
    }

    int totalProfit = 0;  // Sum of positive values
    int totalLoss = 0;    // Sum of negative values (absolute)

    // Process each day's record
    for (int i = 0; i < n; i++) {

        if (records[i] > 0) {
            totalProfit += records[i];  // Add profit
        }
        else {
            totalLoss += -records[i];   // Convert loss to positive
        }
    }

    int netBalance = totalProfit - totalLoss;  // Net balance

    // Output results
    printf("Total Profit: %d\n", totalProfit);
    printf("Total Loss: %d\n", totalLoss);
    printf("Net Balance: %d\n", netBalance);

    return 0;
}
