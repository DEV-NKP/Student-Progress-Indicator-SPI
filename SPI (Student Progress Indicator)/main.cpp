///NOTE:PLEASE ENSURE THAT YOUR CONSOLE BOX IS FULL SCREEN AND FONT SIZE '20' WITH FONT STYLE 'CONSOLAS'.

///NOTE: ADMINSTRATOR PASSWORD IS : passwordadmin

///"THANK YOU FOR BEING WITH US."-TEAM DELTA

///////////////////////////////headers//////////////////////

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<ctime>
#include<cmath>
#include<windows.h>
#include <climits>
#include <limits>
#include<cstdio>
#include<cstdlib>

using namespace std;
///////////////////////////////////define/////////////////////
#define ENTER 13
#define UP 72
#define DOWN 80

/////////////////////gotoxy and color////////////////////////////////
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;



void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console,CursorPosition);
}
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}
/////////////////////////////////functions//////////////////////
void time();
void time1();
void loginoption();
void showallmark();
void addstudent();
void modstudent();
void indistudent();
void showallmarks();
void exit();
int login();
void registr();
void viewall();
void dels();
void searchfaculty();
void showallmarkad();
void adminlog();
void deletefaculty();
void mainmenu();
int main();
void coverpage();
void menus();
void showindis();
/////////////////////////////////////class///////////////////////////////////////
class aiub
{
protected:
string name;
string id;
};
class student:public aiub
{
protected:
double q1,q2,q3,assignment,attend,perform,written,bonus,mid,a,b;
double q4,q5,q6,assignment2,attend2,perform2,written2,bonus2,finaly,x,y,result;
string gpa,gpam,gradem;
string grade;
public:

    //////////////////////////////////////////////student access//////////////////////////////////////////////
void setstudent()
{
system("cls");
system("color B");

time();
int count=0;
string sid,name1,id1,id2,name2;
char sname[100];

int i;




gotoXY(27,5);

             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";


string line0 = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
int x0=0,y0=51;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];
	Beep(18014, 2);
	Sleep(5);
	x0++;
	y0++;
};


string line02 = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
int x02=0,y02=96;
while ( line02[x02] != '\0')
{gotoXY(y02,8);
	cout << line02[x02];
	Beep(18014, 2);
	Sleep(5);

	x02++;
	y02--;
};



string line01 = "* This is For Student Use *";
int x01=0,y01=61;
while ( line01[x01] != '\0')
{gotoXY(y01,7);
	cout << line01[x01];
	Beep(18014, 2);
	Sleep(5);
	x01++;
	y01++;
};



gotoXY(51,8);
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";

string line1 = "Enter Your Name : ";
int x=0,y=51;
while ( line1[x] != '\0')
{gotoXY(y,11);
	cout << line1[x];
	Beep(7, 2);
	Sleep(15);

	x++;
	y++;
};



fflush(stdin);
    gets(sname);


if(stricmp(sname,"")==0 || stricmp(sname," ")==0)
{
mainmenu();
}

int rat=0;
while ( sname[rat] != '\0')
{
    if(sname[rat] == ' ')
    {
        sname[rat]='`';
    }

	rat++;
};

gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";

string line2 = "Enter Your ID No : ";
int x1=0,y1=51;
while ( line2[x1] != '\0')
{gotoXY(y1,13);
	cout << line2[x1];
	Beep(7, 2);
	Sleep(15);

	x1++;
	y1++;
};
getline(cin,sid);

if(sid==""||sid==" ")
{
mainmenu();
}

int rat1=0;
while ( sid[rat1] != '\0')
{
    if(sid[rat1] == ' ')
    {
        sid[rat1]='`';
    }

	rat1++;
};


ifstream ssm("studentm.aiub");
ifstream sf("studentf.aiub");

   while(sf>>name1>>id1>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
{
      if(sid==id1&&sname==name1)
{
count++;
}

}
sf.close();
while(ssm>>name2>>id2>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
{
    if(sid==id2&&sname==name2)
    {
     count++;

    }

}
ssm.close();


gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";

char a=177, b=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<a;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<b;

  q++;
Sleep( 80 );
 }
if(count==0)
{
    cout<<"\a";
        gotoXY(30,30);
        cout<<"***************************************************************************************";
        gotoXY(40,31);
        cout<<"!!!CAUTION!!!! This user NAME or ID is not found in our database...";
         gotoXY(31,32);
        cout<<"For more information Please inform your faculty.... press any key for previous page :) ";
        gotoXY(30,33);
        cout<<"****************************************************************************************";
        getch();
    mainmenu();
}



}

/////////////////////////////////////////////////////////////setmidmarks//////////////////////////////////////////////////////////////

void setmidterm()
{
    char id1[100];
    char another='y';


while ( another == 'Y'|| another=='y' )

    {
    system("CLS");
   SetColor(10);
time();


int i;




             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

            gotoXY(0,5); printf("\xCC"); // Left inside upper corner
            for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
            gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "=========================";
int x0=0,y0=61;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);
	x0++;
	y0++;
};

string line1 = "=========================";
int x1=0,y1=85;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "Enter midterm numbers";
int x2=0,y2=63;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);

	x2++;
	y2++;
};


gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";


string line3 = "1)Enter Student ID No                 : ";
int x3=0,y3=50;
while ( line3[x3] != '\0')
{
    gotoXY(y3,9);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(15);

	x3++;
	y3++;
};
fflush(stdin);
gets(id1);
   if(stricmp(id1,"")==0 || stricmp(id1," ")==0)
                        {
                        addstudent();
                        }

   int mx1=0;
   while ( id1[mx1] != '\0')
{
    if(id1[mx1] == '`')
    {
cout<<"\a";
          gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR Student ID. Press Enter For Continue :(***";
        getch();
 setmidterm();
    }


	mx1++;
};



int ratt=0;
while ( id1[ratt] != '\0')
{
    if(id1[ratt] == ' ')
    {
        id1[ratt]='`';
    }

	ratt++;
};





id=id1;
int count=0;
string idm;
ifstream addm("studentm.aiub");
                        while(addm>>name>>idm>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
                        {
                                if(id==idm)
                                {

                                   count=1;
                                }
                        }
addm.close();

                      if(count!=0)
                      {
cout<<"\a";

gotoXY(30,30);
cout<<"                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                      ";
gotoXY(30,31);
cout<<"                    You Already Entered This Student Result :(                     ";
gotoXY(35,32);
cout<<"                    Press any key for previous page...                    ";
gotoXY(30,33);
cout<<"                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                      ";
getch();
addstudent();
                      }




  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";

  string line4 = "2)Enter Student Name                  : ";

int x4=0,y4=50;
while ( line4[x4] != '\0')
{
    gotoXY(y4,10);
	cout << line4[x4];
	Beep(7, 1);
	Sleep(15);

	x4++;
	y4++;
};

getline(cin,name);
   if(name==""||name==" ")
                        {
                        addstudent();
                        }


   int mx11=0;
   while ( name[mx11] != '\0')
{
    if(name[mx11] == '`')
    {
cout<<"\a";

          gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR Student NAME. Press Enter For Continue :(***";
getch();
 setmidterm();
    }


	mx11++;
};

int rat=0;
while ( name[rat] != '\0')
{
    if(name[rat] == ' ')
    {
        name[rat]='`';
    }

	rat++;
};
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line5 = "3)Enter 1st Quiz Number(out of 10)    : ";
int x5=0,y5=50;
while ( line5[x5] != '\0')
{
    gotoXY(y5,11);
	cout << line5[x5];
	Beep(7, 2);
	Sleep(15);

	x5++;
	y5++;
};
cin>>q1;
   if(q1==-1)
                        {
                        addstudent();
                        }


if(q1< 0 || q1> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");

setmidterm();
}

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }





  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line6 = "4)Enter 2nd Quiz Number(out of 10)    : ";
int x6=0,y6=50;
while ( line6[x6] != '\0')
{
    gotoXY(y6,12);
	cout << line6[x6];
	Beep(7, 1);
	Sleep(15);

	x6++;
	y6++;
};
cin>>q2;
   if(q2==-1)
                        {
                        addstudent();
                        }
if(q2< 0 || q2> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");
    setmidterm();
}

     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }


  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line7 = "5)Enter 3rd Quiz Number(out of 10)    : ";
int x7=0,y7=50;
while ( line7[x7] != '\0')
{
    gotoXY(y7,13);
	cout << line7[x7];
	Beep(7, 2);
	Sleep(15);

	x7++;
	y7++;
};

cin>>q3;
   if(q3==-1)
                        {
                        addstudent();
                        }
if(q3< 0 || q3> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");
    setmidterm();
}

      while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }



        if(q1 >= q2 && q1 >= q3)
    {
        a=q1;
        if(q2 >= q3)

    {
        b=q2;
    }
            else
        {
            b=q3;
        }
    }

    else if(q2 >= q1 && q2 >= q3)
    {
        a=q2;
        if(q1 >= q3)
        {
            b=q1;
        }
        else
        {
            b=q3;
        }
    }

    else if(q3 >= q1 && q3 >= q2)
    {
        a=q3;
        if(q1 >= q2)
        {
            b=q1;
        }
        else
        {
            b=q2;
        }
    }
      gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"                                                                           ";
    string line8 = "6)Enter Assignment Number(out of 20)  : ";
int x8=0,y8=50;
while ( line8[x8] != '\0')
{
    gotoXY(y8,14);
	cout << line8[x8];
	Beep(7, 1);
	Sleep(15);

	x8++;
	y8++;
};
cin>>assignment;
   if(assignment==-1)
                        {
                        addstudent();
                        }
if(assignment< 0 || assignment> 20)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-20)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setmidterm();
}


     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }




  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
    string line9 = "7)Enter Attendance Number(out of 10)  : ";
int x9=0,y9=50;
while ( line9[x9] != '\0')
{
    gotoXY(y9,15);
	cout << line9[x9];
	Beep(7, 2);
	Sleep(15);

	x9++;
	y9++;
};
cin>>attend;
   if(attend==-1)
                        {
                        addstudent();
                        }
if(attend< 0 || attend> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setmidterm();
}


     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }



  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line10 = "8)Enter Performance Number(out of 10) : ";
int x10=0,y10=50;
while ( line10[x10] != '\0')
{
    gotoXY(y10,16);
	cout << line10[x10];
	Beep(7, 1);
	Sleep(15);

	x10++;
	y10++;
};
cin>>perform;
   if(perform==-1)
                        {
                        addstudent();
                        }
if(perform< 0 || perform> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setmidterm();
}


     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }



  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line11 = "9)Enter Written Number(out of 40)     : ";
int x11=0,y11=50;
while ( line11[x11] != '\0')
{
    gotoXY(y11,17);
	cout << line11[x11];
	Beep(7, 2);
	Sleep(15);

	x11++;
	y11++;
};
cin>>written;
   if(written==-1)
                        {
                        addstudent();
                        }
if(written< 0 || written> 40)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-40)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setmidterm();
}


    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }




  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT(-100) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line12 = "10)Enter Bonus/Penalty(-) Number      : ";
int x12=0,y12=50;
while ( line12[x12] != '\0')
{
    gotoXY(y12,18);
	cout << line12[x12];
	Beep(7, 1);
	Sleep(15);

	x12++;
	y12++;
};
cin>>bonus;
   if(bonus==-100)
                        {
                        addstudent();
                        }

      while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setmidterm();

    }



    mid=a+b+assignment+attend+perform+written+bonus;
    if(mid<=100)
    {
gotoXY(30,30);
cout<<"                                                                                   ";

gotoXY(65,20);
cout<<"Result Of Mid    : "<<mid;
    }
    else
    {   cout<<"\a";

        gotoXY(30,30);
cout<<"                Wrong Input... Press any key to go in previous page...                ";
getch();
      addstudent();
    }
    if(mid>=90 && mid<=100)
    {
        gpam = "4.00";
        gradem = "A+";
    }
    else if(mid>=85 && mid<90)
    {
        gpam = "3.75";
        gradem = "A";
    }
    else if(mid>=80 && mid<85)
    {
        gpam = "3.50";
        gradem = "B+";
    }
    else if(mid>=75 && mid<80)
    {
        gpam = "3.25";
        gradem = "B";
    }
    else if(mid>=70 && mid<75)
    {
        gpam = "3.00";
        gradem = "C+";
    }
    else if(mid>=65 && mid<70)
    {
        gpam = "2.75";
        gradem = "C";
    }
    else if(mid>=60 && mid<65)
    {
        gpam = "2.50";
        gradem = "D+";
    }
    else if(mid>=50 && mid<60)
    {
        gpam = "2.25";
        gradem = "D";
    }
    else if(mid<50)
    {
        gpam = "0.00";
        gradem = "F";
    }
    else
    {   cout<<"\a";

        gotoXY(45,30);
        cout<<"oops... Wrong Input... Press any key to go in previous page...";
        getch();
        addstudent();
    }
gotoXY(64,21);
cout<<"CGPA is   : "<<gpam;
gotoXY(64,22);
cout<<"GRADE is  : "<<gradem;
ofstream stum("studentm.aiub",ios::app);
stum<<name<<' '<<id<<' '<<a<<' '<<b<<' '<<assignment<<' '<<attend<<' '<<perform<<' '<<written<<' '<<bonus<<' '<<mid<<' '<<gradem<<' '<<gpam<<endl;
gotoXY(30,30);
cout<<"                                    ***********                                     ";
gotoXY(26,31);
cout<<"                                    *******SAVED*******                                     ";
gotoXY(30,32);
cout<<"                                    ***********                                     ";
cout<<"\a";
gotoXY(50,34);
     cout<< "ADD ANOTHER RECORD...(Y for yes/ enter for no)";
     another=getche();
       stum.close();
        }

     addstudent();

}

/////////////////////////////////////////////////////////////setfinalmarks//////////////////////////////////////////////////////////////
void setfinalterm()
{

        char another='y';
        while ( another == 'Y'|| another=='y' )
    {
        system("CLS");
SetColor(10);
char eno;
    int nil=0;
        char id2[100];
time();


int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "=========================";
int x0=0,y0=61;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "=========================";
int x1=0,y1=85;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "Enter finalterm numbers";
int x2=0,y2=62;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);

	x2++;
	y2++;
};


  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";


string line3 = "1)Enter Student ID No                 : ";
int x3=0,y3=50;
while ( line3[x3] != '\0')
{
    gotoXY(y3,9);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(15);

	x3++;
	y3++;
};

