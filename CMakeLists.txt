cmake_minimum_required(VERSION 3.22)
project(ee205_lab_08d_animal_farm_1_to_clion)

set(CMAKE_CXX_STANDARD 14)

add_executable(ee205_lab_08d_animal_farm_1_to_clion main.cpp addCats.cpp addCats.h catDatabase.cpp catDatabase.h deleteCats.cpp deleteCats.h reportCats.cpp reportCats.h Cat.cpp Cat.h config.h Node.cpp Node.h Gender.h Color.h Weight.cpp Weight.h List.cpp List.h SinglyLinkedList.cpp SinglyLinkedList.h Animal.cpp Animal.h Mammal.cpp Mammal.h)
