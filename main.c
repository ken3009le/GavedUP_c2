#include <stdio.h>
#include <string.h>
#include "lib/utils.h"   // or just utils.h if using -Ilib
#include <stdlib.h>

int main() {
    const unsigned char *input = (const unsigned char*)"hello world";
    char *encoded = base64_encode(input, strlen((const char*)input));
    printf("Base64: %s\n", encoded);
    free(encoded);
    return 0;
}