fflush(stdin);
    gets(id2);


                        if(stricmp(id2,"")==0 || stricmp(id2," ")==0)
                        {
                        addstudent();
                        }

   int mx11=0;
   while ( id2[mx11] != '\0')
{
    if(id2[mx11] == '`')
    {
cout<<"\a";

          gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR Student ID. Press Enter For Continue :(***";
getch();
 setfinalterm();
    }


	mx11++;
};



int ratt=0;
while ( id2[ratt] != '\0')
{
    if(id2[ratt] == ' ')
    {
        id2[ratt]='`';
    }

	ratt++;
};

id=id2;
int count=0;
string idf;
ifstream addf("studentf.aiub");
while(addf>>name>>idf>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
                        {
                                if(id==idf)
                                {

                                   count=1;
                                }
                        }

                      if(count!=0)
                      {
cout<<"\a";

gotoXY(30,30);
cout<<"                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                      ";
gotoXY(30,31);
cout<<"                    You Already Entered This Student Result :(                     ";
gotoXY(35,32);
cout<<"                    Press any key for previous page...                    ";
gotoXY(30,33);
cout<<"                    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                      ";
getch();
addstudent();
                      }

gotoXY(30,30);
cout<<"                                                                                                   ";


float mida,mid=0;
string ida,namea,name;

                        ifstream searchu("studentm.aiub");
                        while(searchu>>namea>>ida>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mida>>gradem>>gpam)
                        {
                                if(id==ida)
                                {
                                     mid=mida;

                                 nil++;
                                 name=namea;

                                }

                        }
                        searchu.close();

                        if (nil!=0)
                        {



string line41 = "2)Student Name Is                     : ";

int x41=0,y41=50;
while ( line41[x41] != '\0')
{
    gotoXY(y41,10);
	cout << line41[x41];
	Beep(7, 1);
	Sleep(15);

	x41++;
	y41++;
};

int rat1=0;
while ( name[rat1] != '\0')
{
    if(name[rat1] == '`')
    {
        name[rat1]=' ';
    }

	rat1++;
};
gotoXY(90,10);
cout<<name;

int rat3=0;
while ( name[rat3] != '\0')
{
    if(name[rat3] == ' ')
    {
        name[rat3]='`';
    }
	rat3++;
};

                        }


      if(nil==0)
      {
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";

  string line4 = "2)Enter Student Name                  : ";

int x4=0,y4=50;
while ( line4[x4] != '\0')
{
    gotoXY(y4,10);
	cout << line4[x4];
	Beep(7, 1);
	Sleep(15);
	x4++;
	y4++;
};
getline(cin,name);
   if(name==""||name==" ")
                        {
                        addstudent();
                        }


   int mx1=0;
   while ( name[mx1] != '\0')
{
    if(name[mx1] == '`')
    {
cout<<"\a";

          gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR Student NAME. Press Enter For Continue :(***";
getch();
 setfinalterm();
    }


	mx1++;
};



int rat=0;
while ( name[rat] != '\0')
{
    if(name[rat] == ' ')
    {
        name[rat]='`';
    }

	rat++;
};
      }
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line5 = "3)Enter 1st Quiz Number(out of 10)    : ";
int x5=0,y5=50;
while ( line5[x5] != '\0')
{
    gotoXY(y5,11);
	cout << line5[x5];
	Beep(7, 2);
	Sleep(15);

	x5++;
	y5++;
};
cin>>q4;
   if(q4==-1)
                        {
                        addstudent();
                        }
if(q4< 0 || q4> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
 gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");
    setfinalterm();
}
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line6 = "4)Enter 2nd Quiz Number(out of 10)    : ";
int x6=0,y6=50;
while ( line6[x6] != '\0')
{
    gotoXY(y6,12);
	cout << line6[x6];
	Beep(7, 1);
	Sleep(15);

	x6++;
	y6++;
};
cin>>q5;
   if(q5==-1)
                        {
                        addstudent();
                        }
if(q5< 0 || q5> 10)
{
    cout<<"\a";

   gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
 gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");
    setfinalterm();
}


    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"BEST TWO WILL BE COUNTED FROM THE QUIZ 1, QUIZ 2, QUIZ 3...";
string line7 = "5)Enter 3rd Quiz Number(out of 10)    : ";
int x7=0,y7=50;
while ( line7[x7] != '\0')
{
    gotoXY(y7,13);
	cout << line7[x7];
	Beep(7, 2);
	Sleep(15);

	x7++;
	y7++;
};

cin>>q6;
   if(q6==-1)
                        {
                        addstudent();
                        }
if(q6< 0 || q6> 10)
{
    cout<<"\a";

   gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
 gotoXY(30,32);
    cout<<"                                                                                              ";
    gotoXY(40,32);
    cout<<"                  Press any key for previous page...                 ";
    getch();
    system("CLS");
    setfinalterm();
}



    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }


        if(q4 >= q5 && q4 >= q6)
    {
        x=q4;
        if(q5 >= q6)

    {
        y=q5;
    }
            else
        {
            y=q6;
        }
    }

    else if(q5 >= q4 && q5 >= q6)
    {
        x=q5;
        if(q4 >= q6)
        {
            y=q4;
        }
        else
        {
            y=q6;
        }
    }

    else if(q6 >= q4 && q6 >= q5)
    {
        x=q6;
        if(q4 >= q5)
        {
            y=q4;
        }
        else
        {
            y=q5;
        }
    }
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"                                                                         ";
string line8 = "6)Enter Assignment Number(out of 20)  : ";
int x8=0,y8=50;
while ( line8[x8] != '\0')
{
    gotoXY(y8,14);
	cout << line8[x8];
	Beep(7, 1);
	Sleep(15);

	x8++;
	y8++;
};
cin>>assignment2;
   if(assignment2==-1)
                        {
                        addstudent();
                        }
if(assignment2< 0 || assignment2> 20)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-20)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setfinalterm();
}

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line9 = "7)Enter Attendance Number(out of 10)  : ";
int x9=0,y9=50;
while ( line9[x9] != '\0')
{
    gotoXY(y9,15);
	cout << line9[x9];
		Beep(7, 2);
		Sleep(15);

	x9++;
	y9++;
};
cin>>attend2;
   if(attend2==-1)
                        {
                        addstudent();
                        }
if(attend2< 0 || attend2> 10)
{
    cout<<"\a";

   gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setfinalterm();
}

     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line10 = "8)Enter Performance Number(out of 10) : ";
int x10=0,y10=50;
while ( line10[x10] != '\0')
{
    gotoXY(y10,16);
	cout << line10[x10];
	Beep(7, 1);
	Sleep(15);

	x10++;
	y10++;
};
cin>>perform2;
   if(perform2==-1)
                        {
                        addstudent();
                        }
if(perform2< 0 || perform2> 10)
{
    cout<<"\a";

    gotoXY(30,30);
    cout<<"                         Please enter a number between (1-10)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setfinalterm();
}

     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-1) :)***";
  gotoXY(40,32);
cout<<"                                                             ";
string line11 = "9)Enter Written Number(out of 40)     : ";
int x11=0,y11=50;
while ( line11[x11] != '\0')
{
    gotoXY(y11,17);
	cout << line11[x11];
	Beep(7, 2);
	Sleep(15);

	x11++;
	y11++;
};
cin>>written2;
   if(written2==-1)
                        {
                        addstudent();
                        }
if(written2< 0 || written2> 40)
{
    cout<<"\a";

   gotoXY(30,30);
    cout<<"                         Please enter a number between (1-40)...                       ";
    gotoXY(57,32);
    cout<<"Press any key for previous page...";
    getch();
    system("CLS");
    setfinalterm();
}

     while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A INPUT (-100) :)***";
  gotoXY(40,32);
cout<<"                                                               ";
string line12 = "10)Enter Bonus/Penalty(-) Number      : ";
int x12=0,y12=50;
while ( line12[x12] != '\0')
{
    gotoXY(y12,18);
	cout << line12[x12];
	Beep(7, 1);
	Sleep(15);

	x12++;
	y12++;
};
cin>>bonus2;
   if(bonus2==-100)
                        {
                        addstudent();
                        }

        while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
         cout<<"\a";
         gotoXY(30,30);
        cout << "                     OOPS... you take invalid number please take a valid number next time :(";
         gotoXY(40,32);
        cout << "                                  Press any key to continue...                                     ";
        getch();
      setfinalterm();

    }

finaly=x+y+assignment2+attend2+perform2+written2+bonus2;
gotoXY(30,30);
cout<<"                                                                      ";
gotoXY(55,20);
cout<<"Mid Number is     : "<<mid;


     if(nil==0)
     {
         cout<<"\a";

        gotoXY(30,30);
        cout<<"         OOPS... You haven't inputed the midterm number of this ID... :(                  ";
        gotoXY(25,32);
        cout<<"                   Do you want to continue with this number ?(Y for yes/enter for no)";
       eno=getche();
       if(eno=='y'||eno=='Y')
       {
        gotoXY(30,30);
        cout<<"                                                                                         ";
        gotoXY(30,32);
        cout<<"                                                                                         ";
       }
       else
       {
           cout<<"\a";

             gotoXY(30,34);
              cout<<"            OK.. I will clean this page.. please press any key.....";
              getch();
              system("cls");
              setfinalterm();

       }
     }


    if(finaly<=100)
    {
        gotoXY(55,21);
cout<<"Result Of Final   : "<<finaly;
    }
    else
    {
        cout<<"\a";

gotoXY(30,30);
cout<<"                Wrong Input... Press any key to go in previous page... :(             ";
getch();
    addstudent();
    }

result=((mid*0.4)+(finaly*0.6));
gotoXY(55,22);
cout<<"Result in percentage is : "<<result;
    if(result>=90 && result<=100)
    {
         gpa = "4.00";
        grade = "A+";
    }
    else if(result>=85 && result<90)
    {
                gpa = "3.75";
        grade = "A";
    }
    else if(result>=80 && result<85)
    {
                 gpa = "3.50";
        grade = "B+";
    }
    else if(result>=75 && result<80)
    {
                 gpa = "3.25";
        grade = "B";
    }
    else if(result>=70 && result<75)
    {
                 gpa = "3.00";
        grade = "C+";
    }
    else if(result>=65 && result<70)
    {
                 gpa = "2.75";
        grade = "C";
    }
    else if(result>=60 && result<65)
    {
                 gpa = "2.50";
        grade = "D+";
    }
    else if(result>=50 && result<60)
    {
                 gpa = "2.25";
        grade = "D";
    }
    else if(result<50)
    {
                 gpa = "0.00";
        grade = "F";
    }
    else
    {   cout<<"\a";

        gotoXY(30,30);
        cout<<"  OOPS!!!  Wrong Input... Press any key to go in previous page... :(           ";
        getch();
        addstudent();
    }
    gotoXY(55,23);
cout<<"CGPA is            : "<<gpa;
gotoXY(55,24);
cout<<"GRADE is           : "<<grade;
ofstream stuf("studentf.aiub",ios::app);
stuf<<name<<' '<<id<<' '<<x<<' '<<y<<' '<<assignment2<<' '<<attend2<<' '<<perform2<<' '<<written2<<' '<<bonus2<<' '<<mid<<' '<<finaly<<' '<<result<<' '<<grade<<' '<<gpa<<endl;
gotoXY(30,30);
cout<<"                                    ***********                                     ";
gotoXY(26,31);
cout<<"                                    *******SAVED*******                                     ";
gotoXY(30,32);
cout<<"                                    ***********                                     ";
cout<<"\a";
gotoXY(50,34);
     cout<< "ADD ANOTHER RECORD...(Y for yes/ enter for no)";

     another=getche();
     stuf.close();
     }

     addstudent();

}

/////////////////////////////////////////////////////////////getmidtermmarks//////////////////////////////////////////////////////////////
void getmidterm()
{
int p=13,p1=1;


ifstream inputm("studentm.aiub");
while(inputm>>name>>id>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
{
int col=3;
int col1=9;
    int rat=0;

while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};

if(mid<50)
{
    col=12;
}
if(mid>=50&&mid<90)
{
    col=2;
}
if(mid>=90)
{
    col=14;
}


SetColor(col);
gotoXY(0,p);
cout<<p1<<". "<<name;
SetColor(4);
gotoXY(25,p);
cout<<"|";

    int ratt=0;

while ( id[ratt] != '\0')
{
    if(id[ratt] == '`')
    {
        id[ratt]=' ';

    }

	ratt++;
};


SetColor(col);
gotoXY(27,p);
cout<<id;
SetColor(4);
gotoXY(44,p);
cout<<"|";
SetColor(col);
gotoXY(49,p);
cout<<a;
SetColor(4);
gotoXY(58,p);
cout<<"|";
SetColor(col);
gotoXY(63,p);
cout<<b;
SetColor(4);
gotoXY(70,p);
cout<<"|";
SetColor(col);
gotoXY(77,p);
cout<<assignment;
SetColor(4);
gotoXY(85,p);
cout<<"|";
SetColor(col);
gotoXY(89,p);
cout<<attend;
SetColor(4);
gotoXY(95,p);
cout<<"|";
SetColor(col);
gotoXY(101,p);
cout<<perform;
SetColor(4);
gotoXY(110,p);
cout<<"|";
SetColor(col);
gotoXY(116,p);
cout<<written;
SetColor(4);
gotoXY(125,p);
cout<<"|";
if(bonus>0)
{
   col1=10;
}
if(bonus<0)
{
    col1=4;
}

SetColor(col1);
gotoXY(127,p);
cout<<"+("<<bonus<<")";
SetColor(4);
gotoXY(135,p);
cout<<"|";
SetColor(col);
gotoXY(143,p);
cout<<mid<<endl;
p++;
p1++;

}
inputm.close();
SetColor(4);
}

/////////////////////////////////////////////////////////////getfinaltermmarks//////////////////////////////////////////////////////////////

void getfinalterm()
{
int p=13,p1=1;




ifstream inputf("studentf.aiub");
while(inputf>>name>>id>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
{
int colf=3;
int colft=9;
    int rat=0;

while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};



if(result<50)
{
    colf=12;
}

if(result>=50&&result<90)
{
    colf=2;
}

if(result>=90)
{
    colf=14;
}


SetColor(colf);
gotoXY(1,p);
cout<<p1<<". ";
SetColor(colf);
gotoXY(4,p);
cout<<name;
SetColor(4);
gotoXY(25,p);
cout<<"|";


    int ratt=0;

while ( id[ratt] != '\0')
{
    if(id[ratt] == '`')
    {
        id[ratt]=' ';

    }

	ratt++;
};


SetColor(colf);
gotoXY(27,p);
cout<<id;
SetColor(4);
gotoXY(42,p);
cout<<"|";
SetColor(colf);
gotoXY(46,p);
cout<<x;
SetColor(4);
gotoXY(51,p);
cout<<"|";
SetColor(colf);
gotoXY(54,p);
cout<<y;
SetColor(4);
gotoXY(60,p);
cout<<"|";
SetColor(colf);
gotoXY(66,p);
cout<<assignment2;
SetColor(4);
gotoXY(73,p);
cout<<"|";
SetColor(colf);
gotoXY(76,p);
cout<<attend2;
SetColor(4);
gotoXY(82,p);
cout<<"|";
SetColor(colf);
gotoXY(87,p);
cout<<perform2;
SetColor(4);
gotoXY(95,p);
cout<<"|";
SetColor(colf);
gotoXY(100,p);
cout<<written2;
SetColor(4);
gotoXY(105,p);
cout<<"|";
if(bonus2>0)
{
   colft=10;
}
if(bonus2<0)
{
    colft=4;
}

SetColor(colft);
gotoXY(106,p);
cout<<"+("<<bonus2<<")";
SetColor(4);
gotoXY(113,p);
cout<<"|";
SetColor(colf);
gotoXY(114,p);
cout<<mid;
SetColor(4);
gotoXY(120,p);
cout<<"|";
SetColor(colf);
gotoXY(122,p);
cout<<finaly;
SetColor(4);
gotoXY(127,p);
cout<<"|";
SetColor(colf);
gotoXY(129,p);
cout<<result;
SetColor(4);
gotoXY(135,p);
cout<<"|";
SetColor(colf);
gotoXY(136,p);
cout<<gpa;
SetColor(4);
gotoXY(141,p);
cout<<"|";
SetColor(colf);
gotoXY(144,p);
cout<<grade<<endl;
p++;
p1++;

}

inputf.close();
SetColor(4);
}
//////////////////////////////////////////////search mid for student///////////////////////////
void searchstudentms()
{

system("color E");
                        int count=0;
                        char findid[100];

                        time();
                        int i;




             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "You can see a student's individual Result here";
int x2=0,y2=51;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};


gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,11);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(5);

	x3++;
	y3++;
};


fflush(stdin);
gets(findid);
                          if(stricmp(findid,"")==0 || stricmp(findid," ")==0)
                       {
                        showindis();
                           }
    int rat6=0;

while ( findid[rat6] != '\0')
{
    if(findid[rat6] == ' ')
    {
        findid[rat6]='`';

    }

	rat6++;
};


  gotoXY(30,30);
cout<<"                    Please wait... Searching your result...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }




                        ifstream searchms("studentm.aiub");
                        while(searchms>>name>>id>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
                        {
                                if(findid==id)
                                {
                                        count++;



gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found your result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is Your Result  ";
                                int x4=0,y4=62;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,13);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };





                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,14);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };

                               int rat=0;


while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};


                                gotoXY(61,15);
                                cout<<" Name        : "<<name;


                                int rat5=0;


while ( id[rat5] != '\0')
{
    if(id[rat5] == '`')
    {
        id[rat5]=' ';

    }

	rat5++;
};




                                gotoXY(61,16);
                                cout<<" ID          : "<<id;
                                gotoXY(61,17);
                                cout<<" Quiz 1      : "<<a;
                                gotoXY(61,18);
                                cout<<" Quiz 2      : "<<b;
                                gotoXY(61,19);
                                cout<<" Assignment  : "<<assignment;
                                gotoXY(61,20);
                                cout<<" Attendance  : "<<attend;
                                gotoXY(61,21);
                                cout<<" Performance : "<<perform;
                                gotoXY(61,22);
                                cout<<" Written     : "<<written;
                                gotoXY(61,23);
                                cout<<" Bonus       : "<<bonus;
                                gotoXY(61,24);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,25);
                                cout<<" Grade       : "<<gradem;
                                gotoXY(61,26);
                                cout<<" CGPA        : "<<gpam;
                                cout<<"\a";
                                gotoXY(30,31);
                                cout<<"                           Press any key to go in previous page...                        ";
                              getch();
                                }
                        }
                        if(count==0)
                        {


cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Your userID is not found in our database...            ";
gotoXY(25,32);
cout<<"Please kindly contact your faculty for more details. Press any key to go in previous page...";
gotoXY(30,33);
cout<<"                                                                                                ";

                        getch();

                        }

                      searchms.close();
                      showindis();
}

