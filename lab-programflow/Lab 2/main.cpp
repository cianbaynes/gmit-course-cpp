#include <iostream>

using namespace std;
#include "function.h"




int main()
{



//Task 1
    LabInfo();

//Task 2
    LabInfo1(3,7);

//Task 3
    Numberlarge();

//Task 4
   int question=0;
   cout<<"What day of the week would you like to meet? Please pick 1-5 for days as below.\n 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday"<<endl;
   cin>>question;
   switch(question){
   case 1:
       cout<<"We will meet on Monday"<<endl;
        break;
   case 2:
        cout<<"We will meet on Tuesday"<<endl;
        break;
   case 3:
        cout<<"We Will meet on Wednesday"<<endl;
        break;
   case 4:
       cout<<"We will meet on Thursday"<<endl;
       break;
   case 5:
        cout<<"We will meet on friday"<<endl;
        break;

    }

//Task 5
    radius();

//Task 6
    rectangle();

//Task 7
    tempertaure();

//Task 8
    RadiusLoop();

//Task 9
    Tempconversion();

//Task 10
    evennumbers();

//Task 11
    oddnumbers();

//Task 12
    q11array();

//Task 13
    randomnumbers();

//Task 14
    question14();

//Task 15
    Question15();



}

