///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   21_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include <iostream>

class Node{
    friend class List;
    friend class SinglyLinkedList;
protected:
    Node* next = nullptr;


public:
    virtual void dump() const;
    virtual bool operator>(const Node& rightSide);
    virtual bool validate() const noexcept;
};


