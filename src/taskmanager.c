#include "taskmanager.h"
#include "model.h"
#include "utility.h"

int main(int argc, char const *argv[])
{
    if (open_database() != SQLITE_OK)
    {
        show_error("Error opening database !");
        return 1;
    }  

    if (table_exists("tasks") != SQLITE_OK) {
        show_error("Table 'tasks' does not exists!");
        close_database();
        return 1;
    } else {
        if (create_tables() != SQLITE_OK) {
            return 1;
        }
    }


    close_database();
    return 0;
}
