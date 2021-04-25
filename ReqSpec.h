#ifndef REQSPEC_H
#define REQSPEC_H
#include "Course.h"
#include <string>

// Store details about CS Specialization Requirement
// 37 credits needed
class ReqSpec : public Course {

private:
    const int credits_required = 37;
    std::string course_id, full_name;
    int credits;
public:
    ReqSpec(std::string course_id_param, std::string full_name_param, 
        int credits_param);
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    int get_required_credits();
};
#endif