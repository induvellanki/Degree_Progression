#include "ReqComp.h"
#include <string>

using namespace std;

ReqComp::ReqComp(string course_id_param, string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqComp::get_course_id() {
    return course_id;
}
string ReqComp::get_full_name() {
    return full_name;
}
int ReqComp::get_credits() {
    return credits;
}
// Get # of required credits (9)
int ReqComp::get_required_credits() {
    return credits_required;
}