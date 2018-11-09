#include<iostream>
using namespace std;
class h
{
  private: 
     int data;
     int **ptr;
  public:
       void show()
         {
           cout<<"enter=";
           cin>>data;
           ptr=&&data;
           cout<<"*ptr="<<*ptr;cout<<endl;
           cout<<"ptr="<<ptr;cout<<endl;
           cout<<"**Ptr="<<**ptr;
       }
};
int main()
{
   h s;
     s.show();
  return 1;
}
