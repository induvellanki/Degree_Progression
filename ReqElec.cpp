#include "ReqElec.h"
#include <string>

using namespace std;

ReqElec::ReqElec(std::string course_id_param, std::string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqElec::get_course_id() {
    return course_id;
}
string ReqElec::get_full_name() {
    return full_name;
}
int ReqElec::get_credits() {
    return credits;
}
// Get # of required credits (15)
int ReqElec::get_required_credits() {
    return credits_required;
}