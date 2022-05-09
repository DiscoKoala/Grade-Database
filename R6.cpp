/********************************************
 * Reads contents of given object vector and writes them to newly created file.
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#include<iostream>
#include<fstream>
// #include<string>
// #include<vector>

#include "Grades.hpp"

using namespace std;

void GradeItem::saveGradeItems_R6(std::vector<GradeItem> &grades){

    // Local variables and objects to store data
    std::fstream outFile;
    std::string fileName, date, description, type, maxGrade, grade, header;

    // Prompt user to enter name of file to be written to
    std::cout << "Save file name: ";
    std::cin >> fileName;
    std::cout << std::endl; 
    
    // Open file to be written to
    outFile.open(fileName, std::ios::out | std::ios::app);

    // Iterate through vector and write contents to file.
    for(auto iter: grades){
        outFile << "\n";
        outFile << iter.date << "," << iter.description << "," << iter.type << ","
        << iter.maxGrade << "," << iter.grade;
    };

    outFile.close();
};