#include <stdio.h>
#include <string.h>

int main() {

    char word[100];
    scanf("%s", word);   // Input the word

    int len = strlen(word);
    int isPalindrome = 1;  // Assume true

    // Check characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("Perfect Secret Word");
    else
        printf("Not a Secret Word");

    return 0;
}
