#include <iostream>

using namespace std;

void calculate(int num1,int num2, char operandChoice);

int main(){

  int num1,num2,result;
  char operandChoice;

cout<<"enter the first number: ";
cin>> num1;

cout<<"enter the second number: ";
cin>> num2;

cout<<"enter the operand you wish to use : ";
cin>> operandChoice;

calculate(num1, num2, operandChoice);

}

void calculate(int num1,int num2, char operandChoice){


    switch (operandChoice) {

        // If user enter +
        case '+':
            cout<<num1 + num2;
            break;

        // If user enter -
        case '-':
          cout<<num1 - num2;
            break;

        // If user enter *
        case '*':
          cout<< num1 * num2;
            break;

        // If user enter /
        case '/':
            cout<< num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;

    }

}
