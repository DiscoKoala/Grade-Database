#include<iostream>
#include<vector>
#include<string>

#include"Grades.hpp"

using namespace std;

GradeItem::GradeItem(){
    description = " "; 
    type = " "; 
    date = " "; 
    grade = " ";
    maxGrade = " ";
};

GradeItem::GradeItem(std::string _date, std::string _description, std::string _type, std::string _maxGrade, std::string _grade){
    date = _date; 
    description = _description; 
    type = _type; 
    maxGrade = _maxGrade;
    grade = _grade;
};

GradeItem::GradeItem(const GradeItem &obj){
    description = obj.description; 
    type = obj.type; 
    date = obj.date; 
    grade = obj.grade;
    maxGrade = obj.maxGrade;
};

GradeItem::~GradeItem(){};

// Setters
void GradeItem::setDescription(string _description){
    description = _description;
};

void GradeItem::setType(string _type){
    type = _type;
};

void GradeItem::setDate(string _date){
    date = _date;
};

void GradeItem::setGrade(int _grade){
    grade = to_string(_grade);
};

void GradeItem::setMaxGrade(int _MaxGrade){
    maxGrade = to_string(_MaxGrade);
};

// Getters
string GradeItem::getDescription(){
    return description;
};

string GradeItem::getType(){
    return type;
};

string GradeItem::getDate(){
    return date;
};

string GradeItem::getGrade(){
    return grade;
};

string GradeItem::getMaxGrade(){
    return maxGrade;
};

char GradeItem::letterGrade(float percentage){
   
   if(percentage >= 90){
       return 'A';
   }else if(percentage >= 80 && percentage < 90){
       return 'B';
   }else if(percentage >= 70 && percentage < 80){
       return 'C';
   }else if(percentage >= 60 && percentage < 70){
       return 'D';
   }else{
       return 'F';
   };
};

