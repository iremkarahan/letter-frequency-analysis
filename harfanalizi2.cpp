#include <stdio.h>
#include <ctype.h>
#include <string.h>  

#define MAX_LEN 1000      

int main() {
    char text[MAX_LEN];
    int freq[26] = {0}; 
	    int totalLetters = 0;    
	    printf("Metni girin: ");
    fgets(text, MAX_LEN, stdin);
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char ch = tolower(text[i]);
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;   
                                totalLetters++;    
                                            }
        }
    }
printf("\nHarf Frekanslarý:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {    
        double percentage = (freq[i] * 100.0) / totalLetters;   
                    printf("%c: %d (%.2f%%)\n", i + 'a', freq[i], percentage);   
                            }
    }

    return 0;
}

