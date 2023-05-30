#include "model.h"
#include <sqlite3.h>

static sqlite3 *db;

int open_database()
{
    return sqlite3_open(DATABASE_NAME, &db);
}


int close_database()
{
    return sqlite3_close(db);
}

