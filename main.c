#include <stdio.h>
#include <string.h>

// Function to copy a string from src to dst
void copy(char* dst, char* src) {
    while (*src != '\0') {  // Loop until the null terminator is encountered
        *dst = *src;        // Copy the current character from src to dst
        
        src++;  // Move src pointer to the next character
        // Example: If src was pointing to 'W', now it points to 'e'

        dst++;  // Move dst pointer to the next position
        // Example: If dst was pointing to an empty location, now it moves to store the next copied char
    }
    *dst = '\0';  // Append null terminator to mark the end of the string
}

int main() {
    char srcString[] = "ERM, WHAT THE SIGMA!";
    
    // Allocate destination array with enough space (length of srcString + 1 for null terminator)
    char dstString[strlen(srcString) + 1];
    
    // Call the copy function to copy srcString into dstString
    copy(dstString, srcString);

    // Print the copied string
    printf("%s\n", dstString);

    return 0;
}
