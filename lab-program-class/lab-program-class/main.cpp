#include <iostream>


using namespace std;
#include "labinfo.h"

void LabInfo(){
  cout<<"Cian Baynes"<<endl;
  cout<<"Lab Using Classes\n\n"<<endl;
}
//Below the code has been commented out as per task 5 of the lab and copied and pasted into
//two new files. One of the files is a .h and one of the files is a .cpp
//The code still builds and runs

/*class labinfo{

    public:
    string Name;
    string labid;
     void setdate(int daydate, int monthdate, int yeardate){
        day=daydate;
        month=monthdate;
        year=yeardate;
     }
    int getday(){
    return day;
    }
    int getmonth(){
    return month;
    }
    int getyear(){
    return year;
    }
void printinfo(){
    cout<<Name<<endl;
    cout<<labid<<endl;
//    cout<<"Date: "<<day<<"."<<month<<"."<<year<<endl;
//The above is commented out because it was used in task 4 of the lab but
//when the variables of the class were set to private this section of code
//could not run

}

private:
    int day;
    int month;
    int year;


    };
*/
int main()
{
    LabInfo();




    labinfo labinfo1;
    labinfo1.Name = "Fred West";
    labinfo1.labid = "Lab 4";
//    labinfo1.day = 12;
//    labinfo1.month = 02;
//    labinfo1.year = 2020;
//The above was commented out after task 4 of the lab as they were then set to private
    labinfo1.printinfo();
    labinfo1.setdate(12,2,2021);
    cout<<"Date: "<<labinfo1.getday()<<"."<<labinfo1.getmonth()<<"."<<labinfo1.getyear()<<endl;




    }




