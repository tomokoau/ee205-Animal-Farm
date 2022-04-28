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

#pragma once


#include <iomanip>
#include <iostream>

#define PROGRAM_NAME  "animalfarm3"
#define PROGRAM_TITLE "Animal Farm 3"

using namespace std;
#define PRINT_HEADING_FOR_DUMP std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl


/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member ) std::cout << std::setfill( ' ' )  << std::left << std::boolalpha << std::setw( 8) << (className) << std::setw(20) << (member) << std::setw(52)