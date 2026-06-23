#include <iostream>
#include <cmath>

using namespace std;

long long factorial(int n) {

    if (n < 0)
        return -1;

    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main () {

    int choice;

    do {
        cout <<"\n-----------SCIENTIFIC CALCULATOR-------------\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Factorial\n";
        cout << "7. Square Root\n";
        cout << "8. Power\n";
        cout << "9. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                double a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result : " << a + b << endl;
                break;
            }

            case 2:{
                double a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;
            }

            case 3: 
            {
                double a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result : " << a * b << endl;
                break; 
            }

            case 4: 
            {
                double a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if (b==0)
                    cout << "Erroe! Division by Zero is not allowed\n";
                else
                    cout << "Result = " << a / b << endl;
                    break;
            }

            case 5: 
            {
                int a, b;
                cout << "Enter two integers: ";
                cin >> a >> b;

                if (b == 0)
                    cout << "Error! Modulus by zero is not allowed.\n";
                else 
                    cout << "Result : " << a % b << endl;
                break;
            }

            case 6: 
            {
                int n;
                cout << "Enter a number: ";
                cin >> n;

                long long ans = factorial(n);

                if (ans == -1)
                    cout << "Factorial of negative doesnot exists\n";
                else
                    cout << "Factorial = " << ans << endl;
                break;
            }

            case 7:
            {
                double n;
                cout << "Enter a number: ";
                cin >> n;

                if (n < 0)
                    cout << "Square root of negative number doesn't exists\n";
                else
                    cout << "Square root : " << sqrt(n) << endl;
                break;
            }

            case 8:
            {
                double base, exponent;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter exponent: ";
                cin >> exponent;

                cout << "Result = " << pow(base,exponent) << endl;
                break;
            }

            case 9:
                cout << "Thank you for using the calculator\n";
                break;

            default:
                cout << "Invalid Choice!\n";

        }

    }   while(choice != 9);

    return 0;

}