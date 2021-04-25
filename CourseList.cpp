#include "CourseList.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

CourseList::CourseList() {
    
}
vector<Course> CourseList::get_courses() {
    return courses;
}
int CourseList::get_total_courses() {
    return courses.size();
}
// Reference to Course passed as parameter --> object added to vector
void CourseList::operator+= (Course& course) {
    courses.push_back(course);
}
// Reference to Course passed as parameter --> check to see if object matches an element in vector --> erase that element from vector
void CourseList::operator-= (Course& course) {
    int size = get_total_courses();
    for (int i = 0; i < size; i++) {
        if (courses[i].get_course_id() == course.get_course_id()) {
            cout << endl << "Deleting " << courses[i].get_full_name() << endl << endl;
            courses.erase(courses.begin()+i);
        }
    }
    // If course was deleted, message printed, else an error message printed
    int new_size = get_total_courses();
    if (new_size == (size - 1)) {
        cout << "Course successfully deleted!" << endl;
    }
    else {
        cout << "Course was not able to be deleted" << endl;
    }
}
// Index of courses element needed passed as paramter --> return that element of vector
Course& CourseList::operator[] (int s_num) {
    return courses[s_num];
}