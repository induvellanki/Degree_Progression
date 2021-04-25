#ifndef REQELEC_H
#define REQELEC_H
#include "Course.h"
#include <string>

// Store details about CS Elective Requirement
// 15 credits needed
class ReqElec : public Course {

private:
    const int credits_required = 15;
    std::string course_id, full_name;
    int credits;
public:
    ReqElec(std::string course_id_param, std::string full_name_param, 
        int credits_param);
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    int get_required_credits();
};
#endif