///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   27_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <string>
#include <cassert>

#include "config.h"
#include "Mammal.h"

using namespace std;


const std::string Mammal::MAMMAL_NAME = "Mammilian";


void Mammal::dump() const noexcept {
    assert( validate() ) ;

    Animal::dump() ;

    FORMAT_LINE_FOR_DUMP( "Mammal", "color" ) << color << endl ;
}