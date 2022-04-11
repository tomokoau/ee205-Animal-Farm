///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   30_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "config.h"
#include "Cat.h"





extern NumCats numCats;

extern char* genderName(const enum Gender gender);

extern char* breedName(const enum Breed breed);

extern Cat* catDatabaseHeadPointer;

 extern bool validateDatabase();