///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

//#include "deleteCats.h"
//
//bool deleteCat( Cat* deleteThisCat ) {
//    assert( deleteThisCat != nullptr ) ;
//
//    assert( validateDatabase() ) ;
//
//
//    if( deleteThisCat == catDatabaseHeadPointer ) {
//        catDatabaseHeadPointer = catDatabaseHeadPointer->next ;
//        delete deleteThisCat ;
//        numCats--;
//
//        assert( validateDatabase() ) ;
//        return true ;
//    }
//
//
//    Cat* iCat = catDatabaseHeadPointer ;
//    while( iCat != nullptr ) {
//        if( iCat->next == deleteThisCat ) {
//            iCat->next = deleteThisCat->next ;
//            delete deleteThisCat ;
//            numCats--;
//
//            assert( validateDatabase() ) ;
//
//            return true ;
//        }
//        iCat = iCat->next ;
//    }
//
//    assert( validateDatabase() ) ;
//
//   return false;
//}
//
//
//
//bool deleteAllCats() {
//
//    while(catDatabaseHeadPointer != nullptr ) {
//        deleteCat(catDatabaseHeadPointer ) ;
//    }
//
//
//
//
//
//    return true ;
//}
