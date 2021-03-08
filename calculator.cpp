#include <iostream>

using namespace std;

int calc;
int stop;
int num1;
int num2;
int num3;

    int main()
{
    cout << "Welcome to Calculator Vers_1.0!\n\n\n";
    cout << "Select form of calculation: \n\n";
    cout << "1.ADD\n"
    "2.SUBTRACT\n"
    "3.MULTIPLY\n"
    "4.DIVIDE\n"
    "5.MODULUS DIVSION\n";
    cin >> calc;

      while (calc < 1 || calc > 5)
      {
         cout << "Invalid_Option\n";
         cout << "Select form of calculation: \n\n";
         cout << "1.ADD\n"
                "2.SUBTRACT\n"
                "3.MULTIPLY\n"
                "4.DIVIDE\n"
                "5.MODULUS DIVSION\n";
         cin >> calc;
      }
      switch (calc)
      {
      case 1:
      cout << "\n\n";
          cout << "Input Addend 1: \n";
          cin >> num1;
          cout << "Input Addend 2: \n\n";
          cin >> num2;
          num3= num1+num2;
          cout << "The sum of " << num1 << " and " << num2 << " is " << num3 << "\n"; 
          cin >> stop;
          break;
      case 2:
      cout << "\n\n";
          cout << "Input Minuend: \n";
          cin >> num1;
          cout << "Input Subtrahend: \n";
          cin >> num2;
          num3= num1-num2;
          cout << "The difference of " << num1 << " and " << num2 << " is " << num3 << "\n";
          cin >> stop;
          break;
      case 3:
      cout << "\n\n";
          cout << "Input Multiplier: \n";
          cin >> num1;
          cout << "Input Multiplicand: \n";
          cin >> num2;
          num3= num1*num2;
          cout << "The product of " << num1 << " and " << num2 << " is " << num3 << "\n";
          cin >> stop;
          break;
      case 4:
      cout << "\n\n";
          cout << "Input Divident: \n";
          cin >> num1;
          cout << "Input Divisor: \n";
          cin >> num2;
          num3= num1/num2;
          cout << "The quotient of " << num1 << " and " << num2 << " is " << num3 << "\n";
          cin >> stop;
          break;
      case 5:
      cout << "\n\n";
          cout << "Input Divident: \n";
          cin >> num1;
          cout << "Input Divisor: \n";
          cin >> num2;
          num3= num1%num2;
          cout << "The remainder of " << num1 << " and " << num2 << " is " << num3 << "\n";
          cin >> stop;
          break;
    }
}