/////////////////////////////////////////////////////////////searchmidterm//////////////////////////////////////////////////////////////

void searchstudentm()
{

system("color E");
                        int count=0;
                        char findid[100];

                        time();
                        int i;




             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "You can see a student's individual result here";
int x2=0,y2=49;
while ( line2[x2] != '\0')
{
    gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};


gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,11);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(5);

	x3++;
	y3++;
};


fflush(stdin);
gets(findid);
                          if(stricmp(findid,"")==0 || stricmp(findid," ")==0)
                       {
                        indistudent();
                           }
    int rat6=0;

while ( findid[rat6] != '\0')
{
    if(findid[rat6] == ' ')
    {
        findid[rat6]='`';

    }

	rat6++;
};


  gotoXY(30,30);
cout<<"                    Please wait... Searching Student's Result...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }




                        ifstream searchm("studentm.aiub");
                        while(searchm>>name>>id>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
                        {
                                if(findid==id)
                                {
                                        count++;



gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found the student's result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is the Student Result  ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,13);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };





                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,14);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };

                               int rat=0;


while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};


                                gotoXY(61,15);
                                cout<<" Name        : "<<name;


                                int rat5=0;


while ( id[rat5] != '\0')
{
    if(id[rat5] == '`')
    {
        id[rat5]=' ';

    }

	rat5++;
};




                                gotoXY(61,16);
                                cout<<" ID          : "<<id;
                                gotoXY(61,17);
                                cout<<" Quiz 1      : "<<a;
                                gotoXY(61,18);
                                cout<<" Quiz 2      : "<<b;
                                gotoXY(61,19);
                                cout<<" Assignment  : "<<assignment;
                                gotoXY(61,20);
                                cout<<" Attendance  : "<<attend;
                                gotoXY(61,21);
                                cout<<" Performance : "<<perform;
                                gotoXY(61,22);
                                cout<<" Written     : "<<written;
                                gotoXY(61,23);
                                cout<<" Bonus       : "<<bonus;
                                gotoXY(61,24);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,25);
                                cout<<" Grade       : "<<gradem;
                                gotoXY(61,26);
                                cout<<" CGPA        : "<<gpam;
                                cout<<"\a";
                                gotoXY(30,31);
                                cout<<"                           Press any key to go in previous page...                        ";
                              getch();
                                }
                        }
                        if(count==0)
                        {


cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Your userID is not found in our database...            ";
gotoXY(25,32);
cout<<"                                  Press any key to go in previous page...";
gotoXY(30,33);
cout<<"                                                                                                ";

                        getch();

                        }

                      searchm.close();
                      indistudent();
}

/////////////////////////////////////////////////////////////searchfinalterm//////////////////////////////////////////////////////////////

void searchstudentf()
{

                        system("color E");
                        int count=0;
                        char findid[100];

                        time();
                        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "You can see a students individual result here";
int x2=0,y2=51;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};


gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(15);

	x3++;
	y3++;
};


fflush(stdin);
gets(findid);


                          if(stricmp(findid,"")==0 || stricmp(findid," ")==0)
                       {
                        indistudent();
                           }


    int rat7=0;

while ( findid[rat7] != '\0')
{
    if(findid[rat7] == ' ')
    {
        findid[rat7]='`';

    }

	rat7++;
};
gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }


                        ifstream searchf("studentf.aiub");
                        while(searchf>>name>>id>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
                        {
                                if(findid==id)
                                {
                                        count++;





gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found the student result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is the Student Result  ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };





                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };

                               int rat=0;
                                while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};


                                gotoXY(61,14);
                                cout<<" Name        : "<<name;

int rat8=0;
 while ( id[rat8] != '\0')
{
    if(id[rat8] == '`')
    {
        id[rat8]=' ';

    }

	rat8++;
};

                                gotoXY(61,15);
                                cout<<" ID          : "<<id;
                                gotoXY(61,16);
                                cout<<" Quiz 1      : "<<x;
                                gotoXY(61,17);
                                cout<<" Quiz 2      : "<<y;
                                gotoXY(61,18);
                                cout<<" Assignment  : "<<assignment2;
                                gotoXY(61,19);
                                cout<<" Attendance  : "<<attend2;
                                gotoXY(61,20);
                                cout<<" Performance : "<<perform2;
                                gotoXY(61,21);
                                cout<<" Written     : "<<written2;
                                gotoXY(61,22);
                                cout<<" Bonus       : "<<bonus2;
                                gotoXY(61,23);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,24);
                                cout<<" Finally     : "<<finaly;
                                gotoXY(61,25);
                                cout<<" Result      : "<<result;
                                gotoXY(61,26);
                                cout<<" Grade       : "<<grade;
                                gotoXY(61,27);
                                cout<<" CGPA        : "<<gpa;
                                cout<<"\a";

                                gotoXY(30,31);
                                cout<<"                           Press any key to go in previous page...                        ";
                                getch();
                                }
                        }
                        if(count==0)
                        {

cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Your userID is not found in our database...            ";
gotoXY(25,32);
cout<<"Please kindly contact your faculty for more details. Press any key to go in previous page...";
gotoXY(30,33);
cout<<"                                                                                                ";
                                getch();


                        }
                      searchf.close();
indistudent();
}
//////////////////////////////////////search final for student/////////////////////////////
void searchstudentfs()
{


                        system("color E");
                        int count=0;
                        char findid[100];

                        time();
                        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};

string line2 = "You can see your result here";
int x2=0,y2=56;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};


gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(15);

	x3++;
	y3++;
};


fflush(stdin);
gets(findid);


                          if(stricmp(findid,"")==0 || stricmp(findid," ")==0)
                       {
                        showindis();
                           }


    int rat7=0;

while ( findid[rat7] != '\0')
{
    if(findid[rat7] == ' ')
    {
        findid[rat7]='`';

    }

	rat7++;
};
gotoXY(30,30);
cout<<"                    Please wait... Searching your result...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }


                        ifstream searchfs("studentf.aiub");
                        while(searchfs>>name>>id>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
                        {
                                if(findid==id)
                                {
                                        count++;





gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found your result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is your Result  ";
                                int x4=0,y4=65;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };





                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };

                               int rat=0;
                                while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};


                                gotoXY(61,14);
                                cout<<" Name        : "<<name;

int rat8=0;
 while ( id[rat8] != '\0')
{
    if(id[rat8] == '`')
    {
        id[rat8]=' ';

    }

	rat8++;
};

                                gotoXY(61,15);
                                cout<<" ID          : "<<id;
                                gotoXY(61,16);
                                cout<<" Quiz 1      : "<<x;
                                gotoXY(61,17);
                                cout<<" Quiz 2      : "<<y;
                                gotoXY(61,18);
                                cout<<" Assignment  : "<<assignment2;
                                gotoXY(61,19);
                                cout<<" Attendance  : "<<attend2;
                                gotoXY(61,20);
                                cout<<" Performance : "<<perform2;
                                gotoXY(61,21);
                                cout<<" Written     : "<<written2;
                                gotoXY(61,22);
                                cout<<" Bonus       : "<<bonus2;
                                gotoXY(61,23);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,24);
                                cout<<" Finally     : "<<finaly;
                                gotoXY(61,25);
                                cout<<" Result      : "<<result;
                                gotoXY(61,26);
                                cout<<" Grade       : "<<grade;
                                gotoXY(61,27);
                                cout<<" CGPA        : "<<gpa;
                                cout<<"\a";

                                gotoXY(30,31);
                                cout<<"                           Press any key to go in previous page...                        ";
                                getch();
                                }
                        }
                        if(count==0)
                        {

cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Your userID is not found in our database...            ";
gotoXY(25,32);
cout<<"Please kindly contact your faculty for more details. Press any key to go in previous page...";
gotoXY(30,33);
cout<<"                                                                                                ";
                                getch();


                        }
                      searchfs.close();
showindis();
}
/////////////////////////////////////////////////////////////deletemidstudent//////////////////////////////////////////////////////////////

void deletestudentm()
{

        system("color E");
                    int count=0;
                    char delid[100];

                        time();
                        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};


string line2 = "You can delete a students result here";
int x2=0,y2=56;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(10);
	x2++;
	y2++;
};
gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(5);

	x3++;
	y3++;
};


fflush(stdin);
gets(delid);


                          if(stricmp(delid,"")==0 || stricmp(delid," ")==0)
                       {
                        dels();
                           }

int rat0=0;
while ( delid[rat0] != '\0')
{
    if(delid[rat0] == ' ')
    {
        delid[rat0]='`';

    }

	rat0++;
};
gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }


                    ifstream delm("studentm.aiub");
                        while(delm>>name>>id>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
                        {
                                if(delid==id)
                                {
                                count++;





gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found the student result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is the Student Result  ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };



                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };
    int rat=0;
    while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};

                                gotoXY(61,15);
                                cout<<" Name        : "<<name;


         int ratm=0;
    while ( id[ratm] != '\0')
{
    if(id[ratm] == '`')
    {
        id[ratm]=' ';

    }

	ratm++;
};


                                gotoXY(61,16);
                                cout<<" ID          : "<<id;
                                gotoXY(61,17);
                                cout<<" Quiz 1      : "<<a;
                                gotoXY(61,18);
                                cout<<" Quiz 2      : "<<b;
                                gotoXY(61,19);
                                cout<<" Assignment  : "<<assignment;
                                gotoXY(61,20);
                                cout<<" Attendance  : "<<attend;
                                gotoXY(61,21);
                                cout<<" Performance : "<<perform;
                                gotoXY(61,22);
                                cout<<" Written     : "<<written;
                                gotoXY(61,23);
                                cout<<" Bonus       : "<<bonus;
                                gotoXY(61,24);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,25);
                                cout<<" Grade       : "<<gradem;
                                gotoXY(61,26);
                                cout<<" CGPA        : "<<gpam;

                                }
                        }
                        if(count==0)
                        {

cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Student Result is not found in our database...                         ";
gotoXY(30,32);
cout<<"     Please kindly contact your faculty for more details. Press any key to go in previous page...  ";
gotoXY(30,33);
cout<<"                                                                                                               ";
                                getch();
dels();
                        }

    delm.close();
char choose;
cout<<"\a";

gotoXY(45,31);
cout<<" You want to delete this result?(press y for yes/press any key for no): ";
choose=getche();
if(choose=='y')
{

  ofstream del("mid.spi",ios::app);
ifstream delma("studentm.aiub");
while(delma>>name>>id>>a>>b>>assignment>>attend>>perform>>written>>bonus>>mid>>gradem>>gpam)
{
if(id!=delid)
{
del<<name<<' '<<id<<' '<<a<<' '<<b<<' '<<assignment<<' '<<attend<<' '<<perform<<' '<<written<<' '<<bonus<<' '<<mid<<' '<<gradem<<' '<<gpam<<endl;
}
}

    delma.close();
    del.close();



string namer,idr,ar,br,assignmentr,attendr,performr,writtenr, bonusr, midr, grademr, gpamr;
ofstream nil("studentm.aiub",ios::trunc);
ifstream ratri("mid.spi");


 while(ratri>>namer>>idr>>ar>>br>>assignmentr>>attendr>>performr>>writtenr>>bonusr>>midr>>grademr>>gpamr)
{

nil<<namer<<' '<<idr<<' '<<ar<<' '<<br<<' '<<assignmentr<<' '<<attendr<<' '<<performr<<' '<<writtenr<<' '<<bonusr<<' '<<midr<<' '<<grademr<<' '<<gpamr<<endl;

}

    nil.close();
    ratri.close();

    ofstream niltxt("mid.spi",ios::trunc);
    niltxt.close();



gotoXY(30,31);
    cout<<"                                                                                                                  ";
    gotoXY(30,31);
    cout<<"               Please wait, I will delete your selected data";



     int anu=0;
   for(anu=0;anu<=10;anu++)
   {
       cout<<".";
       Sleep(500);
   }
gotoXY(45,33);
    cout<<"*********************Deleted*********************";
    getch();

;
    system("cls");
    dels();

}
else
{
    dels();
}




}

/////////////////////////////////////////////////////////////deletefinalstudent//////////////////////////////////////////////////////////////

void deletestudentf()
{

                        system("color E");
                        int count=0;
                        char deltid[100];

                        time();
                        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "**************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "**************************************************";
int x1=0,y1=98;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};



string line2 = "You can delete a students result here";
int x2=0,y2=56;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};
     gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(10);

	x3++;
	y3++;
};



fflush(stdin);
gets(deltid);


                          if(stricmp(deltid,"")==0 || stricmp(deltid," ")==0)
                       {
                        dels();
                           }

int rat0=0;
while ( deltid[rat0] != '\0')
{
    if(deltid[rat0] == ' ')
    {
        deltid[rat0]='`';

    }

	rat0++;
};

                            gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";
 char az=177, bz=219;

 int p=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(p,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 p++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 50 );
 }




                    ifstream delf("studentf.aiub");
                        while(delf>>name>>id>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
                        {
                                if(deltid==id)
                                {
                                        count++;

gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found the student result. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color E");


                                string line4 = "   Here is the Student Result  ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };

                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };


int rat=0;
while ( name[rat] != '\0')
{
    if(name[rat] == '`')
    {
        name[rat]=' ';

    }

	rat++;
};

                                gotoXY(61,14);
                                cout<<" Name        : "<<name;


         int ratf=0;
    while ( id[ratf] != '\0')
{
    if(id[ratf] == '`')
    {
        id[ratf]=' ';

    }

	ratf++;
};

                                gotoXY(61,15);
                                cout<<" ID          : "<<id;
                                gotoXY(61,16);
                                cout<<" Quiz 1      : "<<x;
                                gotoXY(61,17);
                                cout<<" Quiz 2      : "<<y;
                                gotoXY(61,18);
                                cout<<" Assignment  : "<<assignment2;
                                gotoXY(61,19);
                                cout<<" Attendance  : "<<attend2;
                                gotoXY(61,20);
                                cout<<" Performance : "<<perform2;
                                gotoXY(61,21);
                                cout<<" Written     : "<<written2;
                                gotoXY(61,22);
                                cout<<" Bonus       : "<<bonus2;
                                gotoXY(61,23);
                                cout<<" Mid         : "<<mid;
                                gotoXY(61,24);
                                cout<<" Finally     : "<<finaly;
                                gotoXY(61,25);
                                cout<<" Result      : "<<result;
                                gotoXY(61,26);
                                cout<<" Grade       : "<<grade;
                                gotoXY(61,27);
                                cout<<"CGPA         : "<<gpa;
                                }
                        }
                        if(count==0)
                        {
cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Student Result is not found in our database...             ";
gotoXY(30,32);
cout<<"     Please kindly contact your faculty for more details. Press any key to go in previous page...   ";
gotoXY(30,33);
cout<<"                                                                                                                   ";
                        getch();
                        dels();

                        }

    delf.close();
char choose;
cout<<"\a";

gotoXY(45,31);
cout<<" You want to delete this result?(press y for yes/press any key for no): ";
choose=getche();
if(choose=='y')
{


ofstream delt("final.spi",ios::app);
ifstream deltma("studentf.aiub");
while(deltma>>name>>id>>x>>y>>assignment2>>attend2>>perform2>>written2>>bonus2>>mid>>finaly>>result>>grade>>gpa)
{
if(id!=deltid)
{
delt<<name<<' '<<id<<' '<<x<<' '<<y<<' '<<assignment2<<' '<<attend2<<' '<<perform2<<' '<<written2<<' '<<bonus2<<' '<<mid<<' '<<finaly<<' '<<result<<' '<<grade<<' '<<gpa<<endl;
}
}

    deltma.close();
    delt.close();




string name2r,id2r,xr,yr,assignment2r,attend2r,perform2r,written2r, bonus2r, mid2r,finalyr, resultr,gradem2r, gpam2r;

ofstream nilf("studentf.aiub",ios::trunc);
ifstream ratrif("final.spi");


 while(ratrif>>name2r>>id2r>>xr>>yr>>assignment2r>>attend2r>>perform2r>>written2r>>bonus2r>>mid2r>>finalyr>>resultr>>gradem2r>>gpam2r)
{

nilf<<name2r<<' '<<id2r<<' '<<xr<<' '<<yr<<' '<<assignment2r<<' '<<attend2r<<' '<<perform2r<<' '<<written2r<<' '<<bonus2r<<' '<<mid2r<<' '<< finalyr<<' '<<resultr<<' '<<gradem2r<<' '<<gpam2r<<endl;

}

    nilf.close();
    ratrif.close();

   ofstream nilftxt("final.spi",ios::trunc);
    nilftxt.close();





    gotoXY(30,31);
    cout<<"                                                                                                                  ";
    gotoXY(30,31);
    cout<<"               Please wait, I will delete your selected data";

     int anu=0;
   for(anu=0;anu<=10;anu++)
   {
       cout<<".";
       Sleep(500);
   }


    gotoXY(45,33);
    cout<<"   *********************Deleted*********************";
getch();


system("cls");
    dels();


}
else
{
    dels();
}



}

};


