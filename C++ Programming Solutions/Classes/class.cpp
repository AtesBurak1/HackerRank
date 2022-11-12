#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        int get_age()const{return age; }
        int get_standard()const{ return standard; }
        string get_first_name()const{return first_name; }
        string get_last_name() const{ return last_name; }
        
        void set_age(int age){this->age=age; }
        void set_first_name(string first_name)
        {this->first_name=first_name; }
        void set_standard(int standard){this->standard=standard;}
        void set_last_name(string last_name){
            this->last_name=last_name;
        }
        string to_string1(){
            string abc = to_string(age) + "," + first_name + "," +last_name + "," + to_string(standard);
            return abc;
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
    cout << st.to_string1();
    
    return 0;
}
