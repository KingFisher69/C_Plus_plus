#include <iostream>
using namespace std;

class Salary {
    private:
        double basic_salary;
        double allowance;
        double tax_rate;
        double tax_amount;
        double net_salary;

    public:
        // Constructors
        Salary(double basic = 10000, double allow = 5000, double tax = 10);
        void input();
        void output();
        void compute();
        void compare();
        double getBasicSalary();// Accessor function for basic_salary
int main() {
    Salary emp1, emp2;

    // Input details for employee 1
    cout << "Enter details for employee 1" << endl;
    emp1.input();

    // Compute salary for employee 1
    emp1.compute();

    // Output details for employee 1
    cout << "Details for employee 1" << endl;
    emp1.output();

    // Input details for employee 2
    cout << endl << "Enter details for employee 2" << endl;
    emp2.input();

    // Compute salary for employee 2
    emp2.compute();

    // Output details for employee 2
    cout << "Details for employee 2" << endl;
    emp2.output();

    // Compare net_salary for both employees
    emp1.compare(emp2);
    cout<< "The basic salary is: "<<emp1.getBasicSalary();
    cout<< "\n\n";

    return 0;
}
 Salary::Salary (double basic = 10000, double allow = 5000, double tax = 10)
 {
        basic_salary = basic;
        allowance = allow;
        tax_rate = tax;

}

        // Member functions
void Salary::input()
{
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        cout << "Enter allowance: ";
        cin >> allowance;
        cout << "Enter tax rate: ";
        cin >> tax_rate;
}

void Salary::compute()
{
    double gross_salary = basic_salary + allowance;
    tax_amount = (tax_rate / 100) * gross_salary;
    net_salary = gross_salary - tax_amount;
}

void Salary::output()
{
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Tax Rate: " << tax_rate << "%" << endl;
        cout << "Tax Amount: " << tax_amount << endl;
        cout << "Net Salary: " << net_salary << endl;
}

        // Function to compare net_salary for two employees
void Salary::compare(Salary s)
{
    if (net_salary > s.net_salary) {
        cout << "Employee 1 has a higher net salary." << endl;
    } else if (net_salary < s.net_salary) {
        cout << "Employee 2 has a higher net salary." << endl;
    } else {
        cout << "Both employees have the same net salary." << endl;
    }
}
double Salary::getBasicSalary()
{
    return basic_salary;
}
};



