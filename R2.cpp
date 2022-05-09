/****************************************************
 * For adding new items to object vector. 
 * User is prompted to enter item details,
 * then item is pushed to the back of object vector.
 *
 * Author: your name
 * Version: Due date
 ****************************************************/

#include<iostream>
// #include<vector>
// #include<string>
#include<cctype>

#include "Grades.hpp"

using namespace std;

void GradeItem::addNewItem(std::vector<GradeItem> &grades){

    // Instantiating new object.
    GradeItem newItem;
    bool check = false;
    char yayNay;

    do{
        // Prompt user to enter item object details.
        std::cout << "Enter item description: ";
        getline(cin, newItem.description);
        std::cout << "\n";
        std::cout << "Item type: ";
        std::cin >> newItem.type;
        std::cout << "\n";
        std::cout << "Item date: ";
        std::cin >> newItem.date;
        std::cout << "\n";
        std::cout << "Item grade: ";
        std::cin >> newItem.grade;
        std::cout << "\n";
        std::cout << "Maximum grade possible: ";
        std::cin >> newItem.maxGrade;
        std::cout << "\n";

        // Push object to back of vector.
        grades.push_back(newItem);

        // Give user option to add another item.
        cout << "Would you like to add another Item? (Y/N)" << endl;
        cout << " -> ";
        cin >> yayNay;
        cout << "\n";
        yayNay = toupper(yayNay);

        // If not, exit loop.
        if(yayNay == 'N'){
            check = true;
        }else{
            check = false;
        };

    }while(check !=true);
};