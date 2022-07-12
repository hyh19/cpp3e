#include <iostream>
#include "CourseWithCustomCopyConstructor.h"
using namespace std;

int main()
{
  Course course1("C++ Programming", 10);
  Course course2(course1);

  course1.addStudent("Peter Pan"); // Add a student to course1
  course2.addStudent("Lisa Ma"); // Add a student to course2

  cout << "students in course1: " <<
    course1.getStudents()[0] << endl;
  cout << "students in course2: " <<
    course2.getStudents()[0] << endl;

  return 0;
}

