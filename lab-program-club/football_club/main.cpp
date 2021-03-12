#include <iostream>
#include <iomanip>
using namespace std;
#include "football_club.h"
#include "player.h"

int main()
{
 footballClub footballClub1("GMIT", "Galway");
 footballClub footballClub2 ("Red");


    cout <<"Clubname: "<< footballClub1.getClubname() <<", District: " << footballClub1.getDistrict()<<endl;
    cout <<"Clubname: "<< footballClub1.getClubname() <<", District: " << footballClub1.getDistrict()<< ", Strip Colour: " << footballClub2.getStripColour()<< endl;

 Player Player1("Cian", "Baynes");
 Player Player2("Cian", "Baynes", 876330989, "Winger");

    cout<<"Forename: "<<Player1.getForename()<<", Surname: "<<Player1.getSurname()<<endl;
    cout<<"Forename: "<<Player1.getForename()<<", Surname: "<<Player1.getSurname()<<", Phone Number: "<<setw(10)<<setfill('0')<<Player2.getMobileNumber()<<", Position:"<<Player2.getPosition()<<endl;

    //int sizeTeam=40;
    Player squad[40];
    Player team[15];
    //int player=0;

    squad[0].setName("John Murphy");  //Setting John Murphy to 0 in the squad (max 40)
    squad[1].setName("Pat O'Brien"); //Setting John Murphy to 1 in the squad (max 40)
    squad[2].setName("Joe Healy");    //Setting Joe Healy to 0 in the squad (max 40)
    squad[0].setDOB("21/03/1989");    //Setting John Murphy's DOB



    footballClub1.addPlayer(squad[0], 1); //Adding John Murphy to the squad in position 1 on the team (Max 15)
    footballClub1.addPlayer(squad[2], 3); //Adding John Murphy to the squad in position 3 on the team (max 15)
    footballClub1.addPlayer(squad[1], 2); //Adding John Murphy to the squad in position 2 on the team (max 15)




   // for(int i=0; i<sizeTeam; ++i){
     //   player1[i].setMobileNumber(i);
      //  player1[i].setName("");
       // player1[1].setDOB("80");

     //   }





return 0;
}
