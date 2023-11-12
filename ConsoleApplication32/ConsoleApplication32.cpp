#include <iostream>
#include <string>
using namespace std;

class Date {
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1900) {}

    void SetDay(int day) {
        this->day = day;
    }

    int GetDay() const {
        return day;
    }

    void SetMonth(int month) {
        this->month = month;
    }

    int GetMonth() const {
        return month;
    }

    void SetYear(int year) {
        this->year = year;
    }

    int GetYear() const {
        return year;
    }
};

class Student {
    string last_name;
    string first_name;
    string middle_name;
    Date birth_date;
    string home_address;
    string phone_number;
    int* grades_math;
    int* grades_physical_education;
    int* grades_chemistry;

public:
    Student(string first, string last, int max) : first_name(first), last_name(last) {
        grades_math = new int[max] {};
        grades_physical_education = new int[max] {};
        grades_chemistry = new int[max] {};
    }

    void SetBirthDate(const Date& date) {
        birth_date = date;
    }

    Date GetBirthDate() const {
        return birth_date;
    }

    void SetHomeAdress(const string& address) {
        home_address = address;
    }

    string GetHomeAdress() const {
        return home_address;
    }

    void SetPhoneNumber(const string& phone) {
        phone_number = phone;
    }

    string GetPhoneNumber() const {
        return phone_number;
    }

    void SetLastName(const string& last) {
        last_name = last;
    }

    string GetLastName() const {
        return last_name;
    }

    void AddMathGrade(int grade) {
        
    }

    int GetMathGrade(int subject_index) const {
        return grades_math[subject_index];
    }

    void AddPhysicalEducationGrade(int grade) {
        
    }

    int AddPhysicalEducationGrade(int subject_index) const {
        return grades_physical_education[subject_index];
    }

    void AddChemistryGrade(int grade) {
        
    }

    int GetChemistryGrade(int subject_index) const {
        return grades_chemistry[subject_index];
    }

    void ShowStudentInfo() const {
        cout << "Фамилия: " << last_name << "\n";
        cout << "Имя: " << first_name << "\n";
        cout << "Отчество: " << middle_name << "\n";

        cout << "Оценки по математике: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_math[i] << " ";
        }
        cout << "\n";

        cout << "Оценки по физкультуре: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_physical_education[i] << " ";
        }
        cout << "\n";

        cout << "Оценки по химии: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_chemistry[i] << " ";
        }
        cout << "\n";
    }

    ~Student() {
        delete[] grades_math;
        delete[] grades_physical_education;
        delete[] grades_chemistry;
    }
};

int main() {
    setlocale(LC_ALL, "");

    Student student("Антон", "Васильев");

    student.SetBirthDate(Date(2000, 1, 1));
    student.SetHomeAdress("ул. Добровольского, 123");
    student.SetPhoneNumber("+38(097)264-18-54");

    student.AddMathGrade(0, 95);
    student.AddMathGrade(1, 88);

    student.AddPhysicalEducationGrade(0, 85);
    student.AddPhysicalEducationGrade(1, 90);

    student.AddChemistryGrade(0, 75);
    student.AddChemistryGrade(1, 80);

    student.ShowStudentInfo();

    student.SetLastName("Петров");
    student.SetPhoneNumber("+38(097)234-13-24");

    cout << "Измененная фамилия: " << student.GetLastName() << endl;
    cout << "Измененный телефонный номер: " << student.GetPhoneNumber() << endl;

    return 0;
}
