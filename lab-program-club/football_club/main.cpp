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

return 0;
}
