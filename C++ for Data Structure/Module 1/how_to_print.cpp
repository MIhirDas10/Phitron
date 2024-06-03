#include<iostream>
int main()
{
    // how to print ---
    // std::cout<<"hello world";
    // ----------------

    // --- same thing for intialization ---
    int a=10;
    long long int b=1000000000;
    float c=1.5;
    double d=1.566666665;
    char cc='A';
    // for c
    // printf("%d",a);

    // to print a variable in c++, we don't need any FORMAT SPECIFIER
    // for c++
    // std::cout<<a;

    // std::cout<<"My favourite number is "<<a;
    // std::cout<<"number "<<a<<" is my favourite number";
    // std::cout<<a<< " "<<b;
    // std::cout<<a<<"\n"<<b;

    // endl
    std::cout<<a<<std::endl
             <<b<<std::endl;
    return 0;
}