#ifndef REQTHEORY_H
#define REQTHEORY_H
#include "Course.h"
#include <string>

// Store details about Theory Elective Requirement
// 3 credits needed
class ReqTheory : public Course {

private:
    const int credits_required = 3;
    std::string course_id, full_name;
    int credits;
public:
    ReqTheory(std::string course_id_param, std::string full_name_param, 
        int credits_param);
        std::string get_course_id();
        std::string get_full_name();
        int get_credits();
    int get_required_credits();
};
#endif