//#ifndef FOOTBALL_CLUB_H_INCLUDED
//#define FOOTBALL_CLUB_H_INCLUDED
#include "player.h"




class footballClub{
private:
    string clubname;
    string district;
    string stripColour;
    //int sizeTeam=23;
    Player squad[40];
    Player team[15];

public:
 footballClub(string clubname, string district){
this->clubname=clubname;
this->district=district;
}
footballClub(string stripColour){
this->stripColour=stripColour;
}
    void printInfo(){
    }
    string getClubname(){
    return clubname;
    }
    string getDistrict(){
    return district;
    }
    string getStripColour(){
    return stripColour;
    }

    void setClubname(string clubname){
    }
    void setDistrict(string district){
    }
    void setStripColour(string stripColour){
    }

    void addPlayer(Player temp, int position){

    team[position].setName(temp.getName()); // This adds the fucntionality of adding the player to the team
    team[position].setDOB(temp.getDOB());  //Adding DOB to the player

    }
};
//#endif // FOOTBALL_CLUB_H_INCLUDED
