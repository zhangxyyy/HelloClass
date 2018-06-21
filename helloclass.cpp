#include<iostream>
using namespace std;
#include"helloclass.h"

HelloClass::HelloClass()
{
cout<<"i am being constructing"<<endl;
}
void HelloClass::sayhello()
{
cout<<"hello class"<<endl;
}
HelloClass::~HelloClass()
{cout<<"i am being destructing"<<endl;

}
