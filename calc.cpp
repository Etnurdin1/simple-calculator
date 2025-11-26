#include <iostream>
#include <string>
using namespace std;

int main() {
    double n1,n2,result;
    char operation;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"what do you want to calculate(+,-,*,/)?:"<<" ";
    cin>> operation;
    if(operation=='+'){
        cout<<"the sum will be:"<<" ";
        result=n1+n2;
        cout<<result;
    }
    else if(operation=='*'){
        cout<<"the result for multiplication will be:"<<" ";
        result=n1*n2;
        cout<<result;
    }
    else if(operation=='/'){
        cout<<"The result for division will be:"<<" ";
        result=n1/n2;
        cout<<result;
    }
    else if(operation=='-'){
        cout<<"The result for subtraction will be:"<<" ";
        result=n1-n2;
        cout<<result;
    }



    return 0;
}
