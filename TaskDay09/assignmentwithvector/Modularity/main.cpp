#include "student.h"

void displayAllTeacher(vector<Teacher *> &teacher){
    for (int i = 0; i < teacher.size(); i++){
        teacher[i]->displayTeacher();
    }
}

void displayAllStudent(vector<Student *> &student){
    for (int i = 0; i < student.size(); i++){
        student[i]->displayStudent();
    }
}

void displayAllCourses(vector<Course *> &course){
    for (int i = 0; i < course.size(); i++){
        course[i]->displayCourse();
    }
}

enum EMenu
{
    EXIT,
    ADD_Student,
    ADD_Teacher,
    ADD_Course,
    Display_All_Teachers,
    Display_All_Students,
    Display_All_Courses,
    Purchase_course,
    Assign_Teacher,
    Course_Add_for_teacher,
    Display_All_Teachers_for_specific_student,
    Display_All_Course_for_a_specific_teacher,
    Display_All_Course_for_a_specific_studen
};

EMenu menu(){
    int choice;
    cout << "********************************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Add Teacher" << endl;
    cout << "3. Add Course" << endl;
    cout << "4. Display All Teachers" << endl;
    cout << "5. Display All Students" << endl;
    cout << "6. Display All Courses" << endl;
    cout << "7. Purchase a course" << endl;
    cout << "8. Assign Teacher" << endl;
    cout << "9. Course Add for teacher" << endl;
    cout << "10. Display All Teachers for a specific student" << endl;
    cout << "11. Display All Course for a specific teacher" << endl;
    cout << "12. Display All Course for a specific student" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    cout << "********************************************" << endl;

    return EMenu(choice);
}

void addDummyCourses(vector<Course *> &coursesOffered){
    coursesOffered.push_back(new Course(1, "CPP", 5000));
    coursesOffered.push_back(new Course(2, "JAVA", 7000));
    coursesOffered.push_back(new Course(3, "PYTHON", 7000));
    coursesOffered.push_back(new Course(4, "DSA", 6000));
}

void addDummyStudents(vector<Student *> &studentList){
    studentList.push_back(new Student(1, "Anil"));
    studentList.push_back(new Student(2, "Mukesh"));
    studentList.push_back(new Student(3, "Ramesh"));
    studentList.push_back(new Student(4, "Suresh"));
    studentList.push_back(new Student(5, "Ram"));
    studentList.push_back(new Student(6, "Sham"));
}

void addDummyTeachers(vector<Teacher *> &teacherList){
    teacherList.push_back(new Teacher(1, "AnilTeacher"));
    teacherList.push_back(new Teacher(2, "MukeshTeacher"));
    teacherList.push_back(new Teacher(3, "RameshTeacher"));
    teacherList.push_back(new Teacher(4, "SureshTeacher"));
    teacherList.push_back(new Teacher(5, "RamTeacher"));
    teacherList.push_back(new Teacher(6, "ShamTeacher"));
}

void purchaseCourse(vector<Student *> &studentDB, vector<Course *> &courseDB){
    int rollno;
    cout << "Enter the rollno of student for which you want to purchase the course: ";
    cin >> rollno;
    Student *ptr = NULL;
    for(int i = 0; i < studentDB.size(); i++){
        if(rollno == studentDB[i]->getRollNo()){
            // add the course to student course vector
            ptr = studentDB[i];
            break;
        }
    }
    if(ptr != NULL){
        displayAllCourses(courseDB);
        int cid;
        cout << "Enter the course id: ";
        cin >> cid;
        for(int i = 0; i < courseDB.size(); i++){
            if(cid == courseDB[i]->getCid()){
                ptr->giveCourse().push_back(courseDB[i]);
                break;
            }

        }
    }else{
        cout << "Student not found." << endl;
    }
}

void addCourse(vector<Teacher *> &teacherDB, vector<Course *> &courseDB){
    int id;
    cout << "Enter the id of teacher for which you want to add the course: ";
    cin >> id;
    Teacher *ptr = NULL;
    for(int i = 0; i < teacherDB.size(); i++){
        if(id == teacherDB[i]->getid()){
            // add the course to student course vector
            ptr = teacherDB[i];
            break;
        }
    }
    if(ptr != NULL){
        displayAllCourses(courseDB);
        int cid;
        cout << "Enter the course id: ";
        cin >> cid;
        for(int i = 0; i < courseDB.size(); i++){
            if(cid == courseDB[i]->getCid()){
                ptr->giveCourse().push_back(courseDB[i]);
                break;
            }

        }
    }else{
        cout << "Student not found." << endl;
    }
}

