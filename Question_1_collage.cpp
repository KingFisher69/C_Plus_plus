#include <iostream>
using namespace std;

class College
{
private:
    int programming, networking, web, sum;
    double average;
public:
    College(int prog = 0, int net = 0, int WD = 0);
    void data_in();
    void compute();
    void data_output();
    double the_total();//accessor function
    ~College(); //destructor
};
int main()
{
    College mark1(70, 80 ,90);

    /*cout<< "\nENTER THE MARK: \n" ;

    mark1.data_in();*/
    mark1.compute();
    mark1.data_output();
    cout<< "\nThe total marks is: "<<mark1.the_total();
    cout<< "\n\n";
    return 0;

}
College::College (int prog, int net, int WD)
{
    programming = prog;
    networking = net ;
    web = WD;

}
 void College::data_in()

 {
     cout<< "\nThe the marks scored in programming: ";
     cin>> programming;
     cout<< "\nThe the marks scored in networking: ";
     cin>> networking;
     cout<< "\nThe the marks scored in Web design: ";
     cin>> web;
 }
 void College::compute()
 {
     sum = programming + networking + web;
     average = sum/3;
 }
 void College::data_output()
 {
     cout <<"\nProgramming: "<<programming
          << "\nNetworking: "<<networking
          << "\nWeb Design: "<<web
          << "\nSum is: "<<sum
          << "\nAverage is: "<<average;


 }
 College::~College()
 {
     cout<< "\nThe destructor has been called" <<endl;
 }
 double College::the_total()
 {
     return sum;
 }




//Programming, networking, web_design, total, average
/*data_in( ) – for data input.
compute( ) – To perform calculations.
data_out( ) – For data output.
the_total( ) – To provide non-member functions access to the value stored in total.*/
