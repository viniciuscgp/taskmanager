#ifndef TASKMANAGER_GUARD
#define TASKMANAGER

#include "sqlite3.h"
#include "time.h"
typedef struct taskmanager
{
    char title[40];
    char description[255];
    int priority;
    struct tm due_date;
} taskmanager_t;


#endif