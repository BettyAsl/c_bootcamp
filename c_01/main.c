#include <stdio.h>
#include <string.h>
#include <assert.h>

char *my_strcpy(char *dest, const char *src); // prototype

int main(void) {
    char buffer[100];
    char *result;

    result = my_strcpy(buffer, "Hello");
    assert(strcmp(buffer, "Hello") == 0 && result == buffer);
    printf("/ Test 1: \"Hello\" copied\n");

    result = my_strcpy(buffer, "World!");
    assert(strcmp(buffer, "World!") == 0 && result == buffer);
    printf("/ Test 2: \"World!\" overwrites\n");

    result = my_strcpy(buffer, "");
    assert(strcmp(buffer, "") == 0 && result == buffer);
    printf("/ Test 3: empty string\n");

    result = my_strcpy(buffer, "The quick brown fox");
    assert(strcmp(buffer, "The quick brown fox") == 0 && result == buffer);
    printf("/ Test 4: long string\n");

    result = my_strcpy(buffer, "Tab:\tNewline:\n");
    assert(strcmp(buffer, "Tab:\tNewline:\n") == 0 && result == buffer);
    printf("/ Test 5: special chars\n");

    printf("\nAll tests passed!\n");
    return 0;
}
