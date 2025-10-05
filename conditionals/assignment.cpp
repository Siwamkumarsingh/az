// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
    
//     cout<<"enter num:";
//     cin>>num;
    
//     if(num>0){
//         cout<<"number is postive"<<endl;
//     } else if(num<0){
//         cout<<"number is negative"<<endl;
//     }else{
//     cout<<"number is zero.\n";
//     return 0;
//     }
// }

#include<iostream>
using namespace std;
int main()
{
int year;
cin>>year;
if(year%400==0){
    cout<<year<<"is a leap year \n";
}
    else if(year%100==0 ){
cout<<year<<"is not a leap year \n";
    }
    else if(year%4==0){
        cout<<year<<"is a leap year \n";
    }
    else{
        cout<<year<<"is a not leap year \n";
    }
    return 0;
    
}


