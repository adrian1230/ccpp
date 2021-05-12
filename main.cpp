#include <iostream>
using std::string;
using namespace std;

class AbstractUser
{
    virtual void AskForUpgrade() = 0;
};

class User:AbstractUser {
    protected:
        string Location;

    private:
        string Name;
        int Age;

    public:
        // Behavior
        void setName(string name)
        {
            Name = name;
        }

        string getName()
        {
            return Name;
        }

        void setLocation(string location)
        {
            Location = location;
        }

        string getLocation()
        {
            return Location;
        }

        void setAge(int age)
        {
            if(age>=18)
            Age = age;
        }

        int getAge()
        {
            return Age;
        }

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

        void AskForUpgrade()
        {
            if(Age>=30)
                cout << Name << " Upgraded" << endl;
            else
                cout << "Failed for upgrade" << endl;
        }
};

class Admin: User {
    public:
        string Responsibility;
        Admin(string duty, string name, string location, int age):User(name,location,age)
        {
            Responsibility = duty;
        }
        void YourDuty()
        {
            cout << getName() << " " << Responsibility << " in " << Location << endl;
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

    User user_three = User("Darry","Austin",23);
    user_three.setAge(45);
    user_three.introduction();

    User user_4 = User("a","b",3);
    user_4.setLocation("Denmark");
    cout << user_4.getLocation() << endl;

    user_two.AskForUpgrade();

    Admin admin_0 = Admin("Follow Up","Brian","London",24);
    admin_0.YourDuty();
};