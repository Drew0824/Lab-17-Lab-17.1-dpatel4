#include <iostream>
#include <string>
using namespace std;

int math1() {
  int num1 = 50;
  int num2 = 5;
  return num1 + num2;
}

int math2() {
  int num1 = 50;
  int num2 = 5;
  return num1 - num2;
}

int math3() {
  int num1 = 50;
  int num2 = 5;
  return num1 * num2;
}

int multiply(int num1, int num2)
{ 
  int multiplier;
  multiplier = num1 * num2;
  return multiplier;
}

int main() {
  int outputNum;
  
  int num1;
  int num2;
  cout << "Enter a number:\n";
  cin >> num1;

  cout << "Enter another number:\n";
  cin >> num2;

  outputNum = multiply(num1,num2);
  cout << outputNum << endl;
}



// We know output is going to be 45 because we know that in the int main the outputnum is set to = to math 2 and when we look further up into the code we see that math 2 is num1 - num2 and we also know that num1=50 and num2=5 and that means the program will output 45.