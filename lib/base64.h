#ifndef BASE64_H
#define BASE64_H

#include <stddef.h>

char *base64_encode(const unsigned char *data, size_t input_length);

#endif
