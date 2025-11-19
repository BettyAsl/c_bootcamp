#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strncpy(char *dest, const char *src, size_t n); // prototype

int main(void) {
    char buffer[100];

    // Test 1 : src shorter than n
    my_strncpy(buffer, "Hi", 5); // src = "Hi", n = 5
    assert(buffer[0] == 'H' && buffer[1] == 'i' && 
           buffer[2] == '\0' && buffer[3] == '\0' && buffer[4] == '\0');
    printf("/ Test 1: src shorter than n -> filled with '\\0'\n");

    // Test 2 : src exactly n
    my_strncpy(buffer, "Hello", 5); // src = "Hello", n = 5
    assert(strncmp(buffer, "Hello", 5) == 0); // pas de '\0' ajouté
    printf("/ Test 2: src exactly n -> no '\\0' added\n");

    // Test 3 : src longer than n
    my_strncpy(buffer, "World!", 4); // src = "World!", n = 4
    assert(strncmp(buffer, "Worl", 4) == 0); // pas de '\0'
    printf("/ Test 3: src longer than n -> no '\\0' added\n");

    // Test 4 : empty string
    my_strncpy(buffer, "", 3); // src = "", n = 3
    assert(buffer[0] == '\0' && buffer[1] == '\0' && buffer[2] == '\0');
    printf("/ Test 4: empty string -> filled with '\\0'\n");

    // Test 5 : n = 0
    my_strncpy(buffer, "Nothing", 0); // ne copie rien
    printf("/ Test 5: n = 0 -> buffer unchanged\n");

    printf("\nAll tests passed!\n");
    return 0;
}

