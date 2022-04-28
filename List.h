///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file List.h
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Node.h"

class List {
protected:
    Node *head = nullptr;
    unsigned int count = 0;
public:
    bool empty() const noexcept;
    unsigned int size() const noexcept;
    bool isIn(Node* aNode)const;
    bool isSorted() const noexcept ;
    virtual Node* pop_front() noexcept = 0 ;
    Node* get_first() const noexcept ;
    static Node *get_next(const Node *currentNode ) ;
    void deleteAllNodes() noexcept ;
    virtual bool validate() const noexcept = 0;

};
