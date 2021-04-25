#ifndef REQENG_H
#define REQENG_H
#include "Course.h"
#include <string>

// Store details about Basic Engineering Requirement
// 8 credits needed
class ReqEng : public Course {

private:
    const int credits_required = 8;
    std::string course_id, full_name;
    int credits;
public:
    ReqEng(std::string course_id_param, std::string full_name_param, 
        int credits_param);
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    int get_required_credits();
};
#endif