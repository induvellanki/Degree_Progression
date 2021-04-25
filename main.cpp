/*
*   Author: Indu Vellanki
*   Purpose: Check to see if student meets the 7 CS Requirements by building vectors of the requirements
*           and the student's courses and comparing them and searching for matches.
*           This program also calculates the student's gpa, determines if they are on track to graduate
*           with honors, and determine which year they are.
*           A Selection Menu is provided with functionalit to -->
                1. Add a course
                2. Remove a course
                3. View the course list
                4. Check CS progression (Check for matches)
                5. Calculate GPA, honors, and year
*/
#include <iostream>
#include <string>
#include <iomanip>

#include "Course.h"
#include "CourseList.h"
#include "CourseIO.h"

#include "ReqMSList.h"
#include "ReqEngList.h"
#include "ReqSpecList.h"
#include "ReqCompList.h"
#include "ReqSoftList.h"
#include "ReqTheoryList.h"
#include "ReqElecList.h"

#include "CheckReq.h"

#include "GPA.h"

using namespace std;

void add_course();
void remove_course();
void view_course();
void degree_progression();
void view_gpa();
void gpa_feedback(GPA& gpa);
void view_year(GPA& gpa);
void ignore_chars();

int main () {
    char again = 'y';
    while (again == 'y') {

        // Selection Menu
        cout << endl << "DEGREE PROGRESS" << endl << endl;
        cout << "Options" << endl;
        cout << "1. Add a course" << endl
            << "2. Remove a course" << endl
            << "3. View course list" << endl
            << "4. Check degree progression" << endl
            << "5. Calcuate GPA" << endl;
    
        // Get option from user
        int option;
        cout << endl << "Select an option from above: ";
        cin >> option;

        // Data Validation --> sensure election within given range
        while (option < 1 || option > 5) {
            cout << "Please enter a number between 1 - 5: ";
            cin >> option;
        }
        
        // If 1 selected --> call add_course()
        if (option == 1) {
            char add_another = 'y';
            while (add_another == 'y') {
                add_course();
                cout << endl << "Would you like to add another course? (y/n): ";
                cin >> add_another;
                ignore_chars();
            }
        }
        // If 2 selected --> call remove_course()
        else if (option == 2) {
            char remove_another = 'y';
            while (remove_another == 'y') {
                remove_course();
                view_course();
                cout << endl << "Would you like to remove another course? (y/n): ";
                cin >> remove_another;
                ignore_chars();
            }
        }
        // If 3 selected --> call view_course()
        else if (option == 3) {
            view_course();
        }
        // If 4 selected --> call degree_progression()
        else if (option == 4) {
            degree_progression();
        }
        // If 5 selected --> call view_gpa()
        else if (option == 5) {
            view_gpa();
        }

        cout << endl << "Select again? (y/n): ";
        cin >> again;
        ignore_chars();

        // Data VAlidation --> ensure 'y' or 'n' entered
        while (again != 'y' && again != 'n') {
            cout << "Please enter a valid response (y/n): ";
            cin >> again;
            ignore_chars();
        }
    }
    // Exit program
    cout << endl << "Bye!" << endl << endl;
    return 0;
}
// Add a course to the course inventory
void add_course() {
    string course_id, full_name, grade;
    int credits;

    // Get course details from user
    cout << endl << "Enter course details" << endl << endl;
    cout << "Abbreviated course name: ";
    cin.ignore();
    getline(cin, course_id);
    cout << "Full course name: ";
    getline(cin, full_name);
    cout << "Number of credits: ";
    cin >> credits;
    cout << "Grade received for course: ";
    cin.ignore();
    getline(cin, grade);

    // create a Course object --> store in vector --> append to inventory file
    Course course(course_id, full_name, credits, grade);
    CourseList course_list;
    course_list+=course;
    CourseIO::append_list(course_list);
}
// Remove a course from the course inventory
void remove_course() {
    // Get course details from user
    int selection;
    cout << "Enter the number of the course you want to remove: ";
    cin >> selection;

    // Build vector of courses from inventory file --> remove from vector --> write updated vector to file
    CourseList course_list;
    course_list = CourseIO::get_list();
    course_list-=course_list[selection-1];
    CourseIO::write_list(course_list);
}
// View course inventory
void view_course() {
    // Print columns for course details
    cout << endl << "COURSE LIST" << endl << endl;
    cout << left;
    cout << setw(19) << "Course" << setw(37) << "Course Name" << setw(11) 
        << "Credits" << setw(18) << "Grade" << endl << endl;

    // Build vector of courses from inventory file    
    CourseList course_list;
    course_list = CourseIO::get_list();
    
    // Print course inventory by calling print_course()
    int size = course_list.get_total_courses();
    for (int i = 0; i < size; i++) {
        Course course(course_list[i]);
        cout << i+1 << ". " << setw(3);
        print_course(course);
    }
}
// Check to see if courses meet CS Requirments
void degree_progression() {
    // Build course list
    CourseList course_list = CourseIO::get_list();

    // Create list of each requirement
    ReqMSList ms_list;
    ReqEngList eng_list;
    ReqSpecList spec_list;
    ReqCompList comp_list;
    ReqSoftList soft_list;
    ReqTheoryList theory_list;
    ReqElecList elec_list;

    // Create object to check requirement
    CheckReq check;

    cout << endl << "COMPUTER SCIENCE REQUIREMENTS" << endl;

    // Call respective CheckReq functions 
    cout << endl << "MATH & SCIENCE -- " << endl;
    check.check_math_science(course_list, ms_list);
    cout << endl << "BASIC ENGINEERING -- " << endl;
    check.check_eng(course_list, eng_list);
    cout << endl << "COMPUTER SCIENCE SPECIALIZATION -- " << endl;
    check.check_specialization(course_list, spec_list);
    cout << endl << "COMPOSITION & TECHNICAL WRITING-- " << endl;
    check.check_composition(course_list, comp_list);
    cout << endl << "SOFTWARE ELECTIVE -- " << endl;
    check.check_software(course_list, soft_list);
    cout << endl << "THEORY ELECTIVE -- " << endl;
    check.check_theory(course_list, theory_list);
    cout << endl << "COMPUTER SCIENCE ELECTIVE -- " << endl;
    check.check_elective(course_list, elec_list);
}
// Calculate GPA
void view_gpa() {
    GPA gpa;
    view_year(gpa);
    cout << endl << "Your current GPA = " << setprecision(3) << gpa.get_gpa() << endl << endl;
    gpa.get_is_honors();
    gpa_feedback(gpa);

}
// Print feedback depending on GPA
// Called from view_gpa()
void gpa_feedback(GPA& gpa) {
    if (gpa.get_gpa() >= 3.50) {
        cout << endl << "GREAT JOB! I'm sure your mama's proud!" << endl;
    }
    else if (gpa.get_gpa() >= 3.0 && gpa.get_gpa() < 3.50) {
        cout << "Keep it up!" << endl;
    }
    else if (gpa.get_gpa() < 3.0) {
        cout << "Hard work pays off in the end!" << endl;
    }
}
// Print year of student, call get_year(CourseList& course_list)
// Called from view_gpa()
void view_year(GPA& gpa) {
    cout << endl << "You are a ";
    CourseList course_list;
    cout << gpa.get_year(course_list) << endl;
}
// Data Validation --> ignore remaining chars after 1st char
void ignore_chars() {
    cin.clear();
    cin.ignore(100, '\n');
}