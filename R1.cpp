/********************************************
 * Function for reading contents of csv file into list of Grade objects.
 * Function takes reference to list for parameter.
 * User prompted for file name.
 * Fault tolerance by checking for existing file.
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#include<iostream>
#include<fstream>
// #include<vector>
// #include<string>

#include "Grades.hpp"

using namespace std;

void GradeItem::readCSV_R1(vector<GradeItem> &ls){ 

    // Local variables
    std::fstream infile;
    std::string line, fileName, word;
    bool check = false;

    // Loop while file name is not found
    while(!check){

        // Prompt user for file name
        std::cout << "Enter file name: ";
        std::cin >> fileName;
        std::cout << std::endl;  

        if(fileName == "exit"){
            check = true;
        };
        
        infile.open(fileName, std::ios::in);
        
        // Check file name
        if(infile.is_open()){
            check = true;

            // Loop until end of file reached.
            while(!infile.eof()){
               
                // Temporary Grade object
                GradeItem temp;
               
                // Read line and initialize temp variables.
                getline(infile, temp.date, ',');
                getline(infile, temp.description, ',');
                getline(infile, temp.type, ',');
                getline(infile, temp.maxGrade, ',');
                getline(infile, temp.grade, '\n');
                
                // Add object to global list value.
                ls.push_back(temp);
            };
        }
        else{
            // Displayed if file name not found
            std::cout << "File not found. Try again.\n" << std::endl;
            std::cout << "Or enter 'exit' to escape.\n" << std::endl;
        };

        infile.close();
    };
};