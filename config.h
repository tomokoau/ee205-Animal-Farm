///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#ifndef EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CONFIG_H
#define EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CONFIG_H
#include <cstddef>
enum Breed {UNKNOWN_BREED,MAINE_COON,MANX,SHORTHAIR,PERSIAN,SPHINX};
enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
typedef float Weight;
typedef size_t NumCats;

const Weight UNKNOWN_WEIGHT = -1 ;

#endif //EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CONFIG_H