void assignTeacher(vector<Student *> &studentDB, vector<Teacher *> &teacherDB){
    int rollno;
    cout << "Enter the rollno of student for which you want to assign the teacher: ";
    cin >> rollno;
    Student *ptr = NULL;
    for(int i = 0; i < studentDB.size(); i++){
        if(rollno == studentDB[i]->getRollNo()){
            // add the course to student course vector
            ptr = studentDB[i];
            break;
        }
    }
    if(ptr != NULL){
        displayAllTeacher(teacherDB);
        int id;
        cout << "Enter the teacher id: ";
        cin >> id;
        for(int i = 0; i < teacherDB.size(); i++){
            if(id == teacherDB[i]->getid()){
                ptr->giveMentors().push_back(teacherDB[i]);
                break;
            }
        }
    }else{
        cout << "Student not found. " << endl;
    }
}

void displayAllForStudentTeacher(vector<Student *> &studentDB, vector<Teacher *> &teacherDB){
    int rollno;
    cout << "Enter the rollno of student for which you want to assign the teacher: ";
    cin >> rollno;
    Student *ptr = NULL;
    for(int i = 0; i < studentDB.size(); i++){
        if(rollno == studentDB[i]->getRollNo()){
            // add the course to student course vector
            ptr = studentDB[i];
            break;
        }
    }
    if(ptr != NULL){
        vector<Teacher *> aptr = ptr->giveMentors();
        displayAllTeacher(aptr);
    }else{
        cout << "Student not found. " << endl;
    }
}

void displayAllCourseForTeacher(vector<Course *> &courseDB, vector<Teacher *> &teacherDB){
    int id;
    cout << "Enter the rollno of student for which you want to assign the teacher: ";
    cin >> id;
    Teacher *ptr = NULL;
    for(int i = 0; i < teacherDB.size(); i++){
        if(id == teacherDB[i]->getid()){
            // add the course to student course vector
            ptr = teacherDB[i];
            break;
        }
    }
    if(ptr != NULL){
        vector<Course *> aptr = ptr->giveCourse();
        displayAllCourses(aptr);
    }else{
        cout << "Teacher not found. " << endl;
    }
}
void displayAllCourseForStudent(vector<Student *> &studentDB, vector<Course *> &courseDB){
    int rollno;
    cout << "Enter the rollno of student for which you want to see all courses: ";
    cin >> rollno;
    Student *ptr = NULL;
    for(int i = 0; i < studentDB.size(); i++){
        if(rollno == studentDB[i]->getRollNo()){
            // add the course to student course vector
            ptr = studentDB[i];
            break;
        }
    }
    if(ptr != NULL){
        vector<Course *> aptr = ptr->giveCourse();
        displayAllCourses(aptr);
    }else{
        cout << "Student not found. " << endl;
    }
}

int main(){
    vector<Student *> studentDB;
    vector<Teacher *> teacherDB;
    vector<Course *> courseDB;
    addDummyStudents(studentDB);
    addDummyCourses(courseDB);
    addDummyTeachers(teacherDB);

    EMenu choice;
    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case ADD_Student:
        {
            // Adding the student in the studentDB
            Student *sptr = new Student();
            sptr->acceptStudent();
            studentDB.push_back(sptr); 
        }
        break;
        case ADD_Teacher:
        {
            // Adding the teacher in the teacherDB
            Teacher *tptr = new Teacher();
            tptr->acceptTeacher();
            teacherDB.push_back(tptr);
        }
        break;
        case ADD_Course:
            {
                // Adding the course in the courseDB
                Course *cptr = new Course();
                cptr->acceptCourse();
                courseDB.push_back(cptr);
            }
            break;
        case Display_All_Teachers:
            displayAllTeacher(teacherDB);
            break;
        case Display_All_Students:
            displayAllStudent(studentDB);
            break;
        case Display_All_Courses:
            displayAllCourses(courseDB);
            break;
        case Purchase_course:
            // displayAllCourses(courseDB);
            purchaseCourse(studentDB, courseDB);
            break;
        case Assign_Teacher:
            // displayAllCourses(courseDB);
            assignTeacher(studentDB, teacherDB);
            break;
        case Course_Add_for_teacher:
            // displayAllCourses(courseDB);
            addCourse(teacherDB, courseDB);
            break;
        case Display_All_Teachers_for_specific_student:
            displayAllForStudentTeacher(studentDB, teacherDB);
            // displayAllCourses(courseDB);
            break;
        case Display_All_Course_for_a_specific_teacher:
            displayAllCourseForTeacher(courseDB, teacherDB);
            // displayAllCourses(courseDB);
            break;
        case Display_All_Course_for_a_specific_studen:
            displayAllCourseForStudent(studentDB, courseDB);
            // displayAllCourses(courseDB);
            break;
        default:
            cout << "Wrong choice..." << endl;
            break;
        }
    }

    
    return 0;
}