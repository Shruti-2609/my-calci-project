#include<iostream>
int main()
{
    float a,b;
    char operation;
    std::cout<<"Enter the operation you want to do +,-,*,/:";
    std::cin>>operation;
    std::cout<<"enter the two operands:";
    std::cin>>a>>b;
    switch(operation)
    {
        case '+':
          std::cout<<a+b;
          break;
        case '-':
          std::cout<<a-b;
          break;
        case '*':
          std::cout<<a*b;
          break;
        case '/':
          std::cout<<a/b;
          break;
        default:
          std::cout<<"it is not a valid operation";
          break;        
    }
    return 0;
}