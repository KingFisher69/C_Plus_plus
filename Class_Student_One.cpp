#include<iostream>
using namespace std;
const double FEE_PAYABLE = 90000;
class Student
{
private:
	char adm_no[20],name[25];
	int no_of_units;
	double fee_paid, fee_balance;
public:	
	void get_input();
	void calculate();
	void print_output();
};
int main()
{
	Student stud1;

	cout<<"Data entry for the student:\n"
		<<"------------------------------------------------------------\n";
	stud1.get_input();
	stud1.fee_paid = 85000;
	stud1.calculate();
	stud1.print_output();

	cout<<"\n\nAnalysis for the student:"
		<<"\n---------------------------------------";	
	cout<<"\n\n";
	return 0;
}
void Student::get_input()
{
	cout<<"Enter the admission number of the student: ";
	cin>>adm_no;
	cout<<"Enter his/her name: ";
	cin>>name;
	cout<<"Enter the number of units he/she is doing: ";
	fflush(stdin);
	cin>>no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>fee_paid;
}
void Student::calculate()

{
	fee_balance = FEE_PAYABLE - fee_paid;
}
void Student::print_output()
{
	cout<<"\nAdmission Number: " <<adm_no
		<<"\nName: " <<name
		<<"\nNumber of units: " <<no_of_units
		<<"\nFee Paid: " <<fee_paid
		<<"\nFee Balance: " <<fee_balance;
	cout<< endl;
}
