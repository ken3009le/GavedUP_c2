#ifndef TABLE_H
#define TABLE_H

#define TABLE_GITHUB_URL      1
#define TABLE_LOG_PATH        2
#define TABLE_CMD_PATH        3
#define TABLE_USER_AGENT      4

void table_init();
char* table_retrieve_val(int id);

#endif
