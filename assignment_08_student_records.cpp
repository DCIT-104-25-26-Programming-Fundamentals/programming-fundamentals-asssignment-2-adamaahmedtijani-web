
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int id;
    vector<double> scores;
};

void displayMenu() {
    cout << "=============================" << endl;
    cout << "STUDENT RECORD SYSTEM MENU" << endl;
    cout << "=============================" << endl;
    cout << "1. Add student" << endl;
    cout << "2. Display all students" << endl;
    cout << "3. Calculate average score" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
}

void addStudent(vector<Student>& students) {
    Student newStudent;
    
    cout << "Student name: ";
    cin.ignore();
    getline(cin, newStudent.name);
    
    cout << "Student ID: ";
    cin >> newStudent.id;
    
    int numScores;
    cout << "How many scores? ";
    cin >> numScores;
    
    for (int i = 0; i < numScores; i++) {
        double score;
        cout << "Enter score " << (i + 1) << ": ";
        cin >> score;
        newStudent.scores.push_back(score);
    }
    
    students.push_back(newStudent);
    cout << "Student \"" << newStudent.name << "\" added successfully." << endl;
}

void displayAllStudents(vector<Student>& students) {
    if (students.empty()) {
        cout << "No students have been added yet." << endl;
        return;
    }
    
    cout << "=============================" << endl;
    cout << "       ALL STUDENTS" << endl;
    cout << "=============================" << endl;
    
    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Scores: ";
        
        for (int j = 0; j < students[i].scores.size(); j++) {
            cout << students[i].scores[j];
            if (j < students[i].scores.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
        cout << "-----------------------------" << endl;
    }
}

void calculateAverage(vector<Student>& students) {
    if (students.empty()) {
        cout << "No students have been added yet." << endl;
        return;
    }
    
    int searchID;
    cout << "Enter student ID: ";
    cin >> searchID;
    
    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == searchID) {
            double sum = 0;
            for (int j = 0; j < students[i].scores.size(); j++) {
                sum += students[i].scores[j];
            }
            
            double average = sum / students[i].scores.size();
            
            cout << students[i].name << "'s average score: ";
            cout << fixed << setprecision(2) << average << endl;
            return;
        }
    }
    
    cout << "Error: Student ID not found." << endl;
}

int main() {
    vector<Student> students;
    int choice;
    
    while (true) {
        displayMenu();
        cin >> choice;
        
        if (choice == 1) {
            addStudent(students);
        } else if (choice == 2) {
            displayAllStudents(students);
        } else if (choice == 3) {
            calculateAverage(students);
        } else if (choice == 4) {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Error: Invalid choice. Please try again." << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}

