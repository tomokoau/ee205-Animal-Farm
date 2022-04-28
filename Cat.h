///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////
//
//#ifndef EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
//#define EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
//#include <cassert>
//#include <iostream>
//#include <cstring>
//#include <iomanip>
//
////#include "config.h"
//using namespace std;
//
//#define MAX_CAT_NAME 30
//
//class Cat {
//protected:
//    char name[MAX_CAT_NAME];
//    enum Gender gender;
//    enum Breed breed;
//    Weight weight;
//    bool isCatFixed;
//public:
//    Cat *next;
//
//    Cat();
//
//    Cat(const char *newName, const Gender newGender, const Breed newBreed, const Weight newWeight);
//
//
//    Gender getGender() const;
//
//    void setGender(Gender gender);
//
//    Breed getBreed() const;
//
//    void setBreed(Breed breed);
//
//    Weight getWeight() const;
//
//    void setWeight(Weight weight);
//
//    bool isFixed() const;
//
//    void setIsCatFixed();
//
//    const char *getName() const;
//
//    void setName(char *name);
//
//    virtual ~Cat();
//
//
//    bool validate() const;
//
//    bool validateName(const char *newName) const;
//
//    bool validateGender(const Gender newGender) const;
//
//    bool validateBreed(const Breed newBreed) const;
//
//    bool validateWeight(const Weight newWeight) const;
//
//    bool print() const noexcept;
//
//    void fixCat();
//
//
//};
//
//
//#endif //EE205_LAB_08D_ANIMAL_FARM_1_TO_CLION_CAT_H