student s;
string admin;
/////////////////////////////////////////////main page///////////////////////
int main()
{
coverpage();

system("cls");
cout<<endl<<endl<<endl<<endl<<endl;
cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
Sleep(15);
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
Sleep(15);
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
Sleep(15);
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
Sleep(15);
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
Sleep(15);
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
Sleep(15);
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;

int i=1;
while(i<=15)
{system("cls");
cout<<endl<<endl<<endl<<endl<<endl;

cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;

//cout<<"                                      AMERICAN                INTERNATIONAL        UNIVERSITY              BANGLADESH       "<<endl;


SetColor(i);


Sleep(80);

i++;
}
system("cls");
SetColor(1);
cout<<endl<<endl<<endl<<endl<<endl;

cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
Sleep(5);
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
Sleep(5);
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
Sleep(5);
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
Sleep(5);
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
Sleep(5);
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
Sleep(5);
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;
SetColor(9);
Sleep(15);
cout<<"                                      AMERICAN                INTERNATIONAL        UNIVERSITY              BANGLADESH       "<<endl;
cout<<"                                      --------                -------------        ----------              ----------       "<<endl;

SetColor(2);

string line1 = "Where";
int x1=0,y1=39;
while ( line1[x1] != '\0')
{
    gotoXY(y1,25);
	cout << line1[x1];
	Beep(7, 2);
	Sleep(25);

	x1++;
	y1++;
};


SetColor(4);
string line11 = "Leaders";
int x11=0,y11=65;
while ( line11[x11] != '\0')
{
    gotoXY(y11,25);
	cout << line11[x11];
	Beep(7, 2);
	Sleep(25);

	x11++;
	y11++;
};


SetColor(4);
string line111 = "Are";
int x111=0,y111=87;
while ( line111[x111] != '\0')
{
    gotoXY(y111,25);
	cout << line111[x111];
	Beep(7, 2);
	Sleep(25);

	x111++;
	y111++;
};


SetColor(2);
string line1111 = "Created";
int x1111=0,y1111=109;
while ( line1111[x1111] != '\0')
{
    gotoXY(y1111,25);
	cout << line1111[x1111];
	Beep(7, 2);
	Sleep(25);

	x1111++;
	y1111++;
};

SetColor(6);
string line111103 = "Press Any Key To Continue...";
int x111103=0,y111103=60;
while ( line111103[x111103] != '\0')
{
    gotoXY(y111103,34);
	cout << line111103[x111103];
	Beep(7, 2);
	Sleep(25);

	x111103++;
	y111103++;
};



getch();
system("cls");
SetColor(10);
gotoXY(0,2);
cout<<"                                                                         _.-."<<endl;
gotoXY(0,3);
cout<<"                                                                     .-.  `) |  .-. "<<endl;
gotoXY(0,4);
cout<<"                                                                 _.'`. .~./ * \\.~. .`'._"<<endl;
gotoXY(0,5);
cout<<"                                                             .-'`.'-'.'.-: TD :-.'.'-'.`'-."<<endl;
gotoXY(0,6);
cout<<"                                                              `'`'`'`'`   \\||/   `'`'`'`'`"<<endl;
gotoXY(0,7);
cout<<"                                                                          //\\\\"<<endl;
gotoXY(0,8);
cout<<"                                                                         //^^\\\\"<<endl;
gotoXY(0,9);
cout<<"                                                                         `'``'`"<<endl;

SetColor(6);
string line11110 = "Project:";
int x11110=0,y11110=72;
while ( line11110[x11110] != '\0')
{
    gotoXY(y11110,11);
	cout << line11110[x11110];
	Beep(7, 2);
	Sleep(25);

	x11110++;
	y11110++;
};
gotoXY(72,12);
cout<<"========"<<endl<<endl;


SetColor(12);
gotoXY(0,14);
cout<<"                                                               ********   *******    **"<<endl;
gotoXY(0,15);
cout<<"                                                              **//////   /**////**  /**"<<endl;
gotoXY(0,16);
cout<<"                                                             /**         /**   /**  /**"<<endl;
gotoXY(0,17);
cout<<"                                                             /*********  /*******   /**"<<endl;
gotoXY(0,18);
cout<<"                                                             ////////**  /**////    /**"<<endl;
gotoXY(0,19);
cout<<"                                                                    /**  /**        /**"<<endl;
gotoXY(0,20);
cout<<"                                                              ********   /**        /**"<<endl;
gotoXY(0,21);
cout<<"                                                             ////////    //         // "<<endl;
SetColor(12);
     gotoXY(50,25);
        cout<< "PLEASE WAIT A WHILE. ALL SYSTEM GET READY SOON.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

  gotoXY(50,25);
        cout<< "                                                             ";

        gotoXY(45,27);
        cout<< "                                                                        ";

    int len = 0,x, y=1;

    string text = "Please press any key to continue...:)";
    len = text.length();


 gotoXY(57,27);
    for ( x=0;x<len;x++)
    {
        SetConsoleTextAttribute(console, y);

       cout << text[x];
        y++;
        if ( y >14)
            y=1;
        Sleep(25);
    }
getch();
mainmenu();
}

//////////////////////////////////////////coverpage/////////////////////////////////////

void coverpage()
{

    system("cls");
    SetColor(3);

    gotoXY(48,1);
    cout<<"------------------------------------------------";
    gotoXY(50,2);
    cout<<"--------------------------------------------";
    gotoXY(62,3);
    cout<<"*** WELCOME TO AIUB ***";
    gotoXY(50,4);
    cout<<"--------------------------------------------";
    gotoXY(48,5);
    cout<<"------------------------------------------------";
    gotoXY(48,7);
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::";
    SetColor(12);
    gotoXY(66,8);
    cout<<"* TEAM DELTA *";
    SetColor(3);
    gotoXY(48,9);
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::";
    SetColor(14);
    gotoXY(48,11);
    cout<<" Project Name: STUDENT PROGRESS INDICATOR(SPI) ";

    SetColor(3);
    gotoXY(64,13);
    cout<<"*****************";
    SetColor(12);
    gotoXY(67,14);
    cout<<"Prepared by       ";
    SetColor(3);
    gotoXY(64,15);
    cout<<"*****************";
    SetColor(6);
    gotoXY(55,17);
    cout<<"***NILOY KANTI PAUL (20-41896-1)***";
    gotoXY(56,18);
    cout<<"**KAUSHIK BISWAS (20-41864-1)**";
    gotoXY(58,19);
    cout<<"*FAIZA TASNIM (19-41552-3)*";
    gotoXY(55,20);
    cout<<"*SHARIA TASNIM ADRITA (20-41895-1)*";
    SetColor(3);
    gotoXY(51,22);
    cout<<"------------------------------------------";
    SetColor(12);
    gotoXY(64,23);
    cout<<"* Project Details: *";
    SetColor(3);
    gotoXY(51,24);
    cout<<"------------------------------------------";


    gotoXY(45,26);
    cout<<"=> Here faculty member can add any student marks.";
     gotoXY(45,27);
    cout<<"=> Try to give a proper message for make this more user friendly.";
     gotoXY(45,28);
    cout<<"=> Use Some systemic sound.";
     gotoXY(45,29);
    cout<<"=> Secured with a great administrator access.";
     gotoXY(45,30);
    cout<<"=> Only registered students can see his/her section's marks.";


SetColor(10);
    gotoXY(28,33);
    cout<<"***NOTE:YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT FROM EVERY PAGE:)***";
SetColor(3);
    gotoXY(55,35);
    cout<<"Please press any key to continue...";

    getch();

}




/////////////////////////////////////////////////password////////////////////////////
string getpass( const string& prompt = " " )
  {
  string result;

  DWORD mode, count;
  HANDLE ih = GetStdHandle( STD_INPUT_HANDLE  );
  HANDLE oh = GetStdHandle( STD_OUTPUT_HANDLE );
  if (!GetConsoleMode( ih, &mode ))
    throw runtime_error(
      "getpass: You must be connected to a console to use this program."
      );
  SetConsoleMode( ih, mode & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT) );


  WriteConsoleA( oh, prompt.c_str(), prompt.length(), &count, NULL );
  char c;
  while (ReadConsoleA( ih, &c, 1, &count, NULL) && (c != '\r') && (c != '\n'))
    {
    if (c == '\b')
      {
      if (result.length())
        {
        WriteConsoleA( oh, "\b \b", 3, &count, NULL );
        result.erase( result.end() -1 );
        }
      }
    else
      {
      WriteConsoleA( oh, "*", 1, &count, NULL );
      result.push_back( c );
      }
    }
  SetConsoleMode( ih, mode );
  return result;
  }
///////////////////////////////////////////////// box////////////////////////////////

 void square(int X, int Y, int width, int height)
 {
  for (int set1 = 0; set1<height; set1++, Y++)
  {
  gotoXY(X, Y);
  if (set1 == 0 || set1 == height- 1) { for (int set2 = 0; set2<width; set2++) cout << char(177); continue; }
  cout << char(219); gotoXY(X + (width - 1), Y); cout << char(219);
  }
 }

//////////////////////////////////////////main menu/////////////////////////////////////////////
void mainmenu()
{
  int n;
system("CLS");
system("color 0B");
int choose=0, x=14;
string name,id,pass,dep,mail;


        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,5); printf("\xB9"); // Right inside upper corner



              gotoXY(0,12); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,12); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,33);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};


gotoXY(60,14);
cout << "----------------------------";
gotoXY(60,16);
cout << "----------------------------";
do{


	gotoXY(45,1);
    cout<<"===========================================================";
    gotoXY(45,2);
    cout<<">              Welcome To AIUB Progress Sheet             <";
    gotoXY(45,3);
    cout<<"===========================================================";

    time1();



        gotoXY(61,15);
		cout << "[1]. ADMIN ACCESS";
		gotoXY(61,18);
		cout << "[2]. FACULTY LOG IN";
		gotoXY(61,21);
		cout << "[3].   Sign UP";
		gotoXY(61,24);
		cout << "[4].   STUDENT";
		gotoXY(61,27);
		cout << "[5].    EXIT";

n = _getch();

        switch(n)
		{
		    case DOWN:
			if(choose+1<=4)
			{
				gotoXY(60,x);
				cout << "                            ";
				gotoXY(60,x+2);
                cout << "                            ";
				x+=3;

                gotoXY(60,x);
                cout << "----------------------------";
                gotoXY(60,x+2);
                cout << "----------------------------";
				choose++;
				break;
			}
		   case UP:
			if(choose-1>=0)
			{

				gotoXY(60,x);
				cout << "                            ";
				gotoXY(60,x+2);
                cout << "                            ";
				x-=3;

				gotoXY(60,x);
                cout << "----------------------------";
                gotoXY(60,x+2);
                cout << "----------------------------";
				choose--;
				break;
			}




		case ENTER:
			{
				if(choose==0)
				{


Start1:
    system("CLS");

    int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";

  gotoXY(40,31);
    cout<<"YOU CAN GO BACK TO PREVIOUS PAGE BY TAKING A BLANK INPUT...";

    system("color 0B");
    gotoXY(57,2);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoXY(57,3);
    cout<<">      Administrator Log in      <";
    gotoXY(57,4);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    time1();


    square(30,12, 100,3);
    gotoXY(35,13);

SetColor(2);
  try {

     admin = getpass( "Enter password for admin menu : " );


    }

  catch (exception& e)
    {
    cerr << e.what();

    }


SetColor(4);
                     if(admin==" "||admin=="")
                       {
                        mainmenu();
                           }
       if(admin!="passwordadmin")
    {
        cout<<"\a";

        gotoXY(32,30);
        cout<<"********************************************************************************";
        gotoXY(32,31);
        cout<<"!!!CAUTION!!!! Administrator Password is Wrong...PRESS any key FOR TRY Again :) ";
        gotoXY(32,32);
        cout<<"********************************************************************************";
        getch();
        system("cls");
        goto Start1;
    }
 system("CLS");
 system("color c");





gotoXY(40,5);
cout<<"            ___________________________________________________"<<endl;
gotoXY(40,6);
cout<<"           |                                                   |"<<endl;
gotoXY(40,7);
cout<<"           |     _________________________________________     |"<<endl;
gotoXY(40,8);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,9);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,10);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,11);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,12);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,13);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,14);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,15);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,16);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,17);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,18);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,19);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,20);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,21);
cout<<"           |    |_________________________________________|    |"<<endl;
gotoXY(40,22);
cout<<"           |                                                   |"<<endl;
gotoXY(40,23);
cout<<"           |___________________________________________________|"<<endl;
gotoXY(40,24);
cout<<"                   \\___________________________________/"<<endl;
gotoXY(40,25);
cout<<"                ___________________________________________"<<endl;
gotoXY(40,26);
cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_"<<endl;
gotoXY(40,27);
cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_"<<endl;
gotoXY(40,28);
cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_"<<endl;
gotoXY(40,29);
cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_"<<endl;
gotoXY(40,30);
cout<<" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_"<<endl;
gotoXY(40,31);
cout<<":-------------------------------------------------------------------------:"<<endl;
gotoXY(40,32);
cout<<"`---._.-------------------------------------------------------------._.---'"<<endl;


   gotoXY(57,13);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(57,14);
   cout<<"Log in Successful. Welcome back ADMIN  :)";
   gotoXY(57,15);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(60,17);
   cout<<"Please press any key to continue...";
   getch();
   system("CLS");

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


    gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. ADMINISTRATOR SYSTEM ARE BEING READY SOON.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);

          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 30 );
    }



    adminlog();
    getch();
				}
				if(choose==1)
				{

if(login()==1)
{
   system("CLS");
   system("color c");



   gotoXY(40,5);
cout<<"            ___________________________________________________"<<endl;
gotoXY(40,6);
cout<<"           |                                                   |"<<endl;
gotoXY(40,7);
cout<<"           |     _________________________________________     |"<<endl;
gotoXY(40,8);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,9);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,10);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,11);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,12);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,13);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,14);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,15);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,16);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,17);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,18);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,19);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,20);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,21);
cout<<"           |    |_________________________________________|    |"<<endl;
gotoXY(40,22);
cout<<"           |                                                   |"<<endl;
gotoXY(40,23);
cout<<"           |___________________________________________________|"<<endl;
gotoXY(40,24);
cout<<"                   \\___________________________________/"<<endl;
gotoXY(40,25);
cout<<"                ___________________________________________"<<endl;
gotoXY(40,26);
cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_"<<endl;
gotoXY(40,27);
cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_"<<endl;
gotoXY(40,28);
cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_"<<endl;
gotoXY(40,29);
cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_"<<endl;
gotoXY(40,30);
cout<<" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_"<<endl;
gotoXY(40,31);
cout<<":-------------------------------------------------------------------------:"<<endl;
gotoXY(40,32);
cout<<"`---._.-------------------------------------------------------------._.---'"<<endl;


   gotoXY(65,13);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(65,14);
   cout<<"Successfully Logged in :)";
   gotoXY(65,15);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(60,17);
   cout<<"Please press any key to continue...";
   getch();
   system("CLS");

SetColor(12);

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;

     gotoXY(50,25);
        cout<< "PLEASE WAIT A WHILE. FACULTY SYSTEM ARE BEING READY SOON.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);

          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

  gotoXY(50,15);
        cout<< "                                                             ";

        gotoXY(45,17);
        cout<< "                                                                        ";


loginoption();
}
getch();
				}
				if(choose==2)
				{
				    Start:
system("CLS");

 int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,10); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,10); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";


  system("color 0B");


    gotoXY(58,2);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoXY(58,3);
    cout<<" Enter the Administrator Password ";
    gotoXY(58,4);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    gotoXY(35,8);
    cout<<"For signing up you must have to input the administrator password at first.";

    square(30,12, 100,3);
    gotoXY(35,13);

SetColor(2);
   try {

     admin = getpass( "Enter password for creating a new faculty account : " );
    }

  catch (exception& e)
    {
    cerr << e.what();

    }

