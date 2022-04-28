///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   26_Apr_2022
///////////////////////////////////////////////////////////////////////////////


#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "Weight.h"

using namespace std;


const float Weight::UNKNOWN_WEIGHT = -1;

const float Weight::KILOS_IN_A_POUND = 0.453592;
const float Weight::SLUGS_IN_A_POUND = 0.031081;

const string Weight::POUND_LABEL = "Pound";
const string Weight::KILO_LABEL = "Kilo";
const string Weight::SLUG_LABEL = "Slug";

Weight::Weight()

noexcept{
    bIsKnown = false;
    bHasMax = false;
    weight = UNKNOWN_WEIGHT;
    maxWeight = UNKNOWN_WEIGHT;
    unitOfWeight = POUND;

};

Weight::Weight(float newWeight) {
    bIsKnown = true;
    bHasMax = false;
    weight = newWeight;
    maxWeight = UNKNOWN_WEIGHT;
    unitOfWeight = POUND;
}

Weight::Weight(UnitOfWeight newUnitOfWeight)

noexcept{
    bIsKnown = false;
    bHasMax = false;
    weight = UNKNOWN_WEIGHT;
    maxWeight = UNKNOWN_WEIGHT;
    unitOfWeight = newUnitOfWeight;

}

Weight::Weight(float newWeight, UnitOfWeight newUnitOfWeight) {
    bIsKnown = true;
    bHasMax = false;
    weight = newWeight;
    maxWeight = UNKNOWN_WEIGHT;
    unitOfWeight = newUnitOfWeight;

}

Weight::Weight(float newWeight, float newMaxWeight) {
    bIsKnown = true;
    bHasMax = true;
    weight = newWeight;
    maxWeight = newMaxWeight;
    unitOfWeight = POUND;
}

Weight::Weight(UnitOfWeight newUnitOfWeight, float newMaxWeight) {
    bIsKnown = false;
    bHasMax = true;
    weight = UNKNOWN_WEIGHT;
    maxWeight = newMaxWeight;
    unitOfWeight = newUnitOfWeight;
}

Weight::Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight) {
    bIsKnown = true;
    bHasMax = true;
    weight = newWeight;
    maxWeight = newMaxWeight;
    unitOfWeight = newUnitOfWeight;
}

bool Weight::isWeightKnown() const

noexcept{
    return
            bIsKnown;
}

bool Weight::hasMaxWeight() const

noexcept{
    return
            bHasMax;
}

float Weight::getWeight() const

noexcept{
    return
            weight;
}

float Weight::getWeight(UnitOfWeight weightUnits) const

noexcept{
    float commonWeight;
    switch (unitOfWeight){
        case POUND:
            commonWeight = weight;
            break;
        case KILO:
            commonWeight = fromKilogramToPound(weight);
            break;
        case SLUG:
            commonWeight = fromSlugToPound(weight);
            break;
    }
    float toValue;
    switch (weightUnits){
        case POUND:
            toValue = commonWeight;
            break;
        case KILO:
            toValue = fromPoundToKilogram(commonWeight);
            break;
        case SLUG:
            toValue = fromPoundToSlug(commonWeight);
            break;
    }
    return
            toValue;
}

float Weight::getMaxWeight() const

noexcept{
    return
            maxWeight;
}

Weight::UnitOfWeight Weight::getWeightUnit() const

noexcept{
    return
            unitOfWeight;

}
void Weight::setWeight( float newWeight ){
    weight= newWeight;
}
void Weight::setWeight( float newWeight, UnitOfWeight weightUnits ){
    weight = newWeight;
    unitOfWeight = weightUnits;
}
void Weight::setMaxWeight(t_weight newMaxWeight) {
    /// The maximum weight should not be set when we start this routine
    assert( !bHasMax );

    if( !isWeightValid( newMaxWeight) ) {

        cout<<"max weight out of range"<<endl;

    }

    maxWeight = newMaxWeight;
    bHasMax = true ;


}

bool Weight::isWeightValid(float checkWeight) const noexcept{

    if( checkWeight <= 0 ) {
        cout << "Weight [" << checkWeight << "] can not be <= 0" << endl ;
        return false;
    }

/// If `bHasMax`, then `checkWeight` must be <= `maxWeight`
    if( bHasMax ) {
        if( checkWeight > maxWeight ) {
            cout << "Weight [" << checkWeight << "] is > the maximum weight [" << maxWeight << "]" << endl ;
            return false;
        }
    }

    return true;
}

bool Weight::validate() const noexcept{
    if( bHasMax ) {
        if( !isWeightValid(( maxWeight))) {
            cout << "Max weight is <= 0" << endl;
            return false;
        }

        assert( maxWeight > 0 );
    }

    if( bIsKnown ) {
        if( !isWeightValid( weight ) ) {
            return false;
        }

        assert( weight > 0);

        if( bHasMax ) {
            assert( weight <= maxWeight );
        }
    }

    return true;

}
#define FORMAT_LINE( className, member ) std::cout \
                                      << std::setw(8) << (className) \
                                      << std::setw(20) << (member)   \
                                      << std::setw(52)
void Weight::dump() const noexcept {
// Print ===================================================================
    cout << setw(80) << setfill( '=' ) << "" << endl ;
    cout << setfill( ' ' ) ;   // Space pad
    cout << left ;             // Left justify
    cout << boolalpha ;        // Print `true` and `false` for `bool`s

    FORMAT_LINE( "Weight", "this" )         << this         << endl ;
    FORMAT_LINE( "Weight", "isKnown" )      << bIsKnown     << endl ;
    FORMAT_LINE( "Weight", "weight" )       << weight       << endl ;
    FORMAT_LINE( "Weight", "unitOfWeight" ) << unitOfWeight << endl ;
    FORMAT_LINE( "Weight", "hasMax" )       << bHasMax      << endl ;
    FORMAT_LINE( "Weight", "maxWeight" )    << maxWeight    << endl ;
}

///compairs weights
std::ostream& operator<<( ostream& lhs_stream, const Weight::UnitOfWeight rhs_UnitOfWeight ) {
    switch( rhs_UnitOfWeight ) {
        case Weight::POUND: return lhs_stream << Weight::POUND_LABEL ;
        case Weight::KILO:  return lhs_stream << Weight::KILO_LABEL ;
        case Weight::SLUG:  return lhs_stream << Weight::SLUG_LABEL ;
        default: throw out_of_range( "The unit can not be converted to a string" );
    }
}
bool Weight::operator==( const Weight& rhs_Weight ) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    ///? = if  : is else
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight == rhs_weight;
}
Weight& Weight::operator+=( const float rhs_addToWeight ) {
    if( !bIsKnown ) {
        throw out_of_range( "unknown weight" ) ;
    }

    setWeight( weight + rhs_addToWeight );

    return *this;
}
bool Weight::operator<(const Weight &rhs_Weight) const {
    float lhs_weight = (bIsKnown) ? getWeight(Weight::POUND) : 0;
    float rhs_weight = (rhs_Weight.bIsKnown) ? rhs_Weight.getWeight(Weight::POUND) : 0;

    return lhs_weight < rhs_weight;
}



float Weight::fromKilogramToPound( const float kilogram ) noexcept {
    return kilogram / KILOS_IN_A_POUND ;
}


float Weight::fromPoundToKilogram( const float pound ) noexcept {
    return pound * KILOS_IN_A_POUND ;
}


float Weight::fromSlugToPound( const float slug ) noexcept {
    return slug / SLUGS_IN_A_POUND ;
}


float Weight::fromPoundToSlug( const float pound ) noexcept {
    return pound * SLUGS_IN_A_POUND ;
}