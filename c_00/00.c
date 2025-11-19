#include <stdio.h>
#include <stddef.h>
#include <assert.h>

size_t my_strlen(const char *s); // À implémenter dans my_strlen.c

int main(void) {
    assert(my_strlen("Hello") == 5);
    printf("/ Test 1: \"Hello\" = 5\n");

    assert(my_strlen("") == 0);
    printf("/ Test 2: \"\" = 0\n");

    assert(my_strlen("Test 123") == 8);
    printf("/ Test 3: \"Test 123\" = 8\n");

    assert(my_strlen("abcdefghijklmnopqrstuvwxyz") == 26);
    printf("/ Test 4: alphabet = 26\n");

    assert(my_strlen("Hello\nWorld\t!") == 13);
    printf("/ Test 5: special chars = 13\n");

    printf("\n All tests passed!\n");
    return 0;
}