SetColor(4);
                     if(admin==" "||admin=="")
                       {
                        mainmenu();
                           }
       if(admin!="passwordadmin")
    {
        cout<<"\a";

        gotoXY(32,30);
        cout<<"********************************************************************************";
        gotoXY(65,31);
        cout<<"!!!CAUTION!!!!!";
        gotoXY(40,32);
        cout<<"Administrator Password is Wrong...PLEASE ENTER FOR TRY Again :) ";
        gotoXY(32,33);
        cout<<"********************************************************************************";
        getch();
        system("cls");
        goto Start;
    }
     system("CLS");
   system("color c");



gotoXY(40,5);
cout<<"            ___________________________________________________"<<endl;
gotoXY(40,6);
cout<<"           |                                                   |"<<endl;
gotoXY(40,7);
cout<<"           |     _________________________________________     |"<<endl;
gotoXY(40,8);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,9);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,10);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,11);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,12);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,13);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,14);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,15);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,16);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,17);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,18);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,19);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,20);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,21);
cout<<"           |    |_________________________________________|    |"<<endl;
gotoXY(40,22);
cout<<"           |                                                   |"<<endl;
gotoXY(40,23);
cout<<"           |___________________________________________________|"<<endl;
gotoXY(40,24);
cout<<"                   \\___________________________________/"<<endl;
gotoXY(40,25);
cout<<"                ___________________________________________"<<endl;
gotoXY(40,26);
cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_"<<endl;
gotoXY(40,27);
cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_"<<endl;
gotoXY(40,28);
cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_"<<endl;
gotoXY(40,29);
cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_"<<endl;
gotoXY(40,30);
cout<<" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_"<<endl;
gotoXY(40,31);
cout<<":-------------------------------------------------------------------------:"<<endl;
gotoXY(40,32);
cout<<"`---._.-------------------------------------------------------------._.---'"<<endl;


   gotoXY(61,13);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(61,14);
   cout<<" Administrator Password Matched ";
   gotoXY(61,15);
   cout<<" New Faculty Members Can SignUp";
   gotoXY(61,16);
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   gotoXY(60,18);
   cout<<"Please press any key to continue...";
   getch();
registr();
system("CLS");
system("color c");


gotoXY(40,5);
cout<<"            ___________________________________________________"<<endl;
gotoXY(40,6);
cout<<"           |                                                   |"<<endl;
gotoXY(40,7);
cout<<"           |     _________________________________________     |"<<endl;
gotoXY(40,8);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,9);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,10);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,11);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,12);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,13);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,14);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,15);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,16);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,17);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,18);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,19);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,20);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,21);
cout<<"           |    |_________________________________________|    |"<<endl;
gotoXY(40,22);
cout<<"           |                                                   |"<<endl;
gotoXY(40,23);
cout<<"           |___________________________________________________|"<<endl;
gotoXY(40,24);
cout<<"                   \\___________________________________/"<<endl;
gotoXY(40,25);
cout<<"                ___________________________________________"<<endl;
gotoXY(40,26);
cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_"<<endl;
gotoXY(40,27);
cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_"<<endl;
gotoXY(40,28);
cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_"<<endl;
gotoXY(40,29);
cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_"<<endl;
gotoXY(40,30);
cout<<" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_"<<endl;
gotoXY(40,31);
cout<<":-------------------------------------------------------------------------:"<<endl;
gotoXY(40,32);
cout<<"`---._.-------------------------------------------------------------._.---'"<<endl;



gotoXY(67,13);
cout<<"~~~~~~~~~~~~~~~~~~~~~";
gotoXY(68,14);
cout<<"SIGN UP SUCCESSFUL.";
gotoXY(68,15);
cout<<" Please Log In Now ";
gotoXY(67,16);
cout<<"~~~~~~~~~~~~~~~~~~~~~";
gotoXY(60,18);
cout<<"Please press any key to continue...";

			getch();

			system("CLS");
			system("color 0B");
			mainmenu();
				}
				if(choose==3)
				{
					system("CLS");
                  s.setstudent();
system("CLS");
system("color c");
gotoXY(40,5);
cout<<"            ___________________________________________________"<<endl;
gotoXY(40,6);
cout<<"           |                                                   |"<<endl;
gotoXY(40,7);
cout<<"           |     _________________________________________     |"<<endl;
gotoXY(40,8);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,9);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,10);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,11);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,12);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,13);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,14);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,15);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,16);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,17);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,18);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,19);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,20);
cout<<"           |    |                                         |    |"<<endl;
gotoXY(40,21);
cout<<"           |    |_________________________________________|    |"<<endl;
gotoXY(40,22);
cout<<"           |                                                   |"<<endl;
gotoXY(40,23);
cout<<"           |___________________________________________________|"<<endl;
gotoXY(40,24);
cout<<"                   \\___________________________________/"<<endl;
gotoXY(40,25);
cout<<"                ___________________________________________"<<endl;
gotoXY(40,26);
cout<<"             _-'    .-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.  --- `-_"<<endl;
gotoXY(40,27);
cout<<"          _-'.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.  .-.-.`-_"<<endl;
gotoXY(40,28);
cout<<"       _-'.-.-.-. .---.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-`__`. .-.-.-.`-_"<<endl;
gotoXY(40,29);
cout<<"    _-'.-.-.-.-. .-----.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-----. .-.-.-.-.`-_"<<endl;
gotoXY(40,30);
cout<<" _-'.-.-.-.-.-. .---.-. .-------------------------. .-.---. .---.-.-.-.`-_"<<endl;
gotoXY(40,31);
cout<<":-------------------------------------------------------------------------:"<<endl;
gotoXY(40,32);
cout<<"`---._.-------------------------------------------------------------._.---'"<<endl;
gotoXY(57,13);
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
gotoXY(58,14);
cout<<"Your Name and Id are Found in Database:)";
gotoXY(57,15);
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
gotoXY(60,16);
cout<<"Please press any key to continue...";
getch();

 menus();
getch();
				}
				if(choose==4)
				{
				    cout<<"\a";

					char ex;
gotoXY(30,33);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();
					break;
				}
			}
		}
		}
	}while(n!=4);

getch();
}
////////////////////////////////////////////admin login menu/////////////////////////////////////////////
void adminlog()
{
    int n1;


int choose1=0, x1=11;

system("CLS");
system("color c");

   int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) {printf("\xCD"); Sleep(3);}// Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner


             for(i=1;i<36;i++){ gotoXY(146,i); printf("\xBA"); Sleep(3);}// Right vertical

             gotoXY(146,35); printf("\xBC"); // Lower right corner
             for(i=145;i>=0;i--){ gotoXY(i,35);  printf("\xCD"); Sleep(3);} // Lower right left horizontal
             gotoXY(0,35); printf("\xC8"); // Lower left corner

             for(i=34;i>0;i--){ gotoXY(0,i); printf("\xBA"); Sleep(3);} // Left vertical

             gotoXY(0,4); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=145;i++) {gotoXY(i,4); printf("\xCD"); Sleep(3);} // Inside upper left right horizontal
             gotoXY(146,4); printf("\xB9"); // Right inside upper corner

             gotoXY(146,9); printf("\xB9"); // Right inside upper corner
             for(i=145;i>=1;i--) {gotoXY(i,9); printf("\xCD");Sleep(3);} // Inside upper left right horizontal
             gotoXY(0,9); printf("\xCC"); // Left inside upper corner



gotoXY(51,11);
cout << "---------------------------------------------";
gotoXY(51,13);
cout << "---------------------------------------------";
do{system("color c");

    gotoXY(62,1);
    cout<<"========================";
    gotoXY(63,2);
    cout<<"* For ADMIN Use Only * ";
    gotoXY(62,3);
    cout<<"========================";



    int tDate; int tMonth; int tYear;

    int hour; int min;
    int sec;

    time_t result;
    result = time(NULL);
    struct tm* tp = localtime(&result);
    tMonth = tp->tm_mon + 1;

    tDate  = tp->tm_mday;

    tYear  = tp->tm_year + 1900;

    hour   = tp->tm_hour;

    min    = tp->tm_min;

    sec    = tp->tm_sec;


    gotoXY(59,5);
    cout<<"******************************";
    gotoXY(66,6);
    cout<<"Date :"<< tDate <<"/" << tMonth <<"/"<< tYear;
    gotoXY(67,7);
    cout<<"Time :"<< hour<<":"<< min << ":" << sec;
    gotoXY(59,8);
    cout<<"******************************";

    gotoXY(58,12);
    cout<<"[1]. Display All Student Result";
    gotoXY(55,15);
    cout<<"[2]. Display All Faculty Information";
    gotoXY(53,18);
    cout<<"[3]. Display Specific Faculty Information";
    gotoXY(57,21);
    cout<<"[4]. Remove A Faculty Information";
    gotoXY(57,24);
    cout<<"[5]. Remove All Faculty Information";
    gotoXY(59,27);
    cout<<"[6]. Remove All Student Result";
    gotoXY(67,30);
    cout<<"[7]. Main Menu";
    gotoXY(69,33);
    cout<<"[8]. EXIT";
     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=7)
			{
				gotoXY(51,x1);
				cout << "                                             ";
				gotoXY(51,x1+2);
                cout << "                                             ";
				x1+=3;

                gotoXY(51,x1);
                cout << "---------------------------------------------";
                gotoXY(51,x1+2);
                cout << "---------------------------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(51,x1);
				cout << "                                             ";
				gotoXY(51,x1+2);
                cout << "                                             ";
				x1-=3;

				gotoXY(51,x1);
                cout << "---------------------------------------------";
                gotoXY(51,x1+2);
                cout << "---------------------------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{
system("CLS");
showallmarkad();
getch();
system("cls");
				}
	if(choose1==1)
				{
system("CLS");
viewall();

getch();

system("cls");
				}

	if(choose1==2)
				{
system("CLS");
    searchfaculty();
getch();

system("cls");

				}

	if(choose1==3)
				{
system("CLS");
    deletefaculty();
			getch();
			system("cls");
	}
if(choose1==4)
				{
system("CLS");
    char choosef;

    int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              /*gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,11); printf("\xB9"); // Right inside upper corner*/

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
    gotoXY(50,2);
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    gotoXY(50,3);
cout<<">     Delete All Faculty Member Information   <";
    gotoXY(50,4);
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    cout<<"\a";


    gotoXY(35,10);
cout<<"Do you want to delete All Faculties?(Press y for yes/Press any key for no):";
choosef=getche();
if(choosef=='y')
{
   Start2:
    gotoXY(40,31);
cout<<"You can go back to previous page by take a blank input ";
        square(30,12, 100,3);
    gotoXY(35,13);

SetColor(2);
  try {

     admin = getpass( "Enter password for admin : " );


    }

  catch (exception& e)
    {
    cerr << e.what();

    }

SetColor(4);
                     if(admin==" "||admin=="")
                       {
                        adminlog();
                           }
       if(admin!="passwordadmin")
    {
        cout<<"\a";
        gotoXY(32,30);
        cout<<"                                                                                    ";
        gotoXY(32,31);
        cout<<"                                                                                    ";
        gotoXY(32,32);
        cout<<"                                                                                    ";
        gotoXY(32,30);
        cout<<"********************************************************************************";
        gotoXY(32,31);
        cout<<"!!!CAUTION!!! Administrator Password is Wrong...PRESS any key FOR TRY Again :) ";
        gotoXY(32,32);
        cout<<"********************************************************************************";
        getch();

        gotoXY(32,30);
        cout<<"                                                                                ";
        gotoXY(32,31);
        cout<<"                                                                                ";
        gotoXY(32,32);
        cout<<"                                                                                ";
        gotoXY(62,13);
        cout<<"                                                                                ";
       //system("cls");
        goto Start2;
    }


ofstream niltxtfac("database.aiub",ios::trunc);
    niltxtfac.close();
    gotoXY(30,31);
    cout<<"                                                                              ";
    gotoXY(40,30);
    cout<<"Please wait, I will delete your selected data";

     int anu=0;
   for(anu=0;anu<=10;anu++)
   {
       cout<<".";
       Sleep(500);
   }


   gotoXY(50,32);
   cout<<"ALL FACULTIES ARE DELETED SUCCESSFULLY :)";
  getch();

system("cls");
 adminlog();
}
else
{
    adminlog();
}




	}
if(choose1==5)
				{
system("CLS");
char chooses;


int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
    gotoXY(50,2);
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
    gotoXY(50,3);
cout<<">     Delete All Student Results     <";
    gotoXY(50,4);
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";

cout<<"\a";

gotoXY(35,10);
cout<<"Do you want to delete All Students Results?(Press y for yes/Press any key for no): ";

chooses=getche();
if(chooses=='y')
{
gotoXY(40,31);
cout<<"                                                        ";

Start3:

gotoXY(40,31);
cout<<"You can go back to previous page by take a blank input ";
        square(30,12, 100,3);
    gotoXY(35,13);

SetColor(2);
  try {

     admin = getpass( "Enter password for admin : " );


    }

  catch (exception& e)
    {
    cerr << e.what();

    }

SetColor(4);
                     if(admin==" "||admin=="")
                       {
                        adminlog();
                           }
       if(admin!="passwordadmin")
    {
        cout<<"\a";


        gotoXY(32,30);
        cout<<"                                                                                    ";
        gotoXY(32,31);
        cout<<"                                                                                    ";
        gotoXY(32,32);
        cout<<"                                                                                    ";

        gotoXY(32,30);
        cout<<"********************************************************************************";
        gotoXY(32,31);
        cout<<"!!!CAUTION!!! Administrator Password is Wrong...PRESS any key FOR TRY Again :) ";
        gotoXY(32,32);
        cout<<"********************************************************************************";
        getch();

        gotoXY(32,30);
        cout<<"                                                                                ";
        gotoXY(32,31);
        cout<<"                                                                                ";
        gotoXY(32,32);
        cout<<"                                                                                ";
        gotoXY(62,13);
        cout<<"                                                                                ";
       //system("cls");
        goto Start3;

    }


ofstream niltxtm("studentm.aiub",ios::trunc);
    niltxtm.close();

ofstream niltxtf("studentf.aiub",ios::trunc);
niltxtf.close();

gotoXY(30,31);
    cout<<"                                                                  ";
    gotoXY(40,30);
    cout<<"Please wait, I will delete your selected data";



     int anu=0;
   for(anu=0;anu<=10;anu++)
   {
       cout<<".";
       Sleep(500);
   }


    gotoXY(50,32);
    cout<<"ALL STUDENTS RESULT ARE DELETED SUCCESSFULLY :)";

getch();

system("cls");
	 adminlog();
}
else
{
    adminlog();
}



	}
    if(choose1==6)
				{

system("CLS");

SetColor(12);

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. ADMIN SYSTEM IS SHUTTING DOWN.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

  gotoXY(50,25);
        cout<< "                                                             ";

        gotoXY(45,27);
        cout<< "                                                                        ";



system("CLS");

mainmenu();

	getch();
	system("cls");
			}
    if(choose1==7)
				{
				    cout<<"\a";
				    system("CLS");


				        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corne

            gotoXY(1,29);
            cout<<"Notification Box :";

char ex;
gotoXY(63,1);
cout<<"!!!!!!!!!!!!!!!!!";
gotoXY(63 ,2);
cout<<">     EXIT?     <";
gotoXY(63,3);
cout<<"!!!!!!!!!!!!!!!!!";
gotoXY(50,30);
cout<<"Thank you for visiting our Software... ";

gotoXY(25,12);
cout<<"              DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
adminlog();
getch();
    break;
				}

			}

    }
    }
    }while(n1!=7);
    getch();
    system("cls");

}
/////////////////////////////////////////////////login ///////////////////////////////////////////////
int login()
{
    system("CLS");
        int count=0;
        string pass,u,p,n,m,d;
        char user[100];
        Start:


        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,5); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";


        time();

    gotoXY(59,7);
    cout<<"=============================";
    gotoXY(57,8);
    cout<<"****** Please Log In first ******";
    gotoXY(59,9);
    cout<<"=============================";
    gotoXY(56,13);

    cout<<"[1] Enter Your Verified Id          : ";
