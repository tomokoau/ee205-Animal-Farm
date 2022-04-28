///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Node.h"



void Node::dump() const {
    FORMAT_LINE_FOR_DUMP( "Node", "this" ) << this << endl ;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << endl ;
}



bool Node::operator>(const Node &rightSide) {

    if (this < &(Node &) rightSide)
        return false;
    return true;
}

bool Node::validate() const noexcept {
    if( next == nullptr ) {
        return true;
    }
    if( next == next->next ) {
        cout << PROGRAM_NAME << ": Recursive loop detected:  next points to itself!" ;
        return false;
    }

    return true;

}

