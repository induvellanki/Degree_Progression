#include "ReqEng.h"
#include <string>

using namespace std;

ReqEng::ReqEng(string course_id_param, string full_name_param, int credits_param) {
    course_id = course_id_param;
    full_name = full_name_param;
    credits = credits_param;
}
string ReqEng::get_course_id() {
    return course_id;
}
string ReqEng::get_full_name() {
    return full_name;
}
int ReqEng::get_credits() {
    return credits;
}
// Get # of required credits (8)
int ReqEng::get_required_credits() {
    return credits_required;
}