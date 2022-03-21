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

int addCat(char cat_name[],enum Gender gender,enum Breed breed, bool is_fixed, float weight,enum Color collarColor1, enum Color collarColor2, unsigned long long license){

    if (numCats >= MAXIMUM_CAT){
        fprintf(stderr, "error: database is full(max size is %d)\n", MAXIMUM_CAT);
        return -1;
    }

    if (strlen(cat_name) == 0 || strlen(cat_name) > MAX_CAT_NAME){
        fprintf(stderr,"error: name must be of length 1 to %d\n",MAX_CAT_NAME);
        return -1;
    }

    for(size_t i=0; i< numCats;i++)//casting numCats which is a size_t to an int and this converts this temp
    {
        if ( strcmp(cats[i].name, cat_name)==0){
            fprintf(stderr,"error: cat name already exists\n");
            return -1;
        }
    }

    if (weight <= 0.0){

        fprintf(stderr,"error: is your cat %s antimatter? weight = %f\n", cat_name, weight);
        return -1;
    }

    strcpy(cats[numCats].name, cat_name);
    cats[numCats].gender   = gender;
    cats[numCats].breed    = breed;
    cats[numCats].isFixed = is_fixed;
    cats[numCats].weight   = weight;
    cats[numCats].collarColor1 = collarColor1;
    cats[numCats].collarColor2 = collarColor2;
    cats[numCats].license = license;
    numCats++;
    return 0;
}

