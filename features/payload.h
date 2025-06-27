#ifndef PAYLOAD_H
#define PAYLOAD_H

typedef struct {
    char feature[32];
    char argument[128];
    char timestamp[64];
} Payload;

Payload parse_payload(const char* cmd);
void print_payload(const Payload* p);

#endif
