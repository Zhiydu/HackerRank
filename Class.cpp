#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private:
        int student_age;
        string student_first_name;
        string student_last_name; 
        int student_standard;
    public:
        void set_age(int a) {
            student_age = a;
        }
        void set_first_name(string b) {
            student_first_name = b;
        }
        void set_last_name(string c) {
            student_last_name = c;
        }
        void set_standard(int d) {
            student_standard = d;
        }
        int get_age() {
            return student_age;
        }
        string get_first_name() {
            return student_first_name;
        }
        string get_last_name() {
            return student_last_name;
        }
        int get_standard() {
            return student_standard;
        }
        string to_string() {
            stringstream ss;
            ss << student_age << ',' << student_first_name << ',' << student_last_name << ',' << student_standard;
            return ss.str();
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
