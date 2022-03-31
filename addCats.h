///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "catDatabase.h"

int addCat(char cat_name[],enum Gender gender,enum Breed breed, bool is_fixed, Weight weight,enum Color collarColor1, enum Color collarColor2, unsigned long long license);