fflush(stdin);
    gets(user);



                          if(stricmp(user,"")==0 || stricmp(user," ")==0)
                       {
                        mainmenu();
}
int m1=0;
        while ( user[m1] != '\0')
{
    if(user[m1] == ' ')
    {
        user[m1]='`';



    }


	m1++;
};

  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";

    gotoXY(56,15);



    try {

     pass = getpass( "[2] Enter Your Verified Password    : " );


    }

  catch (exception& e)
    {
    cerr << e.what();

    }


                           if(pass==""||pass==" ")
                       {
                        mainmenu();
}
    int m10=0;
        while ( pass[m10] != '\0')
{
    if(pass[m10] == ' ')
    {
        pass[m10]='`';



    }


	m10++;
};

        ifstream input("database.aiub");
        while(input>>u>>p>>n>>m>>d)
        {
                if(u==user && p==pass)

                {
                    return 1;
                        count=1;

                }

    }
    if(count!=1)
    {
        cout<<"\a";

        gotoXY(35,30);
        cout<<"================================================================================";
        gotoXY(65,31);
        cout<<"!!!CAUTION!!!!!";
        gotoXY(55,32);
        cout<<"User Id or Password is Wrong. TRY Again :) ";
        gotoXY(35,33);
        cout<<"================================================================================";
        getch();
        system("CLS");
        goto Start;
    }
        input.close();

return 1;
}

////////////////////////////////////////////register////////////////////////////////////////
void registr()
{
system("cls");



system("color 9");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,5); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";


system("color 09");
        string regpass,ru,rp,mail,dep,name,u,p,n,m9,d;
int count=0;
        char reguser[100];
        gotoXY(1,2);
        time();
        gotoXY(58,7);
    cout<<"==============================";
    gotoXY(56,8);
    cout<<"***** Please Sign up first ******";
    gotoXY(58,9);
    cout<<"==============================";

    gotoXY(58,13);

        cout<<"[1]Enter The User ID        : ";

fflush(stdin);
    gets(reguser);
    if(stricmp(reguser,"")==0 || stricmp(reguser," ")==0)
                       {
                          mainmenu();
                       }
                       int mx1=0;

   while ( reguser[mx1] != '\0')
{
    if(reguser[mx1] == '`')
    {
cout<<"\a";

gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR User ID. Press Enter For Continue :(***";
        getch();
 registr();
    }


	mx1++;
};



        int m1=0;
        while ( reguser[m1] != '\0')
{
    if(reguser[m1] == ' ')
    {
        reguser[m1]='`';



    }


	m1++;
};


                        ifstream findfac("database.aiub");
                        while(findfac>>u>>p>>n>>m9>>d)
                        {
                                if(reguser==u)
                                {
                                        count=1;
                                }
                        }

                        if(count==1)
                        {
                            cout<<"\a";

                            gotoXY(30,30);
                            cout<<"          Sorry This User Is Already Registered In Our Faculty Database         ";
                            gotoXY(52,32);
                            cout<<"   Press Enter For Continue...";
                            getch();
                          mainmenu();
                        }





gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";
 gotoXY(58,14);
    try {


     regpass = getpass( "[2]Enter The Password       : " );


    }

  catch (exception& e)
    {
    cerr << e.what();

    }

                          if(regpass==""||regpass==" ")
                       {
                        mainmenu();
}
int mx11=0;
while ( regpass[mx11] != '\0')
{
    if(regpass[mx11] == '`')
    {
cout<<"\a";

gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR PASSWORD. Press Enter For Continue :(***";
        getch();
 registr();
    }


	mx11++;
};
        int m11=0;
        while ( regpass[m11] != '\0')
{
    if(regpass[m11] == ' ')
    {
        regpass[m11]='`';

    }


	m11++;
};
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";
        gotoXY(58,15);
        cout<<"[3]Enter The Name           : ";

        getline(cin,name);
                                  if(name==""||name==" ")
                       {
                        mainmenu();
}


int mx111=0;
   while ( name[mx111] != '\0')
{
    if(name[mx111] == '`')
    {
cout<<"\a";

gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR NAME. Press Enter For Continue :(***";
        getch();
 registr();
    }


	mx111++;
};



        int m=0;
        while ( name[m] != '\0')
{
    if(name[m] == ' ')
    {
        name[m]='`';



    }


	m++;
};
  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";
        gotoXY(58,16);
        cout<<"[4]Enter The Mail Address   : ";

getline(cin,mail);
                                if(mail==""||mail==" ")
                       {
                        mainmenu();
}

  int mx1111=0;
   while ( mail[mx1111] != '\0')
{
    if(mail[mx1111] == ' ')
    {
cout<<"\a";

gotoXY(40,30);
cout<<"***YOU CAN NOT USE space FOR MAIL. Press Enter For Continue :(***";
        getch();
 registr();
    }


	mx1111++;
};



  gotoXY(40,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT :)***";
        gotoXY(58,17);
        cout<<"[5]Enter The Department     : ";

getline(cin,dep);
                                if(dep==""||dep==" ")
                       {
                        mainmenu();
}

   int mx11111=0;
   while ( dep[mx11111] != '\0')
{
    if(dep[mx11111] == '`')
    {
cout<<"\a";
gotoXY(40,30);
cout<<"***YOU CAN NOT USE ` FOR DEPARTMENT. Press Enter For Continue :(***";
        getch();
 registr();
    }


	mx11111++;
};


        int m111=0;
        while ( dep[m111] != '\0')
{
    if(dep[m111] == ' ')
    {
        dep[m111]='`';

    }

	m111++;
};


        ofstream reg("database.aiub",ios::app);
        reg<<reguser<<' '<<regpass<<' '<<name<<' '<<mail<<' '<<dep<<endl;
        system("cls");
findfac.close();
}
////////////////////////////////////////// view all faculty for admin use only/////////////////////////////
void viewall()
{
    int k1=1,k=13;
    system("CLS");
    SetColor(12);





    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR FACULTY INFORMATION...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }


        string user,pass,u,p,n,m,d;
        system("cls");
        system("color e");

time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every Faculty Member Information Who Have logged in";
gotoXY(40,8);
cout<<"******************************************************************************";

gotoXY(0,10);
cout<<"=====================================================================================================================================================";
gotoXY(10,11);
cout<<"Id";
gotoXY(24,11);
cout<<"|";
gotoXY(36,11);
cout<<"Password";
gotoXY(53,11);
cout<<"|";
gotoXY(68,11);
cout<<"Name";
gotoXY(90,11);
cout<<"|";
gotoXY(106,11);
cout<<"Mail";
gotoXY(127,11);
cout<<"|";
gotoXY(135,11);
cout<<"Department";
gotoXY(0,12);
cout<<"=====================================================================================================================================================";


        ifstream input("database.aiub");
        while(input>>u>>p>>n>>m>>d)
        {
            int rat=0;
while ( n[rat] != '\0')
{
    if(n[rat] == '`')
    {
        n[rat]=' ';
    }

	rat++;
};
         int rat1=0;
while ( u[rat1] != '\0')
{
    if(u[rat1] == '`')
    {
        u[rat1]=' ';
    }

	rat1++;
};
         int rat2=0;
while ( p[rat2] != '\0')
{
    if(p[rat2] == '`')
    {
        p[rat2]=' ';
    }

	rat2++;
};

         int rat4=0;
while ( d[rat4] != '\0')
{
    if(d[rat4] == '`')
    {
        d[rat4]=' ';



    }

	rat4++;
};

SetColor(11);
gotoXY(1,k);
cout<<k1<<". ";
SetColor(10);
gotoXY(4,k);
cout<<u;




SetColor(14);
gotoXY(24,k);
cout<<"|";
SetColor(12);
gotoXY(26,k);
cout<<p;
SetColor(14);
gotoXY(53,k);
cout<<"|";
SetColor(10);
gotoXY(55,k);
cout<<n;
SetColor(14);
gotoXY(90,k);
cout<<"|";
SetColor(3);
gotoXY(92,k);
cout<<m;
SetColor(14);
gotoXY(127,k);
cout<<"|";
SetColor(10);
gotoXY(129,k);
cout<<d;
k++;
k1++;

        }

        input.close();
        cout<<"\a";
        SetColor(14);
cout<<"\n*****************************************************************************************************************************************************";
        cout<<"\n\n\t\t\t\t\t\t\tNo more records are available. :)";
        cout<<"\n\t\t\t\t\t\tPlease press any key to go in previous page.....";
        getch();
        adminlog();
}

/////////////////////////////////////////////menu for faculty members ///////////////////////////////////
void loginoption()
{

    int n1;


int choose1=0, x1=12;

system("CLS");
system("color 3");



        int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,31); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,31); printf("\xB9"); // Right inside lower corner

  gotoXY(1,32);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,33);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};




gotoXY(52,12);
cout << "---------------------------------------------";
gotoXY(52,14);
cout << "---------------------------------------------";
do{system("color 3");




    gotoXY(58,2);
    cout<<"================================";
    gotoXY(56,3);
    cout<<"******* For faculty use only *******";
    gotoXY(58,4);
    cout<<"================================";
    time1();
    gotoXY(56,13);
    cout<<"[1] For Add Any Result Of a Student";
    gotoXY(56,16);
    cout<<"[2] Show Student Result(Individual)";
    gotoXY(60,19);
    cout<<"[3] Display All Student Result";
    gotoXY(60,22);
    cout<<"[4] Delete Any Student Result";
    gotoXY(67,25);
    cout<<"[5] Main Menu";
    gotoXY(70,28);
    cout<<"[6] EXIT";
     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=5)
			{
				gotoXY(52,x1);
				cout << "                                             ";
				gotoXY(52,x1+2);
                cout << "                                             ";
				x1+=3;

                gotoXY(52,x1);
                cout << "---------------------------------------------";
                gotoXY(52,x1+2);
                cout << "---------------------------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(52,x1);
				cout << "                                             ";
				gotoXY(52,x1+2);
                cout << "                                             ";
				x1-=3;

				gotoXY(52,x1);
                cout << "---------------------------------------------";
                gotoXY(52,x1+2);
                cout << "---------------------------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{
system("CLS");
    addstudent();
    break;

				}
				if(choose1==1)
				{
   system("CLS");
indistudent();
    break;

				}
					if(choose1==2)
				{
system("CLS");
    showallmark();
    break;

				}
					if(choose1==3)
				{
system("CLS");
dels();
    break;

				}
					if(choose1==4)
				{
system("CLS");


SetColor(12);

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(50,25);
        cout<< "PLEASE WAIT A WHILE. FACULTY SYSTEM IS SHUTTING DOWN.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

  gotoXY(45,25);
        cout<< "                                                             ";

        gotoXY(45,27);
        cout<< "                                                                        ";



system("CLS");
mainmenu();
    break;

				}
					if(choose1==5)
				{
				    cout<<"\a";
char ex;
gotoXY(30,33);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,33);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,33);
cout<<"                                                                                                   ";
gotoXY(35,33);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();

    break;

				}
			}

    }
    }
    }while(n1!=5);
    getch();

}
///////////////////////////////////////add any student for faculty///////////////////////////////////
void addstudent()
{
int n1;


int choose1=0, x1=12;

system("CLS");
system("color 9");
   int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};

gotoXY(62,12);
cout << "----------------------";
gotoXY(62,14);
cout << "----------------------";
do{
        system("color 9");

    gotoXY(59,2);
    cout<<"****************************";
    gotoXY(61,3);
    cout<<"* For faculty use only *";
    gotoXY(59,4);
    cout<<"****************************";

    time1();

    gotoXY(64,13);
    cout<<"1) MIDTERM MARKS";
    gotoXY(64,16);
    cout<<"2) FINALTERM MARKS";
    gotoXY(66,19);
    cout<<"3) LOG IN MENU";
    gotoXY(68,22);
    cout<<"4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1+=3;

                gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1-=3;

				gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
if(choose1==0)
{
  system("CLS");
    s.setmidterm();

     gotoXY(50,30);
    cout<<"                                                          ";

    gotoXY(55,31);
    cout<<"****************************************";
    gotoXY(57,32);
    cout<<"Press any key for previous page :)";
    gotoXY(55,33);
    cout<<"****************************************";
    gotoXY(50,34);
    cout<<"                                                          ";
    getch();


        system("CLS");
}

if(choose1==1)
{
 system("CLS");
    s.setfinalterm();
    gotoXY(50,30);
    cout<<"                                                          ";
    gotoXY(55,31);
    cout<<"****************************************";
    gotoXY(57,32);
    cout<<"Press any key for previous page :)";
    gotoXY(55,33);
    cout<<"****************************************";
    gotoXY(50,34);
    cout<<"                                                          ";
    getch();

        system("CLS");

}

if(choose1==2)
{
system("CLS");
    loginoption();

        system("CLS");

}

if(choose1==3)
{
    cout<<"\a";
 char ex;
gotoXY(30,32);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,31);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();
    break;
}
	}
    }

    }
    }while(n1!=3);
}
////////////////////////////////////////show individual student information for faculty//////////////////////////////

void indistudent()
{
int n1;


int choose1=0, x1=12;

system("CLS");
system("color 3");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(62,12);
cout << "----------------------";
gotoXY(62,14);
cout << "----------------------";
do{
        system("color 3");


    gotoXY(61,2);
    cout<<"========================";
    gotoXY(61,3);
    cout<<"* For faculty use only *";
    gotoXY(61,4);
    cout<<"========================";
    time1();
    gotoXY(63,13);
    cout<<" 1) MIDTERM MARKS";
    gotoXY(63,16);
    cout<<" 2) FINALTERM MARKS";
    gotoXY(65,19);
    cout<<" 3) LOG IN MENU";
    gotoXY(67,22);
    cout<<" 4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1+=3;

                gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1-=3;

				gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
if(choose1==0)
{
  system("CLS");
   s.searchstudentm();


        system("CLS");
}

 if(choose1==1)
{
   system("CLS");
   s.searchstudentf();


        system("CLS");
}

if(choose1==2)
{
  system("CLS");
    loginoption();


        system("CLS");
}

if(choose1==3)
{

     char ex;
gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,31);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
//getch();
    break;
}

			}

    }
    }
    }while(n1!=3);
    getch();
}
//////////////////////////////////////////////////show all student marks menu/////////////////////////////////
void showallmark()
{
    int n1;


int choose1=0, x1=12;

system("CLS");
system("color B");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(61,12);
cout << "---------------------------";
gotoXY(61,14);
cout << "---------------------------";
do{
    system("color B");

    gotoXY(62,2);
    cout<<"-------------------------";
    gotoXY(59,3);
    cout<<"   * Please Choose Any One *";
    gotoXY(62,4);
    cout<<"-------------------------";

    time1();

    gotoXY(64,13);
    cout<<"1) SHOW MIDTERM MARKS";
    gotoXY(63,16);
    cout<<"2) SHOW FINALTERM MARKS";
    gotoXY(68,19);
    cout<<"3) LOGIN MENU";
    gotoXY(70,22);
    cout<<"4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1+=3;

                gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1-=3;

				gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{



system("CLS");
    SetColor(12);

    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS MIDTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }


system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";
gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";
gotoXY(30,11);
cout<<"ID NO.";
gotoXY(44,11);
cout<<"|";
gotoXY(48,11);
cout<<"QUIZ-1";

gotoXY(58,11);
cout<<"|";
gotoXY(62,11);
cout<<"QUIZ-2";

gotoXY(70,11);
cout<<"|";
gotoXY(73,11);
cout<<"Assignment";

gotoXY(85,11);
cout<<"|";
gotoXY(87,11);
cout<<"Attend";

gotoXY(95,11);
cout<<"|";
gotoXY(97,11);
cout<<"Performance";

gotoXY(110,11);
cout<<"|";
gotoXY(114,11);
cout<<"Written";

gotoXY(125,11);
cout<<"|";
gotoXY(128,11);
cout<<"Bonus";

gotoXY(135,11);
cout<<"|";
gotoXY(140,11);
cout<<"Midterm"<<endl;

gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getmidterm();
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;

getch();
system("CLS");

showallmark();

				}


		if(choose1==1)
				{




system("CLS");
SetColor(12);

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;

     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS FINALTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }



system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";


gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";

gotoXY(30,11);
cout<<"ID NO.";
gotoXY(42,11);
cout<<"|";

gotoXY(44,11);
cout<<"QUIZ-1";
gotoXY(51,11);
cout<<"|";

gotoXY(53,11);
cout<<"QUIZ-2";
gotoXY(60,11);
cout<<"|";

gotoXY(62,11);
cout<<"Assignment";
gotoXY(73,11);
cout<<"|";

gotoXY(75,11);
cout<<"Attend";
gotoXY(82,11);
cout<<"|";


gotoXY(84,11);
cout<<"Performance";
gotoXY(95,11);
cout<<"|";

gotoXY(97,11);
cout<<"Written";
gotoXY(105,11);
cout<<"|";

gotoXY(107,11);
cout<<"Bonus";
gotoXY(113,11);
cout<<"|";

gotoXY(115,11);
cout<<"Mid";
gotoXY(120,11);
cout<<"|";

gotoXY(121,11);
cout<<"Final";
gotoXY(127,11);
cout<<"|";

gotoXY(129,11);
cout<<"Total";
gotoXY(135,11);
cout<<"|";

gotoXY(136,11);
cout<<"CGPA";
gotoXY(141,11);
cout<<"|";

gotoXY(143,11);
cout<<"Grade";


gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getfinalterm();
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;
getch();
system("CLS");

showallmark();
				}

                        	if(choose1==2)
				{


loginoption();
system("CLS");
				}

            	if(choose1==3)
				{
cout<<"\a";
char ex;
gotoXY(30,31);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();
				}

			}




    }
    }
    }while(n1!=3);
}

