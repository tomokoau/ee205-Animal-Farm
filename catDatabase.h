///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CAT_NAME 30
#define MAXIMUM_CAT 1024
enum Breed {UNKNOWN_BREED,MAINE_COON,MANX,SHORTHAIR,PERSIAN,SPHINX};
enum Color { BLACK, WHITE, RED, BLUE, GREEN, PINK};
enum Gender{UNKNOWN_GENDER, MALE, FEMALE};
typedef float Weight;

struct Cat{

    char name[MAX_CAT_NAME];
    enum Gender gender;
    enum Breed breed;
    Weight weight;
    bool isFixed;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct Cat cats[];
extern size_t numCats;

extern char* genderName(const enum Gender gender);

extern char* breedName(const enum Breed breed);

extern char* colorName(const enum Color color);


