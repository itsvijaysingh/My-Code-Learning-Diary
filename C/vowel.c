#include <stdio.h>

int main() {
    char chr='B';
    if(chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
        printf("Uppercase Vowel");
    }else if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u'){
        printf("Lowercase Vowel");
    }else{
        printf("Not an vowel");
    }
    return 0;
}