/////////////////////////////////////////////////show all marks for students use/////////////////////
void showallmarks()
{
     int n1;


int choose1=0, x1=12;

system("CLS");
system("color 9");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(61,12);
cout <<"---------------------------";
gotoXY(61,14);
cout <<"---------------------------";
do{
    system("color 9");

    gotoXY(62,2);
    cout<<"-------------------------";
    gotoXY(62,3);
    cout<<"* Please Choose Any One *";
    gotoXY(62,4);
    cout<<"-------------------------";

    time1();

    gotoXY(64,13);
    cout<<"1) SHOW MIDTERM MARKS";
    gotoXY(64,16);
    cout<<"2) SHOW FINALTERM MARKS";
    gotoXY(68,19);
    cout<<"3) STUDENT MENU";
    gotoXY(70,22);
    cout<<"4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1+=3;

                gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1-=3;

				gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{


system("CLS");
    SetColor(12);

    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;

     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS MIDTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }



system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";
gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";
gotoXY(30,11);
cout<<"ID NO.";
gotoXY(44,11);
cout<<"|";
gotoXY(48,11);
cout<<"QUIZ-1";

gotoXY(58,11);
cout<<"|";
gotoXY(62,11);
cout<<"QUIZ-2";

gotoXY(70,11);
cout<<"|";
gotoXY(73,11);
cout<<"Assignment";

gotoXY(85,11);
cout<<"|";
gotoXY(87,11);
cout<<"Attend";

gotoXY(95,11);
cout<<"|";
gotoXY(97,11);
cout<<"Performance";

gotoXY(110,11);
cout<<"|";
gotoXY(114,11);
cout<<"Written";

gotoXY(125,11);
cout<<"|";
gotoXY(128,11);
cout<<"Bonus";

gotoXY(135,11);
cout<<"|";
gotoXY(140,11);
cout<<"Midterm"<<endl;

gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getmidterm();
SetColor(4);
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;
getch();
system("CLS");
showallmarks();
				}

		if(choose1==1)
        {



  system("CLS");
    SetColor(12);


    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS FINALTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }


system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";


gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";

gotoXY(30,11);
cout<<"ID NO.";
gotoXY(42,11);
cout<<"|";

gotoXY(44,11);
cout<<"QUIZ-1";
gotoXY(51,11);
cout<<"|";

gotoXY(53,11);
cout<<"QUIZ-2";
gotoXY(60,11);
cout<<"|";

gotoXY(62,11);
cout<<"Assignment";
gotoXY(73,11);
cout<<"|";

gotoXY(75,11);
cout<<"Attend";
gotoXY(82,11);
cout<<"|";


gotoXY(84,11);
cout<<"Performance";
gotoXY(95,11);
cout<<"|";

gotoXY(97,11);
cout<<"Written";
gotoXY(105,11);
cout<<"|";

gotoXY(107,11);
cout<<"Bonus";
gotoXY(113,11);
cout<<"|";

gotoXY(115,11);
cout<<"Mid";
gotoXY(120,11);
cout<<"|";

gotoXY(121,11);
cout<<"Final";
gotoXY(127,11);
cout<<"|";

gotoXY(129,11);
cout<<"Total";
gotoXY(135,11);
cout<<"|";

gotoXY(136,11);
cout<<"CGPA";
gotoXY(141,11);
cout<<"|";

gotoXY(143,11);
cout<<"Grade";


gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getfinalterm();
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;
getch();
system("CLS");
showallmarks();
				}

                        	if(choose1==2)
				{


menus();

				}

            	if(choose1==3)
				{

char ex;
gotoXY(30,31);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                                                                                                         ";
cout<<"\a";
gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();
				}

			}

    }
    }
    }while(n1!=3);
}
////////////////////////////////////////show all student mark for admin//////////////////////////////////////
void showallmarkad()
{
     int n1;


int choose1=0, x1=12;

system("CLS");
system("color c");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(61,12);
cout << "---------------------------";
gotoXY(61,14);
cout << "---------------------------";
do{
    system("color c");

    gotoXY(59,1);
    cout<<"---------------------------------";
    gotoXY(62,2);
    cout<<"-------------------------";
    gotoXY(62,3);
    cout<<"* Please Choose Any One *";
    gotoXY(62,4);
    cout<<"-------------------------";
    gotoXY(59,5);
    cout<<"---------------------------------";

    time1();

    gotoXY(64,13);
    cout<<"1) SHOW MIDTERM MARKS";
    gotoXY(64,16);
    cout<<"2) SHOW FINALTERM MARKS";
    gotoXY(68,19);
    cout<<"3) ADMIN MENU";
    gotoXY(71,22);
    cout<<"4)EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1+=3;

                gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(61,x1);
				cout << "                           ";
				gotoXY(61,x1+2);
                cout << "                           ";
				x1-=3;

				gotoXY(61,x1);
                cout << "---------------------------";
                gotoXY(61,x1+2);
                cout << "---------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{


	system("CLS");
    SetColor(12);



    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;



     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS MIDTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }




system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";
gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";
gotoXY(30,11);
cout<<"ID NO.";
gotoXY(44,11);
cout<<"|";
gotoXY(48,11);
cout<<"QUIZ-1";

gotoXY(58,11);
cout<<"|";
gotoXY(62,11);
cout<<"QUIZ-2";

gotoXY(70,11);
cout<<"|";
gotoXY(73,11);
cout<<"Assignment";

gotoXY(85,11);
cout<<"|";
gotoXY(87,11);
cout<<"Attend";

gotoXY(95,11);
cout<<"|";
gotoXY(97,11);
cout<<"Performance";

gotoXY(110,11);
cout<<"|";
gotoXY(114,11);
cout<<"Written";

gotoXY(125,11);
cout<<"|";
gotoXY(128,11);
cout<<"Bonus";

gotoXY(135,11);
cout<<"|";
gotoXY(140,11);
cout<<"Midterm"<<endl;

gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getmidterm();
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;
getch();
system("CLS");
showallmarkad();
				}


		if(choose1==1)
        {


      system("CLS");
    SetColor(12);



    gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;

     gotoXY(45,25);
        cout<< "PLEASE WAIT A WHILE. SEARCHING FOR STUDENTS FINALTERM RESULTS...";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

system("CLS");
system("color 4");
time();
gotoXY(40,6);
cout<<"******************************************************************************";
gotoXY(45,7);
cout<<"Here You Can See Every One Marks In Particular Part Of Your Section:";
gotoXY(40,8);
cout<<"******************************************************************************";
gotoXY(0,10);
cout<<"=====================================================================================================================================================";


gotoXY(6,11);
cout<<"NAME";
gotoXY(25,11);
cout<<"|";

gotoXY(30,11);
cout<<"ID NO.";
gotoXY(42,11);
cout<<"|";

gotoXY(44,11);
cout<<"QUIZ-1";
gotoXY(51,11);
cout<<"|";

gotoXY(53,11);
cout<<"QUIZ-2";
gotoXY(60,11);
cout<<"|";

gotoXY(62,11);
cout<<"Assignment";
gotoXY(73,11);
cout<<"|";

gotoXY(75,11);
cout<<"Attend";
gotoXY(82,11);
cout<<"|";


gotoXY(84,11);
cout<<"Performance";
gotoXY(95,11);
cout<<"|";

gotoXY(97,11);
cout<<"Written";
gotoXY(105,11);
cout<<"|";

gotoXY(107,11);
cout<<"Bonus";
gotoXY(113,11);
cout<<"|";

gotoXY(115,11);
cout<<"Mid";
gotoXY(120,11);
cout<<"|";

gotoXY(121,11);
cout<<"Final";
gotoXY(127,11);
cout<<"|";

gotoXY(129,11);
cout<<"Total";
gotoXY(135,11);
cout<<"|";

gotoXY(136,11);
cout<<"CGPA";
gotoXY(141,11);
cout<<"|";

gotoXY(143,11);
cout<<"Grade";


gotoXY(0,12);
cout<<"=====================================================================================================================================================";
s.getfinalterm();
cout<<"\n*****************************************************************************************************************************************************"<<endl;

cout<<"\t\t\t\t\t\tHERE IS END OF RESULT"<<endl;
cout<<"\a";

cout<<"\t\t\t\t\t\tPlease press any key for continue...."<<endl;
getch();
system("CLS");
showallmarkad();
				}

                        	if(choose1==2)
				{


adminlog();

				}

            	if(choose1==3)
				{

char ex;
gotoXY(30,31);
cout<<"                                                                                                         ";
gotoXY(30,32);
cout<<"                                                                                                         ";
cout<<"\a";
gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();
				}

			}

    }
    }
    }while(n1!=3);
}
///////////////////////////////////delete any student for faculty/////////////////////////////////////////
void dels()
   {
       int n1;


int choose1=0, x1=12;

system("CLS");
system("color 3");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,31);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(60,12);
cout << "---------------------------";
gotoXY(60,14);
cout << "---------------------------";
do{
    system("color 3");

    gotoXY(61,2);
    cout<<"========================";
    gotoXY(61,3);
    cout<<"* For faculty use only *";
    gotoXY(61,4);
    cout<<"========================";

    time1();

    gotoXY(62,13);
    cout<<"1) DELETE MIDTERM MARKS";
    gotoXY(61,16);
    cout<<"2) DELETE FINALTERM MARKS";
    gotoXY(66,19);
    cout<<"3) LOG IN MENU";
    gotoXY(68,22);
    cout<<"4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(60,x1);
				cout << "                           ";
				gotoXY(60,x1+2);
                cout << "                           ";
				x1+=3;

                gotoXY(60,x1);
                cout << "---------------------------";
                gotoXY(60,x1+2);
                cout << "---------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(60,x1);
				cout << "                           ";
				gotoXY(60,x1+2);
                cout << "                           ";
				x1-=3;

				gotoXY(60,x1);
                cout << "---------------------------";
                gotoXY(60,x1+2);
                cout << "---------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{
system("CLS");
   s.deletestudentm();
   getch();
system("CLS");
				}
       if(choose1==1)
				{
system("CLS");
   s.deletestudentf();
      getch();

system("CLS");
				}

				if(choose1==2)
				{
system("CLS");
   loginoption();
system("CLS");
				}

				if(choose1==3)
				{

char ex;
gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,31);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,31);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,31);
cout<<"                                                                                                   ";
gotoXY(35,31);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();

}

			}

    }
    }
    } while(n1!=3);


   }


////////////////////////////////////////////////searchfaculty////////////////////////////////////////////////////////////////////////////////////////

   void searchfaculty()
{
       system("color E");

                        int count=0;
                        string u,p,n,m,d;
                        char findfid[100];

                        time();
                        int i;

gotoXY(27,5);

             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "*************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "*************************************************";
int x1=0,y1=97;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};



string line2 = "You can see a Faculty information";
int x2=0,y2=57;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};
     gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(15);

	x3++;
	y3++;
};



    fflush(stdin);
    gets(findfid);


 if(stricmp(findfid,"")==0 || stricmp(findfid," ")==0)
                       {
                       adminlog();
                       }
int rat00=0;
while ( findfid[rat00] != '\0')
{
    if(findfid[rat00] == ' ')
    {
        findfid[rat00]='`';



    }

	rat00++;
};
gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";
 char az=177, bz=219;

 int pz=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(pz,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 pz++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 70 );
 }


                        ifstream searchfac("database.aiub");
                        while(searchfac>>u>>p>>n>>m>>d)
                        {
                                if(findfid==u)
                                {
                                        count++;


gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,31);
cout<<"                 Hurray we found the faculty information. Please check it out                             ";
gotoXY(30,33);
cout<<"                                                                                                ";

system("color E");


                                string line4 = "   Here is the Faculty Information    ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };


                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };



int rat=0;
while ( n[rat] != '\0')
{
    if(n[rat] == '`')
    {
        n[rat]=' ';



    }

	rat++;
};
         int rat1=0;
while ( u[rat1] != '\0')
{
    if(u[rat1] == '`')
    {
        u[rat1]=' ';



    }

	rat1++;
};
         int rat2=0;
while ( p[rat2] != '\0')
{
    if(p[rat2] == '`')
    {
        p[rat2]=' ';



    }

	rat2++;
};

         int rat4=0;
while ( d[rat4] != '\0')
{
    if(d[rat4] == '`')
    {
        d[rat4]=' ';



    }

	rat4++;
};

                                gotoXY(60,15);
                                cout<<"ID   :"<<u;
                                gotoXY(60,16);
                                cout<<"PASS :"<<p;
                                gotoXY(60,17);
                                cout<<"NAME :"<<n;
                                gotoXY(60,18);
                                cout<<"MAIL :"<<m;
                                gotoXY(60,19);
                                cout<<"DEP  :"<<d;
                                cout<<"\a";
                                gotoXY(30,31);
                                cout<<"                           Press any key to go in previous page...                        ";
                                getch();
                                searchfac.close();
                                adminlog();
                                }

                        }
                        if(count==0)
                        {

cout<<"\a";

gotoXY(30,30);
cout<<"                        Sorry, Your userID is not found in our database...            ";
gotoXY(25,32);
cout<<"Please kindly contact your system administrator for more details. Press any key to go in previous page...";
gotoXY(30,33);
cout<<"                                                                                                ";
 getch();
 adminlog();
    }




}


