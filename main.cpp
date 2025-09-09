// Assignment 1 - Fuel Range
// TODO: Cailyn Carver 
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
 // TODO: Declare your variables, with comments for each  
 //fuel tank
 double capacity;
 //mpg
 double mpg;
 //percent full
 int percentFull;

// TODO: Prompt for and input the required values
  cout << " Input the capacity of the fuel tank in gallons ";
  cin >> capacity;
   cout << " Input the mpg for the vehicle ";
  cin >> mpg;
   cout << " Input the percentage to which the tank is full ";
  cin >> percentFull;
  
  // TODO: Calculate the results
  double remainingFuel = (percentFull * capacity) / 100;
  double milesLeft = remainingFuel * mpg;
  
  // TODO: Output the results
  cout << " The vehicle can be driven " << milesLeft << " miles on the remaining fuel." << endl; 
}
