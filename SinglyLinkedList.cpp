///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <cassert>
#include <iostream>

#include "SinglyLinkedList.h"
#include "Node.h"
SinglyLinkedList::SinglyLinkedList() {
    assert( SinglyLinkedList::validate() );
}

void SinglyLinkedList::push_front(Node *newNode) {
    if (newNode == nullptr) { cout << PROGRAM_NAME<<"newNode cant be nullptr" << endl; }
    if( !newNode->validate() ) { cout<<PROGRAM_NAME<<"newNode is not valid"<<endl;}
    count++;
    newNode->next = head;
    head=newNode;

}

Node *SinglyLinkedList::pop_front() noexcept {
    if( head == nullptr )
        return nullptr;
    Node *temp;
    temp = head;
    head = head->next;
    temp ->next = nullptr;
    count --;
    return temp;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if (currentNode == NULL){
        cout<< PROGRAM_NAME<<"The current node cannot be NULL"<<endl;

    }
    if( head == nullptr) {cout<< PROGRAM_NAME<<"Cant insert after if list is empty"<<endl;}
    count++;
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList:  head=[" << head << "]" << endl;
    for(Node *currentNode = head ; currentNode != nullptr ; currentNode = currentNode->next ) {
        currentNode->dump();
    }
}

bool SinglyLinkedList::validate( ) const noexcept {
    if( head == nullptr ) {
        assert( count == 0 );
        assert( empty() );
    } else {
        assert( count != 0 );
        assert( !empty() );
    }
    unsigned int count =0;
    Node *currentNode =head;

    while( currentNode != nullptr ) {
        assert( currentNode->validate() ) ;
        count++;
        currentNode = currentNode->next;
    }
    //cout<<size()<<"    "<<count<<endl;
    assert( size() == count );


    return true;
}






