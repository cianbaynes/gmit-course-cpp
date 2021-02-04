#include <iostream>

using namespace std;
#include "function.h"


int main()

{
    LabInfo();







const int ARRAYSIZE=6;
int x[ARRAYSIZE];

int index=0;
cout<<"/************************"<<endl;
cout<<"* Enter 6 numbers   /"<<endl;
while(index<ARRAYSIZE){

    int temp;
    cin>>temp;
    //check value
    if((temp>0)&&(temp<100)){
        x[index]=temp;
        index++;
    }else{
        cout<<"The user has entered wrong value"<<temp<<"<0 or >100at index "<<index<<endl;
    }

}

//Question 2
for(int i=0;i<ARRAYSIZE;++i){
    cout<<x[i]<<" = Array Number\n"<<endl;
MemoryLocation(&x[i]);
cout<<&x[i]<<" = memory location\n"<<endl;



//Question 3 Pass by Value
PassByValue(x[i]);



}



//Question 4 Enter Integer
int scalar=0;
cout<<"Enter number to be used as scalar\n:"<<endl;
cin>>scalar;

//Question 5 Pass the array by reference and multiple by the scalar
int i=0;
int z[ARRAYSIZE];

PassByReference (&x[i]);
passscalarref (&scalar);
passzforcalc (&z[i]);


//Question 6 Print the Array and memory locations and pass the array by value
for(int i=0;i<ARRAYSIZE;++i){
        z[i]=x[i]*scalar;
cout<<z[i]<<" = numbers of array multiplied by scalar\n"<<endl;
cout<<&z[i]<<" = memory locations of array multiplied by scalar\n"<<endl;

//Question 6 Pass the new array by value

passsmvalue (z[i]);

}





{

    char tree[7][9]= {{'X','X','X','X','X','X','X','X','X'}, {'X','X','X','X','X','X','X','X','X'}, {'X','X','X','o','X','X','X','X','X'}, {'X','X','0','X','X','o','X','X','X'}, {'X','X','X','X','X','X','X','X','X'}, {'X','X','X','X','+','X','X','X','X'}, {'X','X','X','X','+','X','X','X','X'}};

    cout<<"    "<<tree [0][4]<<endl;
    cout<<"   "<<tree [1][3]<<tree [1][4]<<tree [1][5]<<endl;
    cout<<"  "<<tree [2][2]<<tree [2][3]<<tree [2][4]<<tree [2][5]<<tree [2][6]<<endl;
    cout<<" "<<tree [3][1]<<tree [3][2]<<tree [3][3]<<tree [3][4]<<tree [3][5]<<tree [3][6]<<tree [3][7]<<endl;
    cout<<tree [4][0]<<tree [4][1]<<tree [4][2]<<tree [4][3]<<tree [4][4]<<tree [4][5]<<tree [4][6]<<tree [4][7]<<tree [4][8]<<endl;
    cout<<"    "<<tree [5][4]<<endl;
    cout<<"    "<<tree [6][4]<<endl;


}

}


















