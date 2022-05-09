/********************************************
 * Generates a summary of all grade items 
 * listing maximum grade possible, grade achieved,
 * grade percentage, and letter grade.
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#include<iostream>

#include "Grades.hpp"

void GradeItem::generateSummary(std::vector<GradeItem> &ls){
    
    // Too many variables.
    GradeItem item;

    int homeWork_MaxTotal = 0, 
        homeWork_gradeTotal = 0, 
        classWork_MaxTotal = 0, 
        classWork_gradeTotal = 0, 
        quiz_MaxTotal = 0, 
        quiz_gradeTotal = 0, 
        examMaxGrade = 0, 
        examGradeTotal = 0, 
        maxGrandTotal = 0, 
        grandTotal = 0;

    float percentage = 0;

    char letterGrade;
    
    // Header
    printf("%-*s", 12, "Date");
    printf("%-*s", 25, "Description");
    printf("%-*s", 18, "Type");
    printf("%-*s", 13, "Max Grade");
    printf("%-*s", 10, "Grade");
    std::cout << "\n";

    // Totalling up all achieved and maximum grade scores
    for(auto iter: ls){

        if(iter.type == "HW"){
            homeWork_MaxTotal += stoi(iter.maxGrade);
            homeWork_gradeTotal += stoi(iter.grade);

        }else if(iter.type == "Class Work"){
            classWork_MaxTotal += stoi(iter.maxGrade);
            classWork_gradeTotal += stoi(iter.grade);

        }else if(iter.type == "Quiz"){
            quiz_MaxTotal += stoi(iter.maxGrade);
            quiz_gradeTotal += stoi(iter.grade);
        
        }else if(iter.type == "Exam"){
            examMaxGrade += stoi(iter.maxGrade);
            examGradeTotal += stoi(iter.grade);
        }else{
            continue;
        };

        // Outputting iterator object contents.
        printf("%-*s", 12, iter.date.c_str());
        printf("%-*s", 25, iter.description.c_str());
        printf("%-*s", 18, iter.type.c_str());
        printf("%-*s", 13, iter.maxGrade.c_str());
        printf("%-*s", 10, iter.grade.c_str());
        std::cout << "\n";
    };

    // Calculating grand totals, grade percentage, and letter grade. 
    maxGrandTotal = homeWork_MaxTotal + classWork_MaxTotal + quiz_MaxTotal + examMaxGrade;

    grandTotal = homeWork_gradeTotal + classWork_gradeTotal + quiz_gradeTotal + examGradeTotal;

    // Cast integer values to float.
    percentage = (static_cast<float>(grandTotal) / static_cast<float>(maxGrandTotal)) * 100;

    // Determine letter grade
    letterGrade = item.letterGrade(percentage);


    // Displaying summary 
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "Summary" << std::endl;
    printf("%-*s", 55, "HW");
    printf("%-13u", homeWork_MaxTotal);
    printf("%-u", homeWork_gradeTotal);
    std::cout << "\n";

    printf("%-*s", 55, "Class Work");
    printf("%-13u", classWork_MaxTotal);
    printf("%-u", classWork_gradeTotal);
    std::cout << "\n";

    printf("%-*s", 55, "Quiz");
    printf("%-13u", quiz_MaxTotal);
    printf("%-u", quiz_gradeTotal);
    std::cout << "\n";

    printf("%-*s", 55, "Exam");
    printf("%-13u", examMaxGrade);
    printf("%-u", examGradeTotal);
    std::cout << "\n";

    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    printf("%-*s", 55, "Grand Total");
    printf("%-13u", maxGrandTotal);
    printf("%-u", grandTotal);
    std::cout << "\n";

    printf("%-*s", 68, "Grade Percentage");
    printf("%4.2f", percentage);
    std::cout << "\n";

    printf("%-*s", 68, "Letter Grade");
    printf("%-c", letterGrade);
    std::cout << "\n";
};