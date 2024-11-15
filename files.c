#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 200

// Function to write input to output.txt
void writeToFile() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    char paragraph[MAX_CHAR + 1];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Content written to output.txt\n");
}

// Function to read content from output.txt
void readFromFile() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char ch;
    printf("\nContent of output.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append content to output.txt
void appendToFile() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    char paragraph[MAX_CHAR + 1];
    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "\n%s", paragraph);
    fclose(file);
    printf("Content appended to output.txt\n");
}

int main() {
    writeToFile();
    readFromFile();
    appendToFile();
    readFromFile();

    return 0;
}
       
