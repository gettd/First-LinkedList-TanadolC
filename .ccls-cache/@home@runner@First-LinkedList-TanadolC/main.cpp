#include <iostream>
using namespace std;
#include "node.h"

typedef int integer;

int i;

typedef node* nodePtr;
 int main() {

int x=5;
//node a,b,head;
   node *head, *temp;
   head=new node;
   temp=head;
   temp->value=x;
   int i;
   for(i=0;i<3;i++)
     {
       temp->next=new node;
       temp->value=x+2*i;
       temp=temp->next;
     }
   //delete (temp);



/*a.value = x;
a.next=&b;
head=&a; 
b.value=head->value+3; 
  node temp=head;
cout<<temp->value<<endl;
cout<<temp->next->value<<endl;
  node c;
   //connect b to c     //temp  ->a  ->b  ->c
   //1. using b
   //b.next=&c;
   //2. using a        //a.next->next=&c;
   //3. using temp     //temp->next->next=&c;

   c.value =11;
   cout<<temp->next->next->value;

   //printing in a loop
   */
   temp=head;
   for(int i=0;i<3;i++)
     {
       cout<<temp->value<<endl;
       temp=temp->next;
     }
   //delete(temp);
   temp=head;
   for (i=0;i<3;i++)
     {
       head=head->next;
       cout<<"Deleting "<<temp->value<<endl;
       delete temp;
       temp=head;
     }
  //how to move temp to the next one? 
}