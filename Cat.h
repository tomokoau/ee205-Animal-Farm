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
#pragma once

#include <string>

#include "config.h"
#include "Mammal.h"



    class Cat : public Mammal {
    public:
        static const std::string      SPECIES_NAME;
        static const Weight::t_weight MAX_WEIGHT;

        explicit Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
            if( !validateName( newName) ) {
                /// @throws out_of_range If the Cat doesn't have a name
               cout<<"cat must be named"<<endl;
            }
            name = newName;
            isCatFixed = false;

            Cat::validate();
        }


        Cat( const std::string&     newName
                ,const Color            newColor
                ,const bool             newIsFixed
                ,const Gender           newGender
                ,const Weight::t_weight newWeight
        ) : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
            if( !validateName( newName) ) {
                cout<<"cat must be named"<<endl;
            }
            name = newName;
            isCatFixed = newIsFixed;
            setWeight(newWeight);

            Cat::validate();

        }


        std::string getName() const noexcept ;
        void setName( const std::string& newName );


        bool isFixed() const noexcept ;
        void fixCat() noexcept ;

        std::string speak() const noexcept override;
        void dump() const noexcept override;          ///< Print the contents of this object (and its parents)
        bool validate() const noexcept override;      ///< Check to see if the Cat object is valid

        // Static methods are `const` by default
        static bool validateName( const std::string& newName ) ;  ///< Check if `newName` is valid

    protected:  ///////////////////////// Member Variables /////////////////////////
        std::string name ;        ///< The name of the cat
        bool        isCatFixed ;  ///< `true` if the cat is fixed/neutered

};
