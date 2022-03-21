///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "main.h"


int main (){
    addCat( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCat( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCat( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCat( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCat( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCat( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;
    printAllCats();

    int kali = findCat( "Kali" ) ;
    updateCatName( kali, "Chili" ) ; // this should fail
    printCat( kali );
    printf("updating kali name to Capulet\n");
    updateCatName( kali, "Capulet" ) ;
    printf("updating Capulet weight\n");
    updateCatWeight( kali, 9.9 ) ;
    printf("updating Capulet collar1\n");
    updateCatCollar1(kali, WHITE);
    printf("updating Capulet collar2\n");
    updateCatCollar2(kali, PINK);
    printf("updating Capulet license\n");
    updateLicense(kali, 106);
    fixCat( kali ) ;
    printCat( kali );
    printAllCats();
    deleteAllCats();
    printAllCats();
    return 0;
}
