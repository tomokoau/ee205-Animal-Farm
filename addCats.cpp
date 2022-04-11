///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "addCats.h"




bool addCat(Cat *newCat) {
    assert(newCat != nullptr);
    newCat->validate();

    assert(validateDatabase());


    newCat->next = catDatabaseHeadPointer;
    catDatabaseHeadPointer = newCat;
    numCats++;

    assert(validateDatabase());


    return true;
}
