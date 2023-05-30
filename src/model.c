#include "model.h"
#include "utility.h"

#include <sqlite3.h>
#include <stdio.h>

static sqlite3 *db = NULL;

int open_database()
{
    return sqlite3_open(DATABASE_NAME, &db);
}


int close_database()
{
    return sqlite3_close(db);
}

int table_exists(char *table_name) {
    char sql[255];
    char *err_msg;
    int rc;

    if (!db) {
        show_error("Database is not open!\n");
        return 1;
    }

    sprintf(sql, "SELECT name FROM sqlite_master WHERE type='table' AND name='%s';", table_name);

    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK ) {    
        show_error("Failed to select data:\n");
        show_error(err_msg);

        sqlite3_free(err_msg);        
        sqlite3_close(db);

        return rc;
    }     

    return rc;  
}