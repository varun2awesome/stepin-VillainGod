#ifndef PK_SYSTEM
#define BK_SYSTEM

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int password();

void addrecord();

void viewrecord();

void editrecord();

void editpassword();

void deleterecord();

// A structure record is created
struct record

{

    char time[6];

    char name[30];

    char place[25];

    char duration[10];

    char note[500];

} ;
#endif