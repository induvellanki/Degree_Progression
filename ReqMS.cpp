#include "ReqMS.h"
#include <string>

using namespace std;

ReqMS::ReqMS(string course_id_param, string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqMS::get_course_id() {
    return course_id;
}
string ReqMS::get_full_name() {
    return full_name;
}
int ReqMS::get_credits() {
    return credits;
}
// Get # of required credits (20)
int ReqMS::get_required_credits() {
    return credits_required;
}