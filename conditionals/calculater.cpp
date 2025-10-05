#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char op;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"op:";
    cin>>op;

    if(op=='+'){
        cout<<"a+b="<<a+b<<endl;
    }
        else if(op=='-'){
            cout<<"a-b="<<a-b<<endl;
    }
    else if("*"){
        cout<<"a*b="<<a*b<<endl;
    }
    else if("/"){
    cout<<"a/b="<<a/b<<endl;
    }
    else{
        cout<<"invalid kaam"<<endl;
    }

    return 0;
}