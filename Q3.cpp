#include <iostream>

using namespace std;

int main() {
  cout << "#3:-> Write a program to input principal, rate, time & find the simple interest.";
  cout << "\n==============================================================================";
  cout << "\nResult Start here:->";
  cout << "\n++++++++++++++++++++\n";

  int principal=0, rate=0, time=0, simple_interest=0;
  cout << "Type Principal: ";
  cin >> principal;

  cout << "Type the Rate: ";
  cin >> rate;

  cout << "Type the Time: ";
  cin >> rate;

  simple_interest = (principal*rate*time)/100;

  cout << "The Simple Interest of "<< principal << " at the rate of " << rate  << " for a "<< time <<" years " << simple_interest;


  return 0;
}
