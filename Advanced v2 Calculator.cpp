#include <iostream>

using namespace std;

// Function prototypes
void info();
void square();
void sum();
void subtract();
void multiply();
void divide();
void ar_op();
void gr();
void le();
void even();
void odd();
void mul_10();

int main() {
    for (int i = 0; i < 3; i++) {
        info();
    }
    return 0;
}

void info() {
    int n;

    cout << "Press 1 to Square:" << endl;
    cout << "Press 2 for Arithmetic Operations:" << endl;
    cout << "Press 3 to compare Display Greater Value:" << endl;
    cout << "Press 4 to compare Display Lesser Value:" << endl;
    cout << "Press 5 for Even Number:" << endl;
    cout << "Press 6 for Odd Number:" << endl;
    cout << "Press 7 to Number Multiply by 10:" << endl;
    cin >> n;

    switch (n) {
    case 1:
        square();
        break;

    case 2:
        ar_op();
        break;

    case 3:
        gr();
        break;

    case 4:
        le();
        break;

    case 5:
        even();
        break;

    case 6:
        odd();
        break;

    case 7:
        mul_10();
        break;

    default:
        cout << "Enter a Valid Input!!!" << endl;
        break;
    } // end switch

} // end func_info

void square() {
    float n;
    cout << "Enter the Number: ";
    cin >> n;
    n *= n;
    cout << "The Square is: " << n << endl;

} // end func_sqr

void sum() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int addition = num1 + num2;
    cout << "Sum of two numbers is = " << addition << endl;

} // end func_sum

void subtract() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int subtraction = num1 - num2;
    cout << "Subtraction of two numbers is = " << subtraction << endl;

}  // end func_subt

void multiply() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int multiplication = num1 * num2;
    cout << "Product of two numbers is = " << multiplication << endl;

} // end func_mul

void divide() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if (num2 == 0) {
        cout << "Division by zero is not allowed." << endl;
    }
    else {
        double division = num1 / num2;
        cout << "Division of two numbers is = " << division << endl;
    }

} // end func_divide

void ar_op() {
    int n;
    cout << "Press 1 to add:" << endl;
    cout << "Press 2 to subtract:" << endl;
    cout << "Press 3 to multiply:" << endl;
    cout << "Press 4 to divide:" << endl;
    cin >> n;

    if (n == 1)
        sum();
    else if (n == 2)
        subtract();
    else if (n == 3)
        multiply();
    else if (n == 4)
        divide();

} // end func_ar_op

void gr() {
    float a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    if (a > b)
        cout << a << " is Greater" << endl;
    else if (a < b)
        cout << b << " is Greater" << endl;
    else
        cout << "Both numbers are equal" << endl;

} // end func_gr

void le() {
    float a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    if (a > b)
        cout << b << " is lesser" << endl;
    else if (a < b)
        cout << a << " is lesser" << endl;
    else
        cout << "Both numbers are equal" << endl;

} // end func_le

void even() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "It is already even" << endl;
    else {
        n--;
        cout << "It is converted to even, which is " << n << endl;
    }

} // end func_even

void odd() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (n % 2 != 0)
        cout << "It is already ODD" << endl;
    else {
        n--;
        cout << "It is converted to odd, which is " << n << endl;
    }

} // end func_odd

void mul_10() {
    float n;
    cout << "Enter Number: ";
    cin >> n;
    n = 10 * n;
    cout << "Answer is: " << n << endl;

} // end func_mul_10
