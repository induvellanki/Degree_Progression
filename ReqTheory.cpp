#include "ReqTheory.h"
#include <string>

using namespace std;

ReqTheory::ReqTheory(string course_id_param, string full_name_param, 
        int credits_param) {
            course_id = course_id_param;
            full_name = full_name_param;
            credits = credits_param;
        }
string ReqTheory::get_course_id() {
    return course_id;
}
string ReqTheory::get_full_name() {
    return full_name;
}
int ReqTheory::get_credits() {
    return credits;
}
// Get # of required credits (3)
int ReqTheory::get_required_credits() {
    return credits_required;
}