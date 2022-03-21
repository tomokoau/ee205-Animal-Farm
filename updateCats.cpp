///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "updateCats.h"

int updateCatName(int index, char* newName){
    if (strlen(newName) == 0 || strlen(newName) > MAX_CAT_NAME){
        fprintf(stderr,"error: name must be of length 1 to %d\n",MAX_CAT_NAME);
        return -1;
    }
    for(size_t i=0; i<numCats;i++){
        if ( strcmp(cats[i].name, newName)==0){
            fprintf(stderr,"error: new cat name already exists\n");
            return -1;
        }
    }
    strcpy(cats[index].name,newName);
    return 0;
}

int fixCat(int index){
    cats[index].isFixed =true;
    return 0;
}

int updateCatWeight(int index, float newWeight){

    if (newWeight <= 0.0){

        fprintf(stderr,"error: is your cat %s antimatter? weight = %f\n", cats[index].name, newWeight);
        return -1;
    }
    cats[index].weight = newWeight;
    return 0;
}

int updateCatCollar1(int index, enum Color newColor){
    cats[index].collarColor1= newColor;
    return 0;

}

int updateCatCollar2(int index, enum Color newColor){
    cats[index].collarColor2= newColor;
    return 0;

}


int updateLicense (int index, unsigned long long newLicense){
    cats[index].license = newLicense;
    return 0;

}
