class labinfo{

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
