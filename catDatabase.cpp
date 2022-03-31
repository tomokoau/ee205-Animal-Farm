///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   30_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "catDatabase.h"

NumCats numCats=0;

struct Cat cats[MAXIMUM_CAT];

char *genderName(const enum Gender gender)
{
    switch (gender)
    {
        case (UNKNOWN_GENDER):
            return "UNKNOWN_GENDER";
        case (MALE):
            return "MALE";
        case (FEMALE):
            return "FEMALE";
        default:
            return "\0"; //
    }
}

char *breedName(const enum Breed breed)
{
    switch (breed)
    {
        case (UNKNOWN_BREED):
            return "UNKNOWN_BREED";
        case (MAINE_COON):
            return "MAINE_COON";
        case (MANX):
            return "MANX";
        case (SHORTHAIR):
            return "SHORTHAIR";
        case (PERSIAN):
            return "PERSIAN";
        case (SPHINX):
            return "SPHINX";
        default:
            return "\0";
    }
}

char *colorName(const enum Color color)
{
    switch (color)
    {
        case (BLACK):
            return "BLACK";
        case (WHITE):
            return "WHITE";
        case (RED):
            return "RED";
        case (BLUE):
            return "BLUE";
        case (GREEN):
            return "GREEN";
        case (PINK):
            return "PINK";
        default:
            return "\0";
    }
}
