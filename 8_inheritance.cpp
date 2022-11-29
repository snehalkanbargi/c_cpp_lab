#include <iostream>

using namespace std;

class Manager {
   public:
    string name;
    unsigned int age;
    unsigned int employeeID;
    string department;
};

class ProductionManager : public Manager {
   public:
    unsigned int numSupervisors;
};

class SalesManager : public Manager {
   public:
    unsigned int numSales;
    unsigned int numTeamSize;
};

int main() {
    // Normal Manager
    Manager normie;
    normie.age = 51;
    normie.department = "Free Space";
    normie.employeeID = 42;
    normie.name = "Elum Nosk";

    // A Production Manager Sample
    ProductionManager productionNormie;
    productionNormie.age = 47;
    productionNormie.department = "iPhunes";
    productionNormie.employeeID = 55;
    productionNormie.name = "Catalina Julie";
    productionNormie.numSupervisors = 11;

    // A Sales Manager sample
    SalesManager salesNormie;
    salesNormie.age = 46;
    salesNormie.department = "Fast Fud";
    salesNormie.employeeID = 694;
    salesNormie.name = "Buren Waffet";
    salesNormie.numSales = 620;
    salesNormie.numTeamSize = 94;

    cout << "\n\n\n";

    // Print details of manager
    cout << "Manager details are as follows:\n"
         << "\nName:\t\t"
         << normie.name
         << "\nEmployee ID:\t"
         << normie.employeeID
         << "\nDepartment:\t"
         << normie.department
         << "\nAge:\t\t"
         << normie.age
         << "\n\n";

    // Print details of production manager
    cout << "Production Manager details are as follows:\n"
         << "\nName:\t\t"
         << productionNormie.name
         << "\nEmployee ID:\t"
         << productionNormie.employeeID
         << "\nDepartment:\t"
         << productionNormie.department
         << "\nAge:\t\t"
         << productionNormie.age
         << "\nNumber of supervisors working with:\t"
         << productionNormie.numSupervisors
         << "\n\n";

    // Print details of sales manager
    cout << "Sales Manager details are as follows:\n"
         << "\nName:\t\t"
         << salesNormie.name
         << "\nEmployee ID:\t"
         << salesNormie.employeeID
         << "\nDepartment:\t"
         << salesNormie.department
         << "\nAge:\t\t"
         << salesNormie.age
         << "\nTotal Sales:\t"
         << salesNormie.numSales
         << "\nTeam Size:\t"
         << salesNormie.numTeamSize
         << "\n\n\n";

    return 9;
}
