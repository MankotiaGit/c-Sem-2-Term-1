#include <iostream>
#include <vector>
using namespace std;
void printPascalTriangle(int rows)
 {
    vector<vector<int>> triangle(rows);
    for (int i = 0; i < rows; ++i)
	 {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;
        for (int j = 1; j < i; ++j)
		 {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (int i = 0; i < rows; ++i)
	 {
        for (int j = 0; j < rows - i - 1; ++j)
		 {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j)
		 {
            cout << triangle[i][j] << " ";
        }
        cout << endl; 
    }
}
int main()
 {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    if (rows <= 0)
	 {
        cout << "Please enter a positive integer." << endl;
        return 1; 
    }
    printPascalTriangle(rows);
    return 0;
}
