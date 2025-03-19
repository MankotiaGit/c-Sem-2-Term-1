#include <iostream>
#include <cmath> 
#include <iomanip> 
unsigned long long factorial(int n) 
{
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
	 {
        result *= i;
    }
    return result;
}
double power(double base, int exponent)
 {
    return pow(base, exponent);
}
int main()
 {
    int choice;
    do {
        cout << "\nAdvanced Calculator Menu:\n";
        cout << "1. Factorial\n";
        cout << "2. Power\n";
        cout << "3. Square Root\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        switch (choice) 
		{
            case 1:
			 {
                int num;
                cout << "Enter a non-negative integer: ";
                cin >> num;
                unsigned long long fact = factorial(num);
                cout << "Factorial of " << num << " is: " << fact << endl;
                break;
            }
            case 2: 
			{
                double base;
                int exponent;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter exponent: ";
                cin >> exponent;
                double result = power(base, exponent);
                cout << base << " raised to the power of " << exponent << " is: " << result << endl;
                break;
            }
            case 3:
			 {
                double number;
                cout << "Enter a non-negative number: ";
                cin >> number;
                if (number < 0)
				 {
                    cout << "Error: Cannot calculate the square root of a negative number." << endl;
                }
				 else 
				{
                    double sqrtResult = std::sqrt(number);
                    cout << "Square root of " << number << " is: " << setprecision(5) << sqrtResult << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } 
	while (choice != 4);
    return 0;
}
