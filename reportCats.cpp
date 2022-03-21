///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "reportCats.h"

int printCat(long unsigned int index) {
    if (index >= numCats) {
        fprintf(stderr,"animalFarm1: Bad cat [%lu]\n",index);
        return -1;
    }
    printf("cat index = [%lu] name=[%s] gender=[%s] breed=[%s] isFixed=[%d] weight=[%f] color1=[%s] color2=[%s] license=[%llu]\n",index, cats[index].name, genderName(cats[index].gender), breedName(cats[index].breed),cats[index].isFixed,cats[index].weight, colorName(cats[index].collarColor1), colorName(cats[index].collarColor2), cats[index].license);
    return 0;
}


int printAllCats(){
    for (size_t i=0; i<numCats; i++){
        printCat(i);
    }
    return 0;
}

int findCat(char cat_name[]){
    for(size_t i=0; i<numCats;i++){
        if ( strcmp(cats[i].name, cat_name)==0){
            return i;
        }
    }

    fprintf(stderr,"cat not found\n");

    return -1;
}
