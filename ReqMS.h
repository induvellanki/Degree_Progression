#ifndef REQMS_H
#define REQMS_H
#include "Course.h"
#include <string>

// Store details about Math and Science Requirement
// 20 credits needed
class ReqMS : public Course {

private:
    const int credits_required = 20;
    std::string course_id, full_name;
    int credits;
public:
    ReqMS(std::string course_id_param, std::string full_name_param, 
        int credits_param);
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    int get_required_credits();
};
#endif