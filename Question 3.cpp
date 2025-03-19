#include <iostream>
#include <vector>
using namespace std;
int main()
 {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) 
	{
        sum += i;
    }
    cout << "Sum of the first 10 natural numbers: " << sum << std::endl;
    vector<int> oddNumbers;
    for (int i = 1; i <= 10; ++i) 
	{
        if (i % 2 != 0) 
		{ 
            oddNumbers.push_back(i);
        }
    }
       cout << "Odd numbers in reverse order: ";
    for (int i = oddNumbers.size() - 1; i >= 0; --i) 
	{
        cout << oddNumbers[i] << " ";
    }
    cout << endl;
    return 0;
}
