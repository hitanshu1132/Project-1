// *****10 student******
#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    string course;
    int year;
    float attendance;
    float marks;
    string contact;
};

// Function to display student details
void showStudent(const Student &s) {
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << "\n";
    cout << "Roll No: " << s.rollNo << "\n";
    cout << "Course: " << s.course << "\n";
    cout << "Year: " << s.year << "\n";
    cout << "Attendance: " << s.attendance << "%\n";
    cout << "Marks: " << s.marks << "\n";
    cout << "Contact: " << s.contact << "\n";
    cout << "-------------------------\n";
    
}

int main() {
    // Database of 10 students
    vector<Student> students = {
        {566, "Hitanshu", "B.Tech RAI", 2, 85.5, 78.0, "hitanshusingla@gmail.com"},
        {559, "Garima", "B.Tech RAI", 2, 92.0, 88.5, "garimapujara7a@gmail.com"},
        {547, "Akshay", "B.Tech RAI", 3, 75.0, 69.0, "akshay@gmail.com"},
        {570, "Jatin", "B.Tech RAI", 2, 80.0, 82.0, "jatin@gmail.com"},
        {569, "Jasmine", "B.Tech RAI", 1, 70.5, 65.0, "Jasmine@gmail.com"},
        {568, "Jaismeen", "BBA", 2, 95.0, 90.0, "jaismeen@gmail.com"},
        {591, "kanu", "B.Tech RAI", 3, 88.0, 84.5, "kanu@gmail.com"},
        {540, "Hasil", "B.Tech RAI", 2, 86.0, 79.0, "hasil@gmail.com"},
        {541, "Garu", "B.Tech RAI", 1, 82.5, 75.5, "garu@gmail.com"},
        {542, "Anshu", "B.Tech RAI", 2, 91.0, 89.0, "anshu@gmail.com"}
    };

    cout << " Welcome to Teacher's Student Finder Chatbox \n";
    cout << "Chandigarh Engineering College\n";
   
    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Search Student by Roll No\n";
        cout << "2. Search Student by Name\n";
        cout << "3. Show All Students in a Class\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            int r;
            cout << "Enter Roll Number: ";
            cin >> r;
            bool found = false;
            for (auto &s : students) {
                if (s.rollNo == r) {
                    showStudent(s);
                    found = true;
                    break;
                }
            }
            if (!found) cout << " Student not found!\n";
        }
        else if (choice == 2) {
            string n;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, n);
            bool found = false;
            for (auto &s : students) {
                if (s.name == n) {
                    showStudent(s);
                    found = true;
                }
            }
            if (!found) cout << " Student not found!\n";
        }
        else if (choice == 3) {
            string c;
            int y;
            cout << "Enter Course (e.g., B.Tech CSE): ";
            cin.ignore();
            getline(cin, c);
            cout << "Enter Year: ";
            cin >> y;

            bool found = false;
            cout << "\n Students in " << c << " Year " << y << ":\n";
            for (auto &s : students) {
                if (s.course == c && s.year == y) {
                    showStudent(s);
                    found = true;
                }
            }
            if (!found) cout << " No students found in this class!\n";
        }
        else if (choice == 4) {
            cout << "Exiting Teacher . Goodbye!\n";
            break;
        }
        else {
            cout << "The best student in the class!\n";
        }
    }

    return 0;
}