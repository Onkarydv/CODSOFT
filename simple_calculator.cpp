#include<iostream>
using namespace std;

// function declration 
double add(double a,double b);
double subtract(double a,double b);
double multiply(double a,double b);
double divide(double a,double b);


int main()
{
    double n1, n2, result;
    char operation, continue_calculation;


    do
    {
        cout << "select operation:"<< endl;
        cout << "1.add(+)"<< endl;
        cout << "2.subtract(-)"<< endl;
        cout << "3.multiply(*)"<< endl;

        // take input from user f0r operation
        cout << " Enter your choice (+,-,*,/):";
        cin >> operation;

        // take input from user for number
        cout <<"Enter first number: ";
        cin >> n1;
        cout <<"Enter second number: ";
        cin >> n2;

        switch(operation)
        {
            case '+':
                   result=add(n1,n2);
                   cout <<"Result:"<<n1<< "+" <<n2<< "=" << result<<endl;
                   break;

            case '-':
                   result=subtract(n1,n2);
                   cout <<"Result:"<<n1<< "-" <<n2<< "=" << result<<endl;
                   break;

            case '*':
                   result=multiply(n1,n2);
                   cout <<"Result:"<<n1<< "*" <<n2<< "=" << result<<endl;
                   break;

            case '/':
                if(n2!=0)
                {
                   result=divide(n1,n2);
                   cout <<"Result:"<<n1<< "/" <<n2<< "=" << result<<endl;
                   break;
                }
                else
                {
                   cout <<"Error! Division by zero." <<endl;
                }
                break;
            default:
                   cout <<"invalid operation!"<<endl;
        }

       cout<<"Do you want to perform another calculation ?(y or n):";
            cin >> continue_calculation;


    } while(continue_calculation=='y');

    return 0;
                
}

double add(double a,double b)
{
    return a + b;

}

double subtract(double a,double b)
{
    return a-b;
}

double multiply(double a,double b)
{
    return a*b;
}
double divide(double a,double b)
{
    return a/b;

}


