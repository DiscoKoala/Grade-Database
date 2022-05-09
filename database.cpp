/********************************************
 * Driver file containing menu handling function
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#include<iostream>
#include<iomanip>

#include "Grades.hpp"

// Menu function declaration.
void menu();

// List of Grade objects 
std::vector<GradeItem> gradeItemList;

using namespace std;

// Driver function.
int main(){

    menu();
    return 0;
};


// Menu function to display menu and handle user selection.
void menu(){

    // Local variables and object.
    GradeItem student;
    int select;
    bool done = false;
        
        do{
            // Display menu options.
            std::cout << endl;
            std::cout << "R0 - Exit." << std::endl;
            std::cout << "R1 - Read the csv formatted database file." << std::endl;
            std::cout << "R2 - Add new grade item." << std::endl;
            std::cout << "R3 - Search for grade item." << std::endl;
            std::cout << "R6 - Save the grade items into a csv formatted file." << std::endl;
            std::cout << "R7 - Display list of grade items on screen." << std::endl;
            std::cout << "R8 - Generate Summary of graded items." << std::endl;

            // Prompt user for selection.
            std::cout << "\n-> R";
            std::cin >> select;
            std::cout << "\n";

            std::cin.clear();
            std::cin.ignore();

            // Input fault tolerance. Loops until integer is input.
            while(!0 || !1 || !2 || !3 || !6 || !7 || !8){
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid input. Please enter an integer. " << std::endl;
                std::cout << "\n-> R";
                std::cin >> select;
                std::cout << "\n";
            };

            // Call appropriate function.
            switch(select){
                // Exit parameter.
                case 0:
                    done = true;
                    break;
                case 1: 
                    student.readCSV_R1(gradeItemList);
                    break;
                case 2:
                    student.addNewItem(gradeItemList);
                    break;
                case 3:
                    student.searchItem(gradeItemList);
                    break;
                case 6:
                    student.saveGradeItems_R6(gradeItemList);
                    break;
                case 7: 
                    student.displayGradeItems_R7(gradeItemList);
                    break;
                case 8:
                    student.generateSummary(gradeItemList);
                    break;
                // Input resillience.
                default:
                    std::cout << "Invalid selection" << std::endl;
        };

    } while(done == false);
};