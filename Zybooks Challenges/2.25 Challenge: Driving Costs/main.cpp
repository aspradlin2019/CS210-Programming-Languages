#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   //Declare variables for the car's gas mileage (miles/gallon)
   //and cost of gas (dollars/gallon)
   float gasMileage, gasCost;
   
   //Get user inpute for gas mileage and gas cost
   cin >> gasMileage >> gasCost;
   
   //Set precision for output
   cout << fixed << setprecision(2);
   
   //Calculate and output the gas cost for 20 miles
   cout << (20.0 / gasMileage) * gasCost << " ";
   
   //Calculate and output the gas cost for 75 miles
   cout << (75.0 / gasMileage) * gasCost << " ";
   
   //Calculate and output the gas cost for 500 miles
   cout << (500.0 /gasMileage) * gasCost << endl;

   return 0;
}
