/*Input a1b3
  Output abbb*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char input[100], output[200];
    int i, j, k,count;
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    i = 0;
    j = 0;
    while (input[i] != '\0') {
        if (isdigit(input[i])) {
            count = atoi(&input[i]);
            for (k = 0; k < count; k++) {
                output[j] = input[i-1];
                j++;
            }
         }
        i++;
    }
    output[j] = '\0';
    
    printf("Output: %s\n", output);
    
    return 0;
} 
