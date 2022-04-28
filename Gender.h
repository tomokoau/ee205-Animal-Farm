///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <string>
/// A gender... for educational use only. This is not intended to be
/// inclusive of all possible genders
enum class Gender {
    UNKNOWN_GENDER=0
    ,MALE
    ,FEMALE
};
/// Output Gender as a formatted string
///
/// @param lhs_stream The output stream to write to (usually `cout`). `
/// `lhs` stands for Left Hand Side and means the left side
/// of the `<<` operator.
/// @param rhs_Gender The Gender to output.
/// `rhs` stands for Right Hand Side and means the right
/// side of the `<<` operator.
/// @return `Unknown gender`, `Female` or `Male`.
inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ){
    switch( rhs_Gender ) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:
            /// @throw out_of_range If the enum is not mapped to a string.
            throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
    }
    return lhs_stream;
}