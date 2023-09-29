#include <iostream>
using namespace std;

class Commodity
{
private:
    double buying_price;
    double transport_cost;
    double selling_price;
    double profit;

public:
    Commodity();
    Commodity(double buying = 0, double transi = 0, double selling = 0);
    void get_data();
    void give_output();
    void calculate();
    double the_buying();

};
int main()
{
    Commodity com(20000, 5000, 45000);
    /*cout<< "\nENTER THE AMOUNT\N";
    com.get_data();*/
    com.give_output();
    com.calculate();
    cout<< "\nThe Buying price"<< com.the_buying();
    cout<< "\n\n";
    return 0;
}
Commodity::Commodity(double buying, double transi, double selling)
{
    buying_price = buying;
    transport_cost = transi;
    selling_price = selling;
}
void Commodity::get_data()
{
    cout<< "\nEnter the buying price: ";
    cin>>buying_price;
    cout<< "\nEnter the transport cost: ";
    cin>>selling_price;
    cout<< "\nEnter the selling price: ";
    cin>>selling_price;

}
void Commodity::calculate()
{
    profit = (buying_price + transport_cost)/selling_price) *100 ;
}
void Commodity::give_output()
{
    cout<< "\nBuying Price is: "<<buying_price;
    cout<< "\nTransport Cost: "<<transport_cost;
    cout<< "\nSelling Price: "<<selling_price;
    cout<< "\nThe Profit is: "<<profit;
}

double Commodity::the_buying()
{
    return buying_price;
}

/*	get_data( ) – For data input.
	give_output( ) – For
	calculate( ) – To perform calculations.*/
