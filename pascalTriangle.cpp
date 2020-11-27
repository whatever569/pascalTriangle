#include <iostream>

using namespace std;

long factorial(long x);
int combination(int n, int r);
void draw(int rows);

int main()
{
    cout << "number of rows: ";
    int rows;
    cin >> rows;
    
    draw(rows - 1);
    
    return 0;
}

void draw(int rows)
{
    for (int i = 0; i <= rows; i++)
    {
        //use this to print space before each row
        //for (int q = 0; q <= rows - i; q++) cout << " ";
        
        for (int j = 0; j <= i; j++)
            cout << combination(i, j) << " ";
        
        cout << endl;
    }
}

int combination(int n, int r)
{
    int result = (int) (factorial(n) / (factorial(n-r) * factorial(r)));
    return result;
}

long factorial(long x)
{
    if(x <= 1) return 1;
    x = x * factorial(x - 1);
    return x;
}
