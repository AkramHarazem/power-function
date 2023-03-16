#include <iostream>
#include <cmath>


using namespace std;

double power (int x, int y)
{
    double result=1;
    if (y>0)
    {
        for (int i=0; i<y; i++)
        {
            result*=x;

        }
        return result;
    }
    else if (y<0)
    {
        for (int j=y; j<0; j++)
        {
            result/=x;

        }
        return result;

    }
}

int main()
{
    int b,exp;
    double result;

    cout << "Enter the number you want to multiply " << endl;
    while (!(cin >> b)) //|| b <= 0)
    {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Enter the number of times want to multiply " << endl;
    while (!(cin >>exp)) //|| exp < 0)
    {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    result = power (b,exp);

    cout<< "The result is: "<< result<<endl;

    double res = pow(b, exp);
    cout<< "The result of built-in function is: "<< res<<endl;


    return 0;
}
