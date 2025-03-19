#include <iostream>
#include <iomanip> 
using namespace std;
double calculateSquareRoot(double number) 
{
    if (number < 0)
	 {
        cerr << "Error: Cannot calculate the square root of a negative number." << endl;
        return -1; 
    }
    double tolerance = 0.00001; 
    double guess = number / 2.0;
    while (true)
	 {
        double nextGuess = (guess + number / guess) / 2.0; 
        if (abs(nextGuess - guess) < tolerance)
		 {
            break;
        }
        guess = nextGuess; 
    }
    return guess; 
}
int main()
 {
    double num;
    cout << "Enter a number to calculate its square root: ";
    cin >> num;
    double result = calculateSquareRoot(num);
    if (result != -1) 
	{
        cout << "The square root of " << num << " is approximately: " 
                  << setprecision(5) << result << endl; 
    }
    return 0;
}
