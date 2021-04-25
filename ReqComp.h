#ifndef REQCOMP_H
#define REQCOMP_H
#include "Course.h"
#include <string>

// Store  details about Composition and Technical Writing requirement
// 9 credits needed
class ReqComp : public Course {

private:
    const int credits_required = 9;
    std::string course_id, full_name;
    int credits;
public:
    ReqComp(std::string course_id_param, std::string full_name_param, 
        int credits_param);
    std::string get_course_id();
    std::string get_full_name();
    int get_credits();
    int get_required_credits();
};
#endif