////////////////////////////////////////////////deletefaculty////////////////////////////////////////////////////////////////////////////////////////
void deletefaculty()
{

system("color C");
int count=0;
                    string u,p,n,m,d;
                    char deltfid[100];

                    time();

                        int i;

gotoXY(27,5);

             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical

             gotoXY(0,5); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal
             gotoXY(146,5); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner


       gotoXY(1,29);
    cout<<"Notification Box :";
string line0 = "*************************************************";
int x0=0,y0=49;
while ( line0[x0] != '\0')
{gotoXY(y0,6);
	cout << line0[x0];

		Beep(18014, 2);
		Sleep(5);


	x0++;
	y0++;
};

string line1 = "*************************************************";
int x1=0,y1=97;
while ( line1[x1] != '\0')
{gotoXY(y1,8);
	cout << line1[x1];
	Beep(18014, 2);
	Sleep(5);

	x1++;
	y1--;
};



string line2 = "You can delete a Faculty information here";
int x2=0,y2=53;
while ( line2[x2] != '\0')
{gotoXY(y2,7);
	cout << line2[x2];
	Beep(18014, 2);
	Sleep(5);
	x2++;
	y2++;
};
     gotoXY(30,30);
cout<<"***YOU CAN BACK TO PREVIOUS PAGE BY TAKE A BLANK INPUT ONLY IN FIRST INPUT BOX :)***";


string line3 = "Please enter Id here : ";
int x3=0,y3=51;
while ( line3[x3] != '\0')
{gotoXY(y3,10);
	cout << line3[x3];
	Beep(7, 2);
	Sleep(10);

	x3++;
	y3++;
};





    fflush(stdin);
    gets(deltfid);


 if(stricmp(deltfid,"")==0 || stricmp(deltfid," ")==0)
                       {
                       adminlog();
                       }

int rat00=0;
while ( deltfid[rat00] != '\0')
{
    if(deltfid[rat00] == ' ')
    {
        deltfid[rat00]='`';



    }

	rat00++;
};

gotoXY(30,30);
cout<<"                    Please wait... Searching your information...                                 ";
 char az=177, bz=219;

 int pz=46;
 for (int i=0;i<=50;i++)
 {

gotoXY(pz,33);
SetConsoleTextAttribute(console, 4);
 cout<<az;


 pz++;
 cout<<"\r";

 }
 int q=46;


int j0=0;
 for (int i=0;i<=50;i++)
 {
     cout<<"\r";
     gotoXY(99,33);
    cout<<j0<<"%";
     j0+=2;
gotoXY(q,33);
cout<<bz;
  q++;
Sleep( 70 );
 }

                    ifstream delfac("database.aiub");
                        while(delfac>>u>>p>>n>>m>>d)
                        {
                                if(deltfid==u)
                                {
                                        count++;


gotoXY(30,30);
cout<<"                                                                                                ";
gotoXY(30,33);
cout<<"                                                                                                ";



system("color C");


                                string line4 = "   Here is the Faculty Information    ";
                                int x4=0,y4=58;
                                while ( line4[x4] != '\0')
                              {gotoXY(y4,12);
	                           cout << line4[x4];
	                           Beep(7, 2);
	                           Sleep(10);
	                           x4++;
	                           y4++;
                               };

                                string line5 = "****************************************************";
                                int x5=0,y5=99;
                                while ( line5[x5] != '\0')
                              {gotoXY(y5,13);
	                           cout << line5[x5];
	                           Beep(7, 2);
	                           Sleep(5);
	                           x5++;
	                           y5--;
                               };
                                int rat=0;
while ( n[rat] != '\0')
{
    if(n[rat] == '`')
    {
        n[rat]=' ';



    }

	rat++;
};
         int rat1=0;
while ( u[rat1] != '\0')
{
    if(u[rat1] == '`')
    {
        u[rat1]=' ';



    }

	rat1++;
};
         int rat2=0;
while ( p[rat2] != '\0')
{
    if(p[rat2] == '`')
    {
        p[rat2]=' ';



    }

	rat2++;
};

         int rat4=0;
while ( d[rat4] != '\0')
{
    if(d[rat4] == '`')
    {
        d[rat4]=' ';



    }

	rat4++;
};
gotoXY(50,14);
                                cout<<"ID   :"<<u;
                                gotoXY(50,15);
                                cout<<"PASS :"<<p;
                                gotoXY(50,16);
                                cout<<"NAME :"<<n;
                                gotoXY(50,17);
                                cout<<"MAIL :"<<m;
                                gotoXY(50,18);
                                cout<<"DEP  :"<<d;
                                //gotoXY(30,30);
                                //cout<<"                         Press any key to go in previous page...                        ";

                                }
                        }

                        if(count==0)
                        {

cout<<"\a";

gotoXY(30,30);
cout<<"                  Sorry, Your userID is not found in our database...                  ";
gotoXY(28,32);
cout<<"Please kindly contact your system administrator for more details. Press any key to go in previous page...    ";
gotoXY(30,33);
cout<<"                                                                                             ";
                        getch();


adminlog();
                        }

    delfac.close();
char choose;
cout<<"\a";

gotoXY(30,30);
cout<<"             Do you want to delete this account?(press y for yes/Press enter for no): ";
choose=getche();
gotoXY(30,30);
cout<<"                                                                                                          ";

gotoXY(30,31);
cout<<"                                                                                                  ";
if(choose=='y')
{




ofstream deltfa("faculty.spi",ios::app);
ifstream deltfacs("database.aiub");
while(deltfacs>>u>>p>>n>>m>>d)
{
if(u!=deltfid)
{
deltfa<<u<<' '<<p<<' '<<n<<' '<<m<<' '<<d<<endl;
}
}
deltfa.close();
deltfacs.close();



string ur,pr,nr,mr,dr;


ofstream nilfac("database.aiub",ios::trunc);
ifstream ratrifac("faculty.spi");

while(ratrifac>>ur>>pr>>nr>>mr>>dr)
{

nilfac<<ur<<' '<<pr<<' '<<nr<<' '<<mr<<' '<<dr<<endl;

}


    nilfac.close();
    ratrifac.close();



ofstream niltxtfc("faculty.spi",ios::trunc);
    niltxtfc.close();


    gotoXY(30,30);
    cout<<"                   Please wait, I will delete your selected data";


   int anu=0;
   for(anu=0;anu<=10;anu++)
   {
       cout<<".";
       Sleep(500);
   }

gotoXY(45,32);
    cout<<"*********************Deleted*********************";
    gotoXY(50,34);
    cout<<"Please enter to go to previous page";
    getch();


 system("cls");
adminlog();
}
else
{
    adminlog();
}




}

/////////////////////////////////////////////////student menu//////////////////////////////


void menus()
{
    int n1;


int choose1=0, x1=12;

system("CLS");
system("color e");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,28); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,28); printf("\xB9"); // Right inside lower corner

  gotoXY(1,29);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,31);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(60,12);
cout << "---------------------------";
gotoXY(60,14);
cout << "---------------------------";
do{
    system("color e");

    gotoXY(61,2);
    cout<<"========================";
    gotoXY(61,3);
    cout<<"* For Student use only *";
    gotoXY(61,4);
    cout<<"========================";

    time1();

    gotoXY(62,13);
    cout<<"1) Show Individual Marks";
    gotoXY(61,16);
    cout<<"2) Show All Students Marks";
    gotoXY(66,19);
    cout<<"3) Main Menu";
    gotoXY(68,22);
    cout<<"4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(60,x1);
				cout << "                           ";
				gotoXY(60,x1+2);
                cout << "                           ";
				x1+=3;

                gotoXY(60,x1);
                cout << "---------------------------";
                gotoXY(60,x1+2);
                cout << "---------------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(60,x1);
				cout << "                           ";
				gotoXY(60,x1+2);
                cout << "                           ";
				x1-=3;

				gotoXY(60,x1);
                cout << "---------------------------";
                gotoXY(60,x1+2);
                cout << "---------------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
				if(choose1==0)
				{
system("CLS");
   showindis();
   getch();
system("CLS");
				}
       if(choose1==1)
				{
system("CLS");
   showallmarks();
      getch();

system("CLS");
				}

				if(choose1==2)
				{
system("CLS");
   mainmenu();
system("CLS");
				}

				if(choose1==3)
				{

char ex;
gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,31);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,31);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,31);
cout<<"                                                                                                   ";
gotoXY(35,31);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
getch();

}

			}

    }
    }
    } while(n1!=3);


}

void showindis()
{

  int n1;


int choose1=0, x1=12;

system("CLS");
system("color e");
int i;



             gotoXY(0,0); printf("\xC9"); // Upper left corner
             for(i=1;i<=146;i++) printf("\xCD"); // Upper left right horizontal
             gotoXY(146,0); printf("\xBB"); // Upper right corner

             gotoXY(0,35); printf("\xC8"); // Lower left corner
             for(i=1;i<=146;i++) printf("\xCD");// Lower left right horizontal
             gotoXY(146,35); printf("\xBC"); // Lower right corner

             for(i=1;i<35;i++){ gotoXY(0,i); printf("\xBA"); } // Left vertical
             for(i=1;i<35;i++){ gotoXY(146,i); printf("\xBA"); }// Right vertical


             gotoXY(0,6); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,6); printf("\xB9"); // Right inside upper corner



              gotoXY(0,11); printf("\xCC"); // Left inside upper corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside upper left right horizontal

             gotoXY(146,11); printf("\xB9"); // Right inside upper corner

             gotoXY(0,30); printf("\xCC"); // Left inside lower corner
             for(i=1;i<=146;i++) printf("\xCD"); // Inside lower left right horizontal

             gotoXY(146,30); printf("\xB9"); // Right inside lower corner

  gotoXY(1,31);
    cout<<"Notification Box :";
		string line = "Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
int x11=0,y11=35;
while ( line[x11] != '\0')
{gotoXY(y11,32);
	cout << line[x11];
	Beep(7, 2);
	Sleep(10);

	x11++;
	y11++;
};
gotoXY(62,12);
cout << "----------------------";
gotoXY(62,14);
cout << "----------------------";
do{
        system("color e");


    gotoXY(61,2);
    cout<<"========================";
    gotoXY(64,3);
    cout<<"* For Student use *";
    gotoXY(61,4);
    cout<<"========================";
    time1();
    gotoXY(63,13);
    cout<<" 1) MIDTERM MARKS";
    gotoXY(63,16);
    cout<<" 2) FINALTERM MARKS";
    gotoXY(64,19);
    cout<<" 3) STUDENT MENU";
    gotoXY(67,22);
    cout<<" 4) EXIT";


     n1 = _getch();

    switch(n1)
    {
       case DOWN:
			if(choose1+1<=3)
			{
				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1+=3;

                gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1++;
				break;
			}
		   case UP:
			if(choose1-1>=0)
			{

				gotoXY(62,x1);
				cout << "                      ";
				gotoXY(62,x1+2);
                cout << "                      ";
				x1-=3;

				gotoXY(62,x1);
                cout << "----------------------";
                gotoXY(62,x1+2);
                cout << "----------------------";
				choose1--;
				break;
			}




		case ENTER:
			{
if(choose1==0)
{
  system("CLS");
   s.searchstudentms();


        system("CLS");
}

 if(choose1==1)
{
   system("CLS");
   s.searchstudentfs();


        system("CLS");
}

if(choose1==2)
{
  system("CLS");
    menus();


        system("CLS");
}

if(choose1==3)
{

     char ex;
gotoXY(30,32);
cout<<"                                                                                                         ";
gotoXY(30,31);
cout<<"                                                                                                         ";
cout<<"\a";

gotoXY(30,32);
cout<<"                 DO YOU REALLY WANT TO EXIT??? (Press y for yes/any key for no) : ";
ex=getche();
if(ex=='y')
{
        exit();
}
else
{
gotoXY(45,32);
cout<<"                                                                                                   ";
gotoXY(35,32);
cout<<"Please Use Up And Down Arrow For Change Option And Then Press Enter For Go In To Selected Option";
//getch();
    break;
}

			}

    }
    }
    }while(n1!=3);
    getch();




}



void exit()
{
system("CLS");


SetColor(12);

gotoXY(50,5);
cout<<" _________        .------------------.    "<<endl;
gotoXY(50,6);
cout<<": ______  :      :  .--------------.  :      "<<endl;
gotoXY(50,7);
cout<<"| ______  |      | :                : |        "<<endl;
gotoXY(50,8);
cout<<"|:___C___:|      | |                | |             "<<endl;
gotoXY(50,9);
cout<<"|:___P___:|      | |                | |             "<<endl;
gotoXY(50,10);
cout<<"|:___U___:|      | | Wait A Moment. | |             "<<endl;
gotoXY(50,11);
cout<<"|         |      | |                | |             "<<endl;
gotoXY(50,12);
cout<<"|:_____:  |      | |                | |             "<<endl;
gotoXY(50,13);
cout<<"|    ==   |      | :                : |             "<<endl;
gotoXY(50,14);
cout<<"|       O |      :  '--------------'  :             "<<endl;
gotoXY(50,15);
cout<<"|       o |      :'---...______...---'              "<<endl;
gotoXY(50,16);
cout<<"|       o |-._.-i___/'             \\._              "<<endl;
gotoXY(50,17);
cout<<"|'-.____o_|   '-.   '-...______...-'  `-._          "<<endl;
gotoXY(50,18);
cout<<":_________:      `.____________________   `-.___.-. "<<endl;
gotoXY(50,19);
cout<<"                 .'.eeeeeeeeeeeeeeeeee.'.      :___:"<<endl;
gotoXY(50,20);
cout<<"               .'.eeeeeeeeeeeeeeeeeeeeee.'.         "<<endl;
gotoXY(50,21);
cout<<"              :____________________________:"<<endl;


     gotoXY(50,25);
        cout<< "PLEASE WAIT A WHILE. ALL SYSTEMS ARE SHUTTING DOWN.....";
 int amountOfFiller,
        pBarLength = 50,
        currUpdateVal = 0;
    double currentProgress = 0,
        neededProgress = 100;
     string firstPartOfpBar = "[",
        lastPartOfpBar = "]",
        pBarFiller = "|",
        pBarUpdater = "/-\\|";
double newProgress=1;

    for (int i = 0; i < 100; i++)
        {
         currentProgress += newProgress;
        amountOfFiller = (int)((currentProgress / neededProgress)*(double)pBarLength);



          currUpdateVal %= pBarUpdater.length();
        gotoXY(45,27);
        cout<< firstPartOfpBar;
        for (int a = 0; a < amountOfFiller; a++) {

            cout << pBarFiller;
        }

        cout << pBarUpdater[currUpdateVal];
        for (int b = 0; b < pBarLength - amountOfFiller; b++) {

            cout << " ";
        }

        cout << lastPartOfpBar
            << " (" << (int)(100*(currentProgress/neededProgress)) << "%)"
            << flush;
        currUpdateVal += 1;
        Sleep( 50 );
    }

  gotoXY(45,25);
        cout<< "                                                             ";

        gotoXY(45,27);
        cout<< "                                                                        ";


system("color E");
int i=0;
int x=30;
while(i<10)
{

system("cls");
gotoXY(3,x);
cout<<"               ooooooooooooo ooooo   ooooo       .o.       ooooo      ooo oooo    oooo    oooooo   oooo   .oooooo.   ooooo     ooo"<<endl;
gotoXY(3,x+1);
cout<<"               8'   888   `8 `888'   `888'      .888.      `888b.     `8' `888   .8P'      `888.   .8'   d8P'  `Y8b  `888'     `8'"<<endl;
gotoXY(3,x+2);
cout<<"                    888       888     888      .8''88.      8 `88b.    8   888  88'         `888. .8'   888      888  888       8"<<endl;
gotoXY(3,x+3);
cout<<"                    888       888ooooo888     .8' `888.     8   `88b.  8   88888[            `888.8'    888      888  888       8"<<endl;
gotoXY(3,x+4);
cout<<"                    888       888     888    .88ooo8888.    8     `88b.8   888`88b.           `888'     888      888  888       8"<<endl;
gotoXY(3,x+5);
cout<<"                    888       888     888   .8'     `888.   8       `888   888  `88b.          888      `88b    d88'  `88.    .8'"<<endl;
gotoXY(3,x+6);
cout<<"                   o888o     o888o   o888o o88o     o8888o o8o        `8  o888o  o888o        o888o      `Y8bood8P'     `YbodP'"<<endl;

x--;
if(x<=0)
{
    time_t t;
time(&t);
gotoXY(55,11);
cout<<"Date and Time: "<<ctime(&t);
gotoXY(41,12);
cout<<"=================================================================";
gotoXY(57,13);
cout<<"ALL RIGHT RESERVED BY @ TEAM DELTA";
gotoXY(41,14);
cout<<"==================================================================";
gotoXY(59,15);
cout<<"Thank You For Being With Us:)";
gotoXY(40,16);
cout<<"-------------------------------------------------------------------";
gotoXY(61,17);
cout<<"STAY HOME |||| STAY SAFE:)";

cout<<"\a";

SetColor(4);
gotoXY(15,19);
cout<<"Send Your Feedback About Project-SPI On This Link:'https://www.facebook.com/Transformer-107984380900223/'-Transformer";
SetColor(4);
gotoXY(5,21);
cout<<"For Any Kind Of Query Please Contact With Us:'niloykantipaul@hotmail.com' or 'niloykantipaul@gmail.com' We Are Always Ready For Your Help.";
gotoXY(52,23);
cout<<"OUR TELEGRAM LINK : https://t.me/niloykantipaul";

gotoXY(70,25);
cout<<"Press any key...";
getch();
cout<<endl<<endl<<endl<<endl;
SetColor(15);
exit(0);


}

}


}

void time()
{

    int tDate; int tMonth; int tYear;
    int hour; int min;
    int sec;
    time_t result;
    result = time(NULL);
    struct tm* tp = localtime(&result);
    tMonth = tp->tm_mon + 1;

    tDate  = tp->tm_mday;

    tYear  = tp->tm_year + 1900;

    hour   = tp->tm_hour;

    min    = tp->tm_min;

    sec    = tp->tm_sec;




    gotoXY(59,1);
    cout<<"******************************";
    gotoXY(66,2);
    cout<<"Date :"<< tDate <<"/" << tMonth <<"/"<< tYear ;
    gotoXY(67,3);
    cout<<"Time :"<< hour<<":"<< min << ":" << sec;
    gotoXY(59,4);
    cout<<"******************************";

}


void time1()
{

    int tDate; int tMonth; int tYear;
    int hour; int min;
    int sec;
    time_t result;
    result = time(NULL);
    struct tm* tp = localtime(&result);
    tMonth = tp->tm_mon + 1;

    tDate  = tp->tm_mday;

    tYear  = tp->tm_year + 1900;

    hour   = tp->tm_hour;

    min    = tp->tm_min;

    sec    = tp->tm_sec;


    gotoXY(59,7);
    cout<<"******************************";
    gotoXY(66,8);
    cout<<"Date :"<< tDate <<"/" << tMonth <<"/"<< tYear;
    gotoXY(67,9);
    cout<<"Time :"<< hour<<":"<< min << ":" << sec;
    gotoXY(59,10);
    cout<<"******************************";

}








