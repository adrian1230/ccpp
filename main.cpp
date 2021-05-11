#include <iostream>
using std::string;
using namespace std;

class User {
    // protected:
    // private:
    public:
        string Name;
        string Location;
        int Age;

        // Behavior
        void introduction()
        {
            cout << "My name is " << Name << endl;
            cout << "I live in " << Location << endl;
            cout << "I am " << Age << " years old" << endl;
        } 
        
        // Constructor
        User(string name, string location, int age)
        {
            Name = name;
            Location = location;
            Age = age;
        }
};

int main()
{
    User user_one = User(
        "Bain Fard",
        "Yorkshire",
        14
    );
    // user_one.Name = "Bain Fard";
    // user_one.Location = "Yorkshire";
    // user_one.Age = 14;
    user_one.introduction();

    User user_two = User(
        "George Smither",
        "Manchester",
        34
    );
    user_two.introduction();

    // Default constructor
    // User user_default;
    // user_default.introduction();
};