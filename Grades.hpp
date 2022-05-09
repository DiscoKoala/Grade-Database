/********************************************
 * Header file containing Grade class
 * Constructors and functions are declared here
 *
 * Author: Wesley Johnson
 * Version: 03/09/2022
 *********************************************/

#ifndef GRADES
#define GRADES

#include<string>
#include<vector>

class GradeItem {

    // Private variables
    private:
        // Variables to hold file contents.
        std::string description, type, date, grade, maxGrade;

    public:
        // Constructors
        GradeItem();
        GradeItem(std::string _date, std::string _description, std::string _type, 
              std::string _maxGrade, std::string _grade);
        GradeItem(const GradeItem &obj);
        ~GradeItem();

        // Function declarations.
        void readCSV_R1(std::vector<GradeItem> &ls);

        void saveGradeItems_R6(std::vector<GradeItem> &ls);

        void displayGradeItems_R7(std::vector<GradeItem> &ls);

        void addNewItem(std::vector<GradeItem> &newItem);

        void searchItem(std::vector<GradeItem> &ls);

        void generateSummary(std::vector<GradeItem> &ls);

        char letterGrade(float percentage);

        bool is_valid();
        
        // Setters
        void setDescription(std::string _description);
        void setType(std::string _type);
        void setDate(std::string _date);
        void setGrade(int _grade);
        void setMaxGrade(int _MaxGrade);

        // Getters
        std::string getDescription();
        std::string getType();
        std::string getDate();
        std::string getGrade();
        std::string getMaxGrade();

};

#endif