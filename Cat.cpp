///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <stdexcept>
#include <iostream>
#include <cassert>

#include "Cat.h"

using namespace std ;


const std::string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;


string Cat::getName() const noexcept {
    return name;
}


void Cat::setName( const string& newName ) {
    if( !validateName( newName )) {
        cout<<"not appropriate name"<<endl;
    }
    name = newName ;
}


bool Cat::isFixed() const noexcept {
    return isCatFixed;
}



void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}



void Cat::dump() const noexcept {
    assert( validate() ) ;

    Mammal::dump() ;

    FORMAT_LINE_FOR_DUMP( "Cat", "name" )    << getName() << endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << endl ;
}


/// Check the Cat object.
bool Cat::validate() const noexcept {
    Mammal::validate() ;

    assert( validateName( getName() ));

    return true;
}


/// @param newName The name to check
/// @return `true` if the name is valid (not empty).  `false` if the cat doesn't have a name.
bool Cat::validateName( const std::string& newName ) {
    if( newName.empty() ) {
        cout << PROGRAM_NAME ": A cat should have a name" << endl;
        return false;
    }

    return true;
}


std::string Cat::speak() const noexcept {
    return "Meow" ;
}


