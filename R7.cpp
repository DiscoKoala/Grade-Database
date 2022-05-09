/********************************************
 * Iterates through object vector to display contents
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#include<iostream>

#include "Grades.hpp"

void GradeItem::displayGradeItems_R7(std::vector<GradeItem> &ls){

    // Iterate through object vector.
    for(auto iter: ls){
        // Outputting iterator object contents.
        printf("%-*s", 12, iter.date.c_str());
        printf("%-*s", 25, iter.description.c_str());
        printf("%-*s", 18, iter.type.c_str());
        printf("%-*s", 15, iter.maxGrade.c_str());
        printf("%-*s", 10, iter.grade.c_str());
        std::cout << "\n";
    };
    std::cout << "\n";
};
