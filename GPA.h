#ifndef GPA_H
#define GPA_H
#include "CourseIO.h"
#include <string>

// Calculate GPA, determine honors status, determine year
class GPA {

private:
    double gpa = 0;
public:
    GPA();
    double get_gpa();
    void get_is_honors();
    std::string get_honors();
    std::string get_year (CourseList& list);
};
#endif