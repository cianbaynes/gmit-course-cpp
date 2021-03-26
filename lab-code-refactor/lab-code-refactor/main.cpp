#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test(){

/*
string galwayTeam[2][]=   {{"Ruairi", "Lavelle"},
                            {"Eoghan", "Kerin"},
                            {"Sean Andy", "Ó Ceallaigh"},
                            {"David", "Wynne"},
                            {"Gary", "O'Donnell"},
                            {"Gareth", "Bradshaw"},
                            {"Johnny", "Heaney"},
                            {"Thomas", "Flynn"},
                            {"Ciarán", "Duggan"},
                            {"Michael", "Daly"},
                            {"Johnathan", "Duane"},
                            {"Eamon", "Brannigan"},
                            {"Barry", "McHugh"},
                            {"Padraig", "Cunningham"},
                            {"Antaine", "Ó Laoí"}}

*/

}




int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");
    club.setmanager("Tom Smith"); //setting the manager name

    string clubName = club.getClubname();
    clubName = club.getDistrict();
    cout << clubName<< endl;

    //Printing out the manager name
    string manager = club.getmanager();
    manager = club.getmanager();
    cout<<manager<<endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    int playnumber;
    string firstName, secondName, dob, position, mobile;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>playnumber>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();

    //READING DATA FROM A FILE
  /*  infile.open("teamTeam.csv", ios::in);
    i = 0; //reset i
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
//            club.addPlayerToTeam(playerTemp, i);
        }
        //increments
        i =i+1;
    }*/

    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    /*Below will print out 1-15 in the teamSquad excel sheet. This must be kept ordered on order to print the
    correct information. If the excel file is updated the numbers must be updated*/
    cout<<"TEAM"<<endl;
    club.printTeam();




    return 0;
}
