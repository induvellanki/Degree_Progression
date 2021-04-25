#ifndef COURSE_H
#define COURSE_H
#include <string>

// Store info about each individual course
class Course {

private:
    // Course details that are stored
    std::string course_id;
    std::string full_name;
    int credits;
    std::string grade;

public:
    // Constructors
    Course();
    Course(std::string course_id_param, std::string full_name_param, 
        int credits_param, std::string grade_param);
    
    // Setters
    void set_course_id(std::string course_id_param);
    void set_full_name(std::string full_name_param);
    void set_credits(int credits_param);
    void set_grade(std::string grade_param);

    // Getters
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    std::string get_grade();

    // Print course details to console
    friend void print_course(Course& course);
    // Overridden by child classes --> retrieve # of credits required to meet a given requirment
    virtual int get_required_credits();
};
#endif