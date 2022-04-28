///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   27_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Animal.h"


Animal::Animal(const Weight::t_weight newMaxWeight, const std::string &newClassification,
               const std::string &newSpecies) {

}

Animal::Animal(const Gender newGender, const Weight::t_weight newWeight, const Weight::t_weight newMaxWeight,
               const std::string &newClassification, const std::string &newSpecies) {
    if( !validateClassification( newClassification ) ) {

     cout<< "The classification is invalid" <<endl;
     return false;
    }
    classification = newClassification;

    if( !validateSpecies( newSpecies ) ) {
        cout<<"species invalid"<<endl;
    }
    species = newSpecies;

    setGender( newGender );
    Animal::validate();
}

std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}

std::string Animal::getClassification() const noexcept {
    return classification;
}

std::string Animal::getSpecies() const noexcept {
    return species;
}

Gender Animal::getGender() const noexcept {
    return gender;
}

Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight();
}

void Animal::setWeight(const Weight::t_weight newWeight) {
    validate();
    weight.setWeight( newWeight );
    validate();
}

bool Animal::validateClassification(const std::string &checkClassification) noexcept {
    if( checkClassification.empty() ) {
        cout << PROGRAM_NAME <<"classification must not be empty" << endl ;
        return false;
    }

    return true;
}

bool Animal::validateSpecies(const std::string &checkSpecies) noexcept {
    if( checkSpecies.empty() ) {
        cout << PROGRAM_NAME<< ": species must not be empty" << endl ;
        return false;
    }

    return true;
}


void Animal::dump() const noexcept {
    assert( validate() ) ;

    PRINT_HEADING_FOR_DUMP
    Node::dump();

    FORMAT_LINE_FOR_DUMP( "Animal", "this" ) << this << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" ) << getKingdom() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) << getClassification() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender" ) << getGender() << endl ;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" ) << const Weight << endl ;
}

bool Animal::validate() const noexcept {
    assert( Node::validate() );

    assert( !getKingdom().empty() );
    assert( validateClassification(getClassification()) );
    assert( validateSpecies( getSpecies() ));

    assert( weight.validate() );
    return true;
}

void Animal::setGender(const Gender newGender) {
    if( gender != Gender::UNKNOWN_GENDER ){
        cout<<PROGRAM_NAME<<"gender is already set"<<endl;

    }
    assert( gender == Gender::UNKNOWN_GENDER );

    validate();
    gender = newGender ;
    validate();
}
