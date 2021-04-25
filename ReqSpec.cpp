#include "ReqSpec.h"
#include <string>

using namespace std;

ReqSpec::ReqSpec(string course_id_param, string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqSpec::get_course_id() {
    return course_id;
}
string ReqSpec::get_full_name() {
    return full_name;
}
int ReqSpec::get_credits() {
    return credits;
}
// Get # of required credits (37)
int ReqSpec::get_required_credits() {
    return credits_required;
}