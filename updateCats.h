///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "catDatabase.h"

int updateCatName(int index, char* newName);
int fixCat(int index);
int updateCatWeight(int index, float newWeight);
int updateCatCollar1(int index, enum Color newColor);
int updateCatCollar2(int index, enum Color newColor);
int updateLicense (int index, unsigned long long newLicense);

