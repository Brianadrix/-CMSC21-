// Briana Jade Adricula
// Test III No. 1
#include <stdio.h>   /* printf, scanf */
#include <ctype.h>   /* toupper, isalpha */
#include <stdbool.h> /* bool return type */

void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);


int main(void) {
    int occurrences1[26] = {0}, occurrences2[26] = {0};     //counts how many times each word appears

    // scans the words twice for both inputs as it calls the function
    printf("Enter first word: ");
    scan_word(occurrences1);
    printf("Enter second word: ");
    scan_word(occurrences2);

    if (is_anagram(occurrences1, occurrences2)) { // if-else statement to check if word is anagram
        printf("The words are anagrams.\n");
    }
    else {
        printf("The words are not anagrams.\n");
    }
    return 0;
}

// function for scan_word that counts  the number of occurrences of each character in the word and store them in occurences array
void scan_word(int occurrences[26]) {
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            occurrences[toupper(c) - 'A']++;
        }
    }
}

// Compares the two arrays of 26 character and compares if they have the same number of occurences
bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        if (occurrences1[i] != occurrences2[i]) {
            return false;
        }
    }
    return true;
}

