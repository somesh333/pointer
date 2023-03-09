#include<iostream>
using namespace std;

int main(){

    int num = 5;

    int *ptr = &num;

    cout << num <<endl ;

    cout <<" Address of num is :" <<ptr << endl;
    cout<<"value of um is : "<< *ptr << endl;
    cout << "size of integer is : "<< sizeof(num) << endl;
    cout << "size of pointer is : "<< sizeof(ptr) << endl;
}