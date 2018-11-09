#include<iostream>
using namespace std;
struct link
{
     public:
          int data;
          int *next;
};
class linklist
{
    public:
           //int data;
           //int *link;
            link *start=NULL;
           //int *temp;
    public:
         void add();
         void del();
         void display();

};
void linklist :: add()
{   //int d;
    //d=new int[2];
    //temp=d;
    link *t;
    link *temp=new link;
    cout<<"enter the data";
    cin>>temp->data;
    temp->next=NULL;
   if(start==NULL)
      start=temp;
   else
    {
      t=start;
      while(t->next!=NULL)
        {
          t=t->next;
           t->next=temp;
           temp->next=NULL;
        }
     }

}
void linklist :: del()
{  link *temp,*ptr,*r;
  //cout<<"enter tthe node";
  //cin>>n;
  ptr=start;
  
  while(ptr->next!=NULL)
   { r=ptr;
     ptr=ptr->next;
    }
    delete(ptr);
     r->next=NULL;
}
void linklist :: display()
{link *temp;
  while(temp->next!=NULL)
   {
     cout<<temp->data;cout<<"->";
      temp=temp->next;
   }
}
main()
{
   linklist w;
     
    w.add();
    w.add();
    w.display();
    w.del();
    w.display();
}
     
       
