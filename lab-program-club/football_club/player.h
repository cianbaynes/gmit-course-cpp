#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED





class Player{
private:
    string forename;
    string surname;
    string position;
    int mobileNumber;
    string Name;
    string DOB;



public:
 Player(string forename, string surname){
this->forename=forename;
this->surname=surname;

}

 Player(string forename, string surname, int mobileNumber, string position){
 this->forename=forename;
 this->surname=surname;
 this->mobileNumber=mobileNumber;
 this->position=position;

 }

    Player(){

    }
    void printPlayerInfo(){
    }
    string getForename(){
    return forename;
    }
    string getSurname(){
    return surname;
    }
    int getMobileNumber(){
    return mobileNumber;
    }
    string getPosition(){
    return position;
    }
    string getName(){
    return Name;
    }
    string getDOB(){
    return DOB;
    }

    void setForename(string forename){
    }
    void setSurname(string surname){
    }
    void setMobileNumber(int mobileNumber){
    }
    void setPosition(string position){
    }
    void setName(string Name){
    }
    void setDOB(string Year){

    }

};
#endif // PLAYER_H_INCLUDED
