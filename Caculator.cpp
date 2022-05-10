
#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    string op;
    cout<<"a- Addition\nb- Subtraction\nc- Multiplication\nd- Division\ne- Modulus"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter your choice of operation: ";
    cin>>op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if (op=="A" or op == "a"){
        int sum = num1+num2;
        cout<<"Sum is: "<<sum;
    }
    else if(op == "B" or op == "b"){
        int sub = num1 - num2;
        cout<<"Subtraction is: "<<sub;
    }
    else if(op == "C" or op == "c"){
        int mul = num1 * num2;
        cout<<"Multiplication is: "<<mul;
    }
    else if(op == "D" or op == "d"){
        float div = num1 / num2;
        cout<<"Division is: "<<div;
    }
    else if(op == "E" or op == "e"){
        int mod = num1 % num2;
        cout<<"Modulus is: "<<mod;
    }
    else{
        cout<<"Error!";
    }
    return 0;
}