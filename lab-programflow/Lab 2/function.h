void LabInfo(){
//Task 1

cout<< "Cian Baynes"<< endl;
cout<< "Lab 2"<<endl;
}

void LabInfo1(int x, int y){
//Task 2

    if (x>y){
        cout<<"The largest value is "<<x<<endl;

    }
    else{
        cout<<"The largest value is "<<y<<endl;
    }
}
void Numberlarge(){
//Task 3
    int num=0;

cout<<"\n\nEnter a number between 1 and 100"<< endl;
cin>>num;

if (num>=1 && num<=100){
    cout<<"The number is within range\n\n"<<endl;
}
    else{
        cout<<"The number is outside of the range\n\n"<<endl;
    }
}
void radius(){
//Task 5
    float Pi=3.14159;
    float Rad=0;
    float Area=0;
cout<<"\n\nEnter the radius of the circle that you would like the area to?"<<endl;
cin>>Rad;
    Area=(Pi*Rad*Rad);
cout<<"The area of the circle is "<<Area<<endl;

    }
void rectangle(){
//Task 6
    int length=0;
    int height=0;
    int recarea=0;

cout<<"\n\nEnter the height of the rectangle"<<endl;
cin>>height;
cout<<"Enter the length of the rectangle"<<endl;
cin>>length;

    recarea=(length*height);
cout<<"The area of the rectangle is "<<recarea<<endl;


}
void tempertaure(){
//Task 7
    int temp=0;
    int hum=0;

cout<<"\n\nEnter the humidity"<<endl;
cin>>hum;
cout<<"Enter the temperature"<<endl;
cin>>temp;

if ((temp>=95) || (hum>=90)){
    cout<<"ALARM ALARM, The temperature or humidity is outside of range"<<endl;
}
else {
    cout<<"The temperature and humidity are within range\n\n"<<endl;
system("pause");
}


}
void RadiusLoop(){
//Task 8

float radi=0;
float PI=3.14159;
float area=0;



for (radi=1; radi<=120; ++radi){
area=(PI*radi*radi);
 cout<<area<<" 1-120"<<endl;
}
}
void Tempconversion(){
//Task 9
float temp=0;
float cel=0;
float fahr=0;
char convert=0;

cout<<"\n\nEnter temperature to convert"<<endl;
cin>>temp;

fahr=((temp * 9/5) + 32);
cel= ((temp - 32) * 5/9);

cout<<"Type a for celsius to fahrenheit conversion\nType b for fahrenheit to celsius conversion\n"<<endl;
cin>>convert;
 switch(convert){
  case 'a':
       cout<<"The temperature is "<<fahr<<"F\n\n"<<endl;
        break;
   case 'b':
        cout<<"The temperature is "<<cel<<"C\n\n"<<endl;
        break;

}
system("pause");
}
void evennumbers(){
//Task 10

int even=0;

for (int num1=0; num1<=1000; ++num1){
if (even=(num1%2==0)){
 cout<<num1<<endl;
}
}
}
void oddnumbers(){
//Task 11
int odd=0;
int oddnum1=0;
int oddnum2=0;

cout<<"\n\nEnter number 1:"<<endl;
cin>>oddnum1;
cout<<"Enter number 2:"<<endl;
cin>>oddnum2;

cout<<"The odd numbers between the two numbers entered are:"<<endl;
for (oddnum1; oddnum1<=oddnum2; ++oddnum1){
if (odd=(oddnum1%2==1)){
 cout<<oddnum1<<endl;
}
}
}
void q11array(){
//Task 12
int x[6];
x[0]=0;
x[1]=0;
x[2]=0;
x[3]=0;
x[4]=0;
x[5]=0;


cout<<"Please enter first number of 6 numbers for the array"<<endl;
cin>>x[0];
cout<<"Please enter second number of 6 numbers for the array"<<endl;
cin>>x[1];
cout<<"Please enter third number of 6 numbers for the array"<<endl;
cin>>x[2];
cout<<"Please enter fourth number of 6 numbers for the array"<<endl;
cin>>x[3];
cout<<"Please enter fifth number of 6 numbers for the array"<<endl;
cin>>x[4];
cout<<"Please enter sixth number of 6 numbers for the array"<<endl;
cin>>x[5];

cout<<"\nThe odd numbers in the array are:"<<endl;
for (int i=0; i<6; ++i){
if (x[i]%2==1){
cout<<x[i]<<endl;
}
}
}

void randomnumbers(){
//Task 13
float v1=0;
float v2=0;
float v3=0;
float v4=0;
float v5=0;
float v6=0;

v1=rand()%10;
v2=rand()%1000+1;
v3=rand()%50+185;
v4=rand()%100+1087;
v5=rand()%165+35;
v6=rand()%19872;

cout<<"\n\nThe random numbers are: "<<v1<<" "<<v2<<" "<<v3<<" "<<v4<<" "<<v5<<" "<<v6<<endl;
}

void question14(){
//Task 14

/* Print the numbers 5 through 9: */
int i=5;
while (i < 10){
 cout <<i<<endl;
 i++;
}


/* Finding the sum 1 + 2 + 3 + ... + 20 */
i = 1;
int sum =0;
while (i<=20)
{
 sum = sum + i;
 i = i + 1;
}

cout << "The sum = " <<sum<<endl;
/* Average a list of grades terminated by -1 */
sum = 0;
int count = 0;
int grade=0;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0)
 cout << "Average is " << (double) sum / count;
}

void Question15(){
//Task 15

for (int i=0; i<10; i++){
    cout<<"finished"<<endl;
    }

int i=0;
while (i<10){
        ++i;
    cout<<"finished"<<endl;

}
int x=0;
do {
    cout<<"finished"<<endl;
    ++x;
    }while(x<10);
}






