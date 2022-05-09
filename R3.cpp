/*****************************************************************************
 * Algorithm that returns and displays object variables that match user input.
 *
 * Author: Wesley Johnson
 * Version: 04/13/2022
 *****************************************************************************/

#include<iostream>
// #include<vector>
// #include<string>

#include "Grades.hpp"

using namespace std;

void GradeItem::searchItem(std::vector<GradeItem> &grades){

    int selection;
    string dates, descript;
    bool check;
    
    // Loops continuously until user inputs valid menu selection.
    do{
        // Sub-menu and user input.
        cout << "1. Search by date." << endl << endl;
        cout << "2. Search by description." << endl;
        cout << " -> ";
        std::cin >> selection;
        cout << "\n";

        // If user searches by date.
        if(selection == 1){
            
            // Prompt user for date.
            cout << "Enter date: ";
            std::cin >> dates;
            cout << "\n";

            // Output Headers
            printf("%-*s", 10, "Date");
            printf("%-*s", 22, "Description");
            printf("%-*s", 15, "Type");
            printf("%-*s", 11, "Max Grade");
            printf("%-*s", 8, "Grade");
            cout << "\n";

            // Iterate through object vector.
            for(auto iter: grades){
                
                // If user input matches object member, 
                // output all relevant data.
                if(dates == iter.date){
                    cout << "\n";
                    printf("%-*s", 10, iter.date.c_str());
                    printf("%-*s", 22, iter.description.c_str());
                    printf("%-*s", 15, iter.type.c_str());
                    printf("%-*s", 11, iter.maxGrade.c_str());
                    printf("%-*s", 8, iter.grade.c_str());
                };
            };

            // Break loop.
            cout << "\n";
            check = true;
        };

        // If user searches by description.
        if(selection == 2){
            
            // Prompt user for description
            cout << "Enter description: ";
            std::cin >> descript;
            cout << "\n";

            // Output headers
            printf("%-*s", 10, "Date");
            printf("%-*s", 22, "Description");
            printf("%-*s", 15, "Type");
            printf("%-*s", 11, "Max Grade");
            printf("%-*s", 8, "Grade");
            cout << "\n";

            // Iterate through object vector.
            for(auto iter: grades){

                // If description matches, output all relevant data.
                if(descript == iter.description){
                    cout << "\n";
                    printf("%-*s", 10, iter.date.c_str());
                    printf("%-*s", 22, iter.description.c_str());
                    printf("%-*s", 15, iter.type.c_str());
                    printf("%-*s", 11, iter.maxGrade.c_str());
                    printf("%-*s", 8, iter.grade.c_str());
                };
            };

            // Break loop.
            cout << "\n";
            check = true;
        };
        
    }
    // Loop condition.
    while(check != true);

};

