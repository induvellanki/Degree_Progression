#ifndef COURSES_H
#define COURSES_H
#include "Course.h"
#include <vector>

// Create and handle a vector of Course objects
class CourseList {

private:
    std::vector<Course>courses;
public:
    // Constructor
    CourseList();

    // Getters
    std::vector<Course> get_courses();
    int get_total_courses();

    // Operator functions to add course, remove course, veiw course
    void operator+= (Course& course);
    void operator-= (Course& course);
    Course& operator[] (int s_num);
};

#endif