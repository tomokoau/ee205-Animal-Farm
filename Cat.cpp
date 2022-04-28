///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Tomoko Austin <tomokoau@hawaii.edu>
/// @date   10_Apr_2022
///////////////////////////////////////////////////////////////////////////////

////#include "Cat.h"
////#include "catDatabase.h"
//
//Cat::Cat() {
//    memset(name, 0, MAX_CAT_NAME);
//    gender = UNKNOWN_GENDER;
//    breed = UNKNOWN_BREED;
//    isCatFixed = false;
//    weight = UNKNOWN_WEIGHT;
//    next = nullptr;
//}
//
//Cat::Cat(const char* newName, const Gender newGender, const Breed newBreed, const Weight newWeight) {
//    setName(const_cast<char *>(newName));
//    setGender(newGender);
//    setBreed(newBreed);
//    setWeight(newWeight);
//    assert (validate());
//}
//
//Gender Cat::getGender() const {
//    return gender;
//}
//
//const char *Cat::getName() const {
//    return name;
//}
//
//void Cat::setGender(Gender gender) {
//    Cat::gender = gender;
//}
//
//Breed Cat::getBreed() const {
//    return breed;
//}
//
//void Cat::setBreed(Breed breed) {
//    Cat::breed = breed;
//}
//
//Weight Cat::getWeight() const {
//    return weight;
//}
//
//void Cat::setWeight(Weight weight) {
//    Cat::weight = weight;
//}
//
//bool Cat::isFixed() const {
//    return isCatFixed;
//}
//
//void Cat::setIsCatFixed() {
//    Cat::isCatFixed = true;
//}
//
//void Cat::setName(char *name) {
//    strcpy(Cat::name, name);
//
//}
//#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
//bool Cat::print() const noexcept {
//    assert(validate());
//
//    cout << setw(80) << setfill('=') << "" << endl;
//    cout << setfill(' ');
//    cout << left;
//    cout << boolalpha;
//    FORMAT_LINE("Cat", "name") << getName() << endl;
//    FORMAT_LINE("Cat", "gender") << genderName(getGender()) << endl;
//    FORMAT_LINE("Cat", "breed") << breedName(getBreed()) << endl;
//    FORMAT_LINE("Cat", "isFixed") << isFixed() << endl;
//    FORMAT_LINE("Cat", "weight") << getWeight() << endl;
//
//    return true;
//}
//
// bool Cat::validate() const {
//    if (
//            validateName(name) &&
//            validateGender(gender) &&
//            validateBreed(breed) &&
//            validateWeight(weight)
//            ) {
//        return true;
//    }
//    return false;
//}
//
//bool Cat::validateName(const char *newName) const {
//    if (strlen(newName) == 0 || strlen(newName) > MAX_CAT_NAME) {
//        cerr<< "error: name must be of length 1 to " << MAX_CAT_NAME<<endl;
//        return false;
//    }
//    return true;
//}
//
//bool Cat::validateGender(const Gender newGender) const {
//    if (newGender == UNKNOWN_GENDER) {
//        return false;
//    }
//
//    return true;
//}
//
//bool Cat::validateBreed(const Breed newBreed) const {
//    if (newBreed == UNKNOWN_BREED) {
//        return false;
//    }
//
//    return true;
//}
//
//bool Cat::validateWeight(const Weight newWeight) const {
//    if (newWeight <= 0) {
//        return false;
//    }
//
//    return true;
//}
//
//
//Cat::~Cat() {
//
//    memset(name, 0, MAX_CAT_NAME);
//    gender = UNKNOWN_GENDER;
//    breed = UNKNOWN_BREED;
//    isCatFixed = false;
//    weight = UNKNOWN_WEIGHT;
//    next = nullptr;
//
//
//}
//
//void Cat::fixCat() {
//    setIsCatFixed();
//
//}


