#include <iostream>
#include <string>
using namespace std;
struct Student {
  string name;
  int id;
  int grade;
};
int currentCount = 1;
int highestGrade = 0;
int lowestGrade = 101;
int totalGrade = 0;
int main() {
  Student records[100];
  bool exit=true;
  while(exit) {
    cout << "* CSCI 1010 Student Information Management System***\n";
    cout << "1. Add Student\n";
    cout << "2. Search By ID\n";
    cout << "3. Grades Statistics\n";
    cout << "4. Remove a student\n";
    cout << "5. Print all students\n";
    cout << "6. Exit the system\n";

    int choice;
    cin >> choice;
    if (choice == 1) {
      if (currentCount == 100) {
        cout << "Cannot Add more Students\n";
        continue;
      }
      cout << "The ID for the new student is: ";
      int id;
      cin >> id;
      cout << "Please enter the name of the student (Lastname,FirstName): ";
      string name;
      cin >> name;
      cout << "Please enter the grade of the student: ";
      int grade;
      cin >> grade;
      bool temp = false;
      string firstName = "", lastName = "";
      for (int i=0;i<name.size();i++) {
        char ch = name[i];
        if (ch == ',') {
          temp = true;
          continue;
        }
        if (temp) {
          firstName.push_back(ch);
        } else {
          lastName.push_back(ch);
        }
      }
      Student s1 ;
      s1.id = id;
      s1.name = firstName+","+lastName;
      s1.grade = grade;
      records[currentCount++] = s1;
      if (grade > highestGrade) {
        highestGrade = grade;
      }
      if (grade < lowestGrade) {
        lowestGrade = grade;
      }
      totalGrade+=grade;
    } else if (choice == 2) {
      cout << "Please enter the ID: ";
      int id ;
      cin >> id;
      bool found = false;
      for (int i=1;i<currentCount;i++) {
        if (records[i].id == id) {
          found = true;
          cout << "Student ID: " << records[i].id << "\n";
          cout << "Student Name: " << records[i].name << "\n";
          cout << "Student grade: " << records[i].grade << "\n";
        }
      }
      if (found == false) {
        cout << "Student Record with " << id << " not found. ID is invalid\n";
      }
    } else if (choice == 3) {
      cout << "The highest grade is " << highestGrade << "\n";
      cout << "The lowest grade is " << lowestGrade << "\n";
      cout << "The average grade is " << totalGrade/(currentCount-1) << "\n";
    } else if (choice == 4) {
      cout << "Enter the ID of the student: ";
      int id,i;
      cin >> id;
      bool found = false;
      for (i=1;i<currentCount;i++) {
        if (records[i].id == id) {
          found = true;
          cout << "Student " << records[i].name << " has been removed from the database\n";
          break;
        }
      }
      if (found == true) {
        for (int j=i;j<currentCount;j++) {
          records[j] = records[j+1];
        }
      } else {
        cout << "Student Record with " << id << " not found.\n";
      }
    }
    else if (choice == 5) {
      cout << "ID       Name                Grade\n";
      for (int i=1;i<currentCount;i++) {
        cout << records[i].id << "        " << records[i].name << "          " << records[i].grade << "\n";
      }
    }
    else if (choice == 6) {
      exit=false;
    }
  }
}