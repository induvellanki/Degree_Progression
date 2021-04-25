#include "Course.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Course::Course() {

}
Course::Course(string course_id_param, string full_name_param, 
    int credits_param, string grade_param) {
        course_id = course_id_param;
        full_name = full_name_param;
        credits = credits_param;
        grade = grade_param;
    }

void Course::set_course_id(std::string course_id_param) {
    course_id = course_id_param;
}
void Course::set_full_name(std::string full_name_param) {
    full_name = full_name_param;
}
void Course::set_credits(int credits_param) {
    credits = credits_param;
}
void Course::set_grade(std::string grade_param) {
    grade = grade_param;
}

std::string Course::get_course_id() {
    return course_id;
}
std::string Course::get_full_name() {
    return full_name;
}
int Course::get_credits() {
    return credits;
}
std::string Course::get_grade() {
    return grade;
}
// Reference to a Course object passed as parameter --> details of course printed to console
void print_course(Course& course) {
    cout << left << setw(16) << course.get_course_id() << left << setw(40) << course.get_full_name() 
        << left << setw(10) << course.get_credits() << left << setw(18) << course.get_grade() << endl;
}
// Virtual function, overridden by child classes
int Course::get_required_credits() {
    return 120;
}
