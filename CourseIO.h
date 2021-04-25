#ifndef COURSEIO_H
#define COURSEIO_H
#include "CourseList.h"
#include <fstream>

// Interact with course inventory file
class CourseIO {

public:
    static CourseList get_list();
    static void append_list(CourseList& list);
    static void write_list(CourseList& list);
};
#endif