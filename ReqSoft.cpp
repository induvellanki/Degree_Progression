#include "ReqSoft.h"
#include <string>

using namespace std;

ReqSoft::ReqSoft(string course_id_param, string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqSoft::get_course_id() {
    return course_id;
}
string ReqSoft::get_full_name() {
    return full_name;
}
int ReqSoft::get_credits() {
    return credits;
}
// Get # of required credits (6)
int ReqSoft::get_required_credits() {
    return credits_required;
}