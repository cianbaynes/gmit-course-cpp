#include <iostream>

using namespace std;



class Player{
private:
    int playnumber;
    string forename;
    string surname;
    string position;
    string mobileNumber;
    int dob;

public:
    Player();
    Player(int playnumber, string forename, string surname);
    Player(int playnumber, string forename, string surname, int mobileNumber, string position);

    void printPlayerInfo();
    string getForename();
    string getSurname();
    void setName(string name);
    void setName(string forename,string surname);

    void setplaynumber(int playnumber);
    int getplaynumber();

    void setPosition(string position);
    string getPosition();
    void setMobileNumber(string mobileNumber);
    string getMobileNumber();


    void setDOB(int dob);
    int getDOB();

};

