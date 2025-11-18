
#ifndef stack_h
#define stack_h
#include "node.h"
using namespace std;
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){

    new_node->set_next(top);
    top=new_node;
    size++;
            // Left missing for exercises…
            //1.connect to previous top
            //2.change top
            //3.change size
   }
 else cout<<"Not enough memory"<< endl;
         // Left missing for exercises…
    
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
        int value;
        value=t->get_value();
        top = top->get_next();
        size--;
    // Left missing part for exercises
        delete t;
        return value;
	//be careful of the empty stack!!!
    }

cout<<"Empty stack"<< endl;
return NULL;
}
Stack::Stack(){
    top=NULL;
    size=0;
    //initialize stack
    
}
Stack::~Stack(){
    cout<<"Clear the stack"<< endl;
    int n=size;
    while(n>0) {
        pop();
        n--;
    //delete all remaning stack (i.e. pop all) 
    
}
}

#endif
