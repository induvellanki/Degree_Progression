#include "CheckReq.h"
#include <vector>
#include <iostream>

using namespace std;

void CheckReq::check_math_science (CourseList& taken, ReqMSList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Math and Science Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Math and Science Requirement." << endl;
    }
}
void CheckReq::check_eng (CourseList& taken, ReqEngList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Basic Engineering Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Basic Engineering Requirement." << endl;
    }
}
void CheckReq::check_specialization (CourseList& taken, ReqSpecList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Computer Science Specialization Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Computer Science Specialization Requirement." << endl;
    }
}
void CheckReq::check_composition (CourseList& taken, ReqCompList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Composition and Tehcnical Writing Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Composition and Technical Writing Requirement." << endl;
    }
}
void CheckReq::check_software (CourseList& taken, ReqSoftList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Software Elective Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Software Elective Requirement." << endl;
    }
}
void CheckReq::check_theory (CourseList& taken, ReqTheoryList& required) {
    int taken_size = taken.get_total_courses();
    int requried_size = required.get_size();
    
    int meet_requirement = 0;
    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < requried_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Theory Elective Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Theory Elective Requirement." << endl;
    }
}
void CheckReq::check_elective (CourseList& taken, ReqElecList& required) {
    int taken_size = taken.get_total_courses();
    int required_size = required.get_size();

    int meet_requirement = 0;

    for (int i = 0; i < taken_size; i++) {
        for (int j = 0; j < required_size; j++) {
            if (taken[i].get_course_id() == required[j].get_course_id()) {
                meet_requirement += taken[i].get_credits();
            }
        }
    }
    if (meet_requirement == required[0].get_required_credits() || meet_requirement > required[0].get_required_credits()) {
        cout << "Your Computer Science Elective Requirement is met!" << endl;
    }
    else {
        cout << "You need " << required[0].get_required_credits() - meet_requirement 
            << " credits to meet the Computer Science Elective Requirement." << endl;
    }
}