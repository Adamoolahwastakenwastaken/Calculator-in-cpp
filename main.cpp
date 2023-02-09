// This was made be @adamoolah_offical on github
#include <iostream>
using namespace std;

int main(){
    char op; // Operation user will enter
    float num1, num2; // Gives user 2 numbers to enter

    // Printing and reciving output (Operand)
    std::cout << "Pick and operand from these : +, -, /, *";
    cin >> op;

    // Printing and receving output (Numbers)
    std::cout << "Type your numbers: ";
    cin >> num1 >> num2;

    // Belive it or not a switch statement is faster and more optimal than a if statement
    switch(op){
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2; // adds 2 numbers
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2; // Subtracts
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2; // mutiplies
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2; // divides
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "That is not a valid operator";
      break;
    }
}