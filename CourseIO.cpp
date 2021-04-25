#include "CourseIO.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

// Read file and add courses to vector --> return CourseList object (vector)
CourseList CourseIO::get_list() {
    CourseList list;
    ifstream input_file;
    input_file.open("course_inventory.txt");

    string short_name, long_name, letter_grade;
    int course_credits;
    string temp, temp_credits;

    // Get course details from each line
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, '\t');
        getline(ss, long_name, '\t');
        getline(ss, temp_credits, '\t');
        getline(ss, letter_grade);
        course_credits = stoi(temp_credits);

        // Create a Course object with retrieved course details --> add to CourseList object
        Course new_course(short_name, long_name, course_credits, letter_grade);
        list+=new_course;
    }
    input_file.close();
    return list;
}
// Add a course to file --> append new courses entered by user to file
// Uodated course list passed as parameter
void CourseIO::append_list(CourseList& list) {
    ofstream output_file;
    output_file.open("course_inventory.txt", ios::app);
    int size = list.get_total_courses();

    // Courses appended to file
    for (int i = 0; i < size; i++) {
        output_file << list[i].get_course_id() << '\t' << list[i].get_full_name() << '\t'
            << list[i].get_credits() << '\t' << list[i].get_grade() << endl;
    }
    output_file.close();
}
// Remove a course from file --> write updated vector to file
// Updated course list passed as parameter
void CourseIO::write_list(CourseList& list) {
    ofstream output_file;
    output_file.open("course_inventory.txt", ios::out);
    int size = list.get_total_courses();

    // Courses written to file
    for (int i = 0; i < size; i++) {
        output_file << list[i].get_course_id() << '\t' << list[i].get_full_name() << '\t'
            << list[i].get_credits() << '\t' << list[i].get_grade() << endl;
    }
    output_file.close();
}