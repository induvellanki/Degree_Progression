#include "GPA.h"
#include <iostream>

using namespace std;

GPA::GPA() {

}
// Calculate and return GPA
double GPA::get_gpa() {
    // credits_attempted = sum of # of credits student has taken
    int credits_attempted = 0;
    // points_earned = course credit * int value of letter grade
    double points_earned = 0.0;
    
    // Build a course list
    CourseList course_list;
    course_list = CourseIO::get_list();
    int size = course_list.get_total_courses();

    // Calculate points_earned
    // Ex: COP 3331, 3, A --> points_earned = 3 * 4.0
    for (int i = 0; i < size; i++) {
        if (course_list[i].get_grade() == "A+") {
            points_earned += (course_list[i].get_credits() * 4.0);
        }
        else if (course_list[i].get_grade() == "A") {
            points_earned += (course_list[i].get_credits() * 4.0);
        }
        else if (course_list[i].get_grade() == "A-") {
            points_earned += (course_list[i].get_credits() * 3.7);
        }
        else if (course_list[i].get_grade() == "B+") {
            points_earned += (course_list[i].get_credits() * 3.3);
        }
        else if (course_list[i].get_grade() == "B") {
            points_earned += (course_list[i].get_credits() * 3.0);
        }
        else if (course_list[i].get_grade() == "B-") {
            points_earned += (course_list[i].get_credits() * 2.7);
        }
        else if (course_list[i].get_grade() == "C+") {
            points_earned += (course_list[i].get_credits() * 2.3);
        }
        else if (course_list[i].get_grade() == "C") {
            points_earned += (course_list[i].get_credits() * 2.0);
        }
        else if (course_list[i].get_grade() == "C-") {
            points_earned += (course_list[i].get_credits() * 1.7);
        }
        else if (course_list[i].get_grade() == "D+") {
            points_earned += (course_list[i].get_credits() * 1.3);
        }
        else if (course_list[i].get_grade() == "D") {
            points_earned += (course_list[i].get_credits() * 1.0);
        }
        else if (course_list[i].get_grade() == "F") {
            points_earned += (course_list[i].get_credits() * 0);
        }
        // Sum of all credits from all courses
        credits_attempted += course_list[i].get_credits();
    }
    // GPA is points_earned / credits_attempted
    gpa = points_earned / credits_attempted;
    return gpa;
}
// Check if student is on track to graduate with honors
// If so --> call get_honors() to print which level
void GPA::get_is_honors() {
    // Graduating with honors if GPA is >= 3.50
    if (get_gpa() >= 3.50) {
        cout << "You are on track to graduate with honors" << endl;
        cout << get_honors() << endl;
    }
}
// 3 honors levels, return level depending on range of GPA
// ONLY called if GPA is >= 3.50
string GPA::get_honors() {
    cout << "You are on track to graduate with ";
    if (get_gpa() >= 3.50 && get_gpa() <= 3.69) {
        return "Cum Laude";
    }
    else if (get_gpa() >= 3.70 && get_gpa() <= 3.89) {
        return "Magna Cum Laude";
    }
    else if (get_gpa() >= 3.90 && get_gpa() <= 4.00) {
        return "Summa Cum Laude";
    }
    return NULL;
}
// Return year of student
// Reference to CourseList passed as parameter --> total # of credits taken calculated
// # of credits taken used to determine year
string GPA::get_year (CourseList& list) {
    int size = list.get_total_courses();
    int total_credits = 0;
    
    // Calculate # of total credits taken
    for (int i = 0; i < size; i++) {
        total_credits += list[i].get_credits();
    }

    // 0 - 30 --> freshman ; 31 - 60 --> sophomore ; 60 - 90 --> junior ; 91 - .. --> senior
    if (total_credits <= 30) {
        return "Freshmen";
    }
    else if (total_credits > 30 && total_credits <= 60) {
        return "Sophomore";
    }
    else if (total_credits > 60 && total_credits <= 90) {
        return "Junior";
    }
    else if (total_credits > 90) {
        return "Senior";
    }
    return NULL;
}