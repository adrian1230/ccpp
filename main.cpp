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

        void introduction()
        {
            cout << "My name is " << Name << endl;
            cout << "I live in " << Location << endl;
            cout << "I am " << Age << " years old" << endl;
        }
};

int main()
{
    User user_one;
    user_one.Age = 14;
    user_one.Name = "Bain Fard";
    user_one.Location = "Yorkshire";
    user_one.introduction();

    User user_two;
    user_two.Age = 34;
    user_two.Name = "George Smither";
    user_two.Location = "Manchester";
    user_two.introduction();

    // Default constructor
    User user_default;
    user_default.introduction();
};