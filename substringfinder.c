#include <stdio.h>
#include <string.h>

int main() {
    char string[100], subString[100];
    
    printf("Enter the main string: ");
    fgets(string, sizeof(string), stdin);
    
    printf("Enter the substing: ");
    fgets(subString, sizeof(subString), stdin);
    
    string[strcspn(string, "\n")] = '\0';
    subString[strcspn(subString, "\n")] = '\0';
    
    int mainLen = strlen(string);
    int subLen = strlen(subString);
    
    for (int i = 0; i <= mainLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (string[i + j] != subString[j]) {
                break;
            }
        }
        if (j == subLen) {
            printf("'%s' was found in position %d .\n", subString, i);
        }
    }
    
    return 0;
}
