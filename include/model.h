#ifndef MODEL_GUARD
#define MODEL_GUARD

int open_database();
int close_database();
int table_exists(char *table_name);
int create_tables();

#define DATABASE_NAME "tasksdb.db"

#endif