#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <float.h>
int main() {
 char op;
 double a, b, res;
 clrscr();
 // Read the operator
 cout << "Enter an operator (+, -, *, /): ";
 cin >> op;
 // Read the two numbers
 cout << "Enter two numbers: ";
 cin >> a >> b;
 // Define all four operations in the corresponding
 // switch-case
 switch (op) {
 case '+':
res = a + b;
break;
 case '-':
res = a - b;
break;
 case '*':
res = a * b;
break;
 case '/':
res = a / b;
break;
 default:
cout << "Error! Operator is not correct";
res = -DBL_MAX;
 }
 // Printing the result
 if (res != -DBL_MAX)
cout << "Result: " << res;
getch();
 return 0;
}
