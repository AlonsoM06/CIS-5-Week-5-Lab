#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Lab 5 — Alonso Martinez 
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double money = 0.0; 
  
  cout << "age? ";
  cin  >> age; 
  cout << "Money? ";
  cin >> money;
  
  bool adult = age >= 21;
  bool enough_money = money >= 50.50;

  // adult is 21 since most gambling places are 21+ and money is $50.50 which is what is needed to gamble
  
  if (adult && enough_money) {
    cout << "Go gamble!!!" << endl;
  } else if (adult || enough_money) {
    cout << "Not sure, maybe rethink your options " << endl;
  } else  {
    cout << "Stay home " << endl;
  }
  
  
  return 0;
}