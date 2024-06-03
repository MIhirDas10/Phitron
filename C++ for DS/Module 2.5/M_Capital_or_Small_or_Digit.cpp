#include<iostream>
using namespace std;
int main()
{
    char n;
    cin>>n;
    int ascii=int(n);
    if(65<=ascii && ascii<=90){
        cout<<"ALPHA"<<'\n'<<"IS CAPITAL"<<endl;
    }
    else if(97<=ascii && ascii<=122){
        cout<<"ALPHA"<<'\n'<<"IS SMALL"<<endl;
    }
    else if(48<=ascii && ascii<=57){
       cout<<"IS DIGIT"<<endl; 
    }
    return 0;
}