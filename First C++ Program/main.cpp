#include <iostream>

using namespace std;

int main()
{
    int first, second;
    char op;
    cout<< "Enter the first number:";
    cin>> first;
    cout<<"Enter the operator (+ - * / )";
    cin>>op;
    cout<< "Enter the second number:";
    cin>> second;
    if(op== '+')
    {
        cout<< "Result:"<<first + second << endl;
    }
    else if(op=='-')
    {
        cout<< "Result:"<<first - second << endl;
    }
    else if(op=='*')
    {
        cout<< "Result:"<<first * second << endl;
    }
    else if(op=='/')
    {
        cout<< "Result:"<<first / second << endl;
    }
    else
    {
        cout<<"Invalid operator"<<endl;
    }

    return 0;
}
