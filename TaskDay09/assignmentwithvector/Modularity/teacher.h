#ifndef teacher_h
#define teacher_h
#include "course.h"

class Teacher{
    private:
    int id;
    string teacherName;
    vector<Course *> courseTech;
    // vector<Student *> studentAssign;
    public:
    Teacher();
    Teacher(int id, string teacherName);
    void acceptTeacher();
    void displayTeacher();
    vector<Course *> &giveCourse();
    int getid();
};

#endif