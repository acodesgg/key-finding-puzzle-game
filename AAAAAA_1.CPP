    #include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int i,j=230,k=180, j3=250,k3=240,l=10,m=
10,j2=30,k2=370,co_mo=0,inc=0,key=0,ghostkey=0;
 char c;
 float m1=0,p2=0,p3=0,p4=0,speed=0,p5=0,p6=0,p7=0,p8=0;
//  char c;
  int loop=0,loop1=0,page=0,loop2=0,loop3=0;
  int realkey22=0;
  int realkey23=0 ;
  int realkey24=0;

int realkey25=0;

int realkey26=0;

int realkey27=0;
int realkey28=0;
int drop4=0,drop5=0,drop6=0,crystal4=0,crystal5=0,crystal6=0;
int doorcondition1=0,doorcondition2=0,doorcondition3=0,doorcondition4=0,doorcondition5=0,doorcondition6=0,doorcondition7=0;
int deatha1=0;
int deatha2=0;
int deatha3=0;
int deatha4=0;
int deatha5=0;
int deatha6=0;
int deatha7=0;


 int realk2ey1=0;
int realk2ey2=0;
int realk2ey3=0;
int realk2ey4=0;
int realk2ey5=0;
int realk2ey6=0;
int realk2ey7=0;
int realk2ey8=0;
int realk2ey9=0;
int realk2ey10=0;
int realk2ey11=0;
int drop8=0,drop9=0,drop10=0,crystal9=0,crystal10=0,crystal11=0;
int k2eyconditionca=0,k2eyconditioncb=0,k2eyconditioncc=0,k2eyconditioncd=0,k2eyconditionce=0,k2eyconditioncf=0,k2eyconditioncg=0,k2eyconditionch=0,k2eyconditionci=0,k2eyconditioncj=0,k2eyconditionck=0;



 int realk3ey12=0;
  int realk3ey13=0 ;
  int realk3ey14=0;

int realk3ey15=0;

int realk3ey16=0;

int realk3ey17=0;
int realk3ey18=0;
int realk3ey19=0;
int realk3ey20=0;
int realk3ey21=0;
int drop1=0,drop2=0,drop3=0,crystal1=0,crystal2=0,crystal3=0;
int deathb1=0,deathb2=0,deathb3=0,deathb4=0,deathb5=0,deathb6=0,deathb7=0,deathb8=0,deathb9=0,deathb10=0;

 int deathc1=0,deathc2=0,deathc3=0,deathc4=0,deathc5=0, deathc6=0,deathc7=0,deathc8=0,deathc9=0,deathc10=0,deathc11=0;

     clock_t t1;



#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	70
void show_Header();
void signature();
int menu();
void drawmenu(int selected,int defCol,int selCol) ;
void level();
void level1();
void level2();
void show_HowTOPlay();
void display1();

 void sound()
{
	for(int tay=1000;tay>=400;tay-=100)
	{
	sound(tay);
	delay(200);
	nosound();
	}
     }
      void sound1()
{
	for(int tay=900;tay>=200;tay-=100)
	{
	sound(tay);
	delay(200);
	nosound();
	}
     }
void body() //figure
{// setcolor(3);
// setlinestyle(2,1,4);
  setfillstyle(1,RED);
rectangle(0,100,500,400);
rectangle(5,105,495,395);
////

bar3d(50,150,60,280,0,0);
bar3d(100,150,110,280,0,0);
bar3d(60,190,100,200,0,0);
bar3d(60,230,100,240,0,0);
bar3d(200,150,210,190,0,0);
bar3d(290,150,300,190,0,0);
bar3d(200,190,300,200,0,0);
bar3d(240,200,260,240,0,0);
bar3d(200,240,300,250,0,0);
bar3d(200,250,210,290,0,0);
bar3d(290,250,300,290,0,0);
///
bar3d(200,330,330,340,0,0);
bar3d(200,340,210,375,0,0);
bar3d(260,340,270,375,0,0);
bar3d(320,340,330,375,0,0);
//
bar3d(380,330,390,375,0,0);
bar3d(450,330,460,375,0,0);
bar3d(390,365,450,375,0,0);
///
bar3d(370,200,380,240,0,0);
bar3d(370,240,440,250,0,0);
bar3d(430,250,440,300,0,0);
bar3d(370,250,380,300,0,0);

//
bar3d(400,105,410,150,0,0);
bar3d(450,125,495,135,0,0);
bar3d(440,125,450,150,0,0);
//
rectangle(50,330,90,370);
rectangle(60,340,80,360);
floodfill(70,365,WHITE);
rectangle(110,330,150,370);
rectangle(120,340,140,360);
floodfill(130,365,WHITE);
line(210,150,230,150);
line(270,150,290,150);
line(210,290,230,290);
line(270,290,290,290);
//line(390,330,400,330);
//line(440,330,450,330);

////////////////
setfillstyle(1,YELLOW);
bar(230,149,270,151);
bar(230,289,270,291);
bar(200,200,203,240);
bar(297,200,300,240);
bar(60,150,100,153);
bar(60,277,100,280);

bar(210,377,260,380);
bar(270,377,320,380);
//bar(400,329,440,331);
bar(380,297,430,300);
bar(380,200,430,203);
bar(437,210,440,240);
bar(410,147,440,150);
bar(450,105,453,125);


 setcolor(WHITE);
 circle(275,180,2);
arc(275,180,95,85,5);
line(274,175,274,165);
line(276,175,276,165);
line(274,165,276,165);
bar3d(277,168,278,172,0,0);
//
circle(220,280,2);
arc(220,280,95,85,5);
line(219,275,219,265);
line(221,275,221,265);
line(219,265,221,265);
bar3d(222,268,223,272,0,0);
/////
circle(220,230,2);
arc(220,230,95,85,5);
line(219,225,219,215);
line(221,225,221,215);
line(219,215,221,215);
bar3d(222,218,223,222,0,0);
/////
/*circle(70,260,2);
arc(70,260,95,85,5);
line(69,255,69,245);
line(71,255,71,245);
line(69,245,71,245);
bar3d(72,248,73,252,0,0);
*/
/////
circle(420,360,2);
arc(420,360,95,85,5);
line(419,355,419,345);
line(421,355,421,345);
line(419,345,421,345);
bar3d(422,348,423,352,0,0);
/////
circle(300,360,2);
arc(300,360,95,85,5);
line(299,355,299,345);
line(301,355,301,345);
line(299,345,301,345);
bar3d(302,348,303,352,0,0);
/////
circle(400,230,2);
arc(400,230,95,85,5);
line(399,225,399,215);
line(401,225,401,215);
line(399,215,401,215);
bar3d(402,218,403,222,0,0); //real keys
/////
circle(270,230,2);
arc(270,230,95,85,5);
line(269,225,269,215);
line(271,225,271,215);
line(269,215,271,215);
bar3d(272,218,273,222,0,0);
/////
circle(270,280,2);
arc(270,280,95,85,5);
line(269,275,269,265);
line(271,275,271,265);
line(269,265,271,265);
bar3d(272,268,273,272,0,0);
/////
circle(80,180,2);
arc(80,180,95,85,5);
line(79,175,79,165);
line(81,175,81,165);
line(79,165,81,165);
bar3d(82,168,83,172,0,0);
/////
circle(230,365,2);
arc(230,365,95,85,5);
line(229,360,229,350);
line(231,360,231,350);
line(229,350,231,350);
bar3d(232,352,233,356,0,0);
/////
circle(400,230,2);
arc(400,230,95,85,5);
line(399,225,399,215);
line(401,225,401,215);
line(399,215,401,215);
bar3d(402,218,403,222,0,0);
circle(400,270,2);
arc(400,270,95,85,5);
line(399,265,399,255);
line(401,265,401,255);
line(399,255,401,255);
bar3d(402,268,403,272,0,0);//fake keys
/////
/////

setfillstyle(1,GREEN);
sector(25,310,45,135,9,14);
sector(365,350,45,135,9,14);
sector(475,360,45,135,9,14);
sector(530,170,45,135,9,14);
sector(560,170,45,135,9,14);
sector(590,170,45,135,9,14);
/////
/////
setfillstyle(1,5);
bar3d(30,160,40,170,0,1);
bar3d(150,290,160,300,0,1);
bar3d(320,120,330,130,0,1);
bar3d(530,200,540,210,0,1);
bar3d(560,200,570,210,0,1);
bar3d(590,200,600,210,0,1);


///////
settextstyle(3,0,2);
outtextxy(530,140,"Your Items:") ;



}
void ball(int j,int k,int l)   //ball
{     circle(j,k,l);
 setfillstyle(1,BLACK);
 fillellipse(j-5,k-2,2,3);
 fillellipse(j+5,k-2,2,3);

 arc(j,k,235,315,8);

 setfillstyle(SOLID_FILL,14);
 floodfill(j,k,WHITE);
}

void deathaa1(int *j,int *k)
{
	if(*k==150 && *j>=230 && *j<=270 || *j==300 && *k>=200 && *k<=240 || *k==290 && *j>=230 && *j<=270)
	deatha1=1;
	}
void deathaa2(int *j,int *k)
       {	if(*j==201 && *k>=200 && *k<=240)
	deatha2=1;  }
void deathaa3(int *j,int *k)
{
	if(*k==150 && *j>=60 && *j<=100 || *k==280 && *j>=60 && *j<=100)
	deatha3=1;}
void deathaa4(int *j,int *k)
       {	if(*k==377 && *j>=210 && *j<=260 || *k==377 && *j>=270 && *j<=320 )
	deatha4=1; }
void deathaa5(int *j,int *k)
       {	if(*k==200 && *j>=380 && *j<=430 || *j==440 && *k>=210 && *k<=240 || *k==300 && *j>=380 && *j<=430)
	deatha5=1;  }
void deathaa6(int *j,int *k)
      {	if(*k==150 && *j>=410 && *j<=440)
	deatha6=1; }
void deathaa7(int *j,int *k)
      {	if(*j==450 && *k>=105 && *k<=125)
	deatha7=1;
}

void key22(int *j,int *k)
{
  if(*j==260 && *k>=165 && *k<=185||*k==155&&*j>=260&&*j<=280)
 {//deatha1=0;
  realkey22=1;
doorcondition1=1;

}
}
void key23(int *j,int*k)
{
    if(*j==235 && *k>=265 && *k<=285 || *j>=215&& *j<=225 && *k==255)
     { realkey23=1;
    doorcondition2=1;}
}
///
void key24(int *j,int *k)
{
    if(*j==205 && *k>=215 && *k<=235)
     { realkey24=1;
    doorcondition3=1;}
}
///
void key25(int *j,int *k)
{
    if(*k==290 && *j>=55 && *j<=80)
     { realkey25=1;
    doorcondition4=1;}
}
void key26(int *j,int *k)
{
    if(*j>=410 && *j<=430 && *k==335)
     { realkey26=1;
    doorcondition5=1;}
}
///
void key27(int *j,int *k)
{
    if(*k==375 && *j>=290 && *j<=310)
     { realkey27=1;
    doorcondition6=1;}
}
void key28(int *j,int *k)
{
    if(*j==415 && *k>=215 && *k<=235 || *k==205 && *j>=390 && *j<=410)
    {  realkey28=1;
    doorcondition7=1;}
}

///
void fakekeyb(int *j,int *k)
{ if(*j==285 && *k>=215 && *k<=235)
    {sound(600);
    delay(500);
    nosound();}
  if(*j==255 && *k>=265 && *k<=285 || *k==295 && *j>=265 && *j<=275)
    {sound(600);
    delay(500);
    nosound();}
  if(*k==155&&*j>=70&&*j<=90)
    {sound(600);
    delay(500);
    nosound();
  if(*k==375 && *j>=220 && *j<=240)
    {realkey27=1;}
  if(*j==415 && *k>=215 && *k<=405 || *k==205 && *j>=395 && *j<=450)
    {sound(600);
    delay(500);
    nosound();}

    if(*k==270 && *j>=390&& *j<=410)
    {sound(600);
    delay(500);
    nosound();}  }


}
void crystalgroup2(int *j,int *k)
{
if(*j>=20 && *j<=30 && *k==295 || *j==40 && *k>=295 && *k<=315 || *k==325 && *j>=20 && *j<=30)
{
  drop4=1;
}
if(*j>=360 && *j<=370 && *k==335 || *j==350 && *k>=345 && *k<=355 || *k==365 && *j>=360 && *j<=370)
{
  drop5=1;

}
if(*j>=470 && *j<=480 && *k==345 || *j==490 && *k>=355 && *k<=365 || *k==375 && *j>=470 && *j<=480 )
{
  drop6=1;
}
if(*j>=30 && *j<=40 && *k==150 || *j==50 && *k>=160 && *k<=170 || *k==180 && *j>=30 && *j<=40)
{
  crystal4=1;

}

if(*j>=150 && *j<=160 && *k==280 || *j==140 && *k>=290 && *k<=3 || *k==310 && *j>=150 && *j<=160 || *j==170 && *k>=290 && *k<=300)
{
  crystal5=1;

}
if(*j>=320 && *j<=385 && *k==330 || *j==310 && *k>=120 && *k<=130 || *j>=320 && *j<=330 && *k==140 || *j==340 && *k>=120 && *k<=130)
{
  crystal6=1;

}
}

void conditiona1(int *j,int *k)
{if(*j==15 && *k>=0 && *k<=400 ||
 *j==70 && *k>=150 && *k<=190 ||
*j==70 && *k>=240 && *k<=280 ||
 *j==120 && *k>=150 && *k<=280 ||
*j==220 && *k>=150 && *k<=190 ||
*j==310 && *k>=150 && *k<=200 ||
 *j==270 && *k>=200 && *k<=240 ||
*j==220 && *k>=250 && *k<=290 ||
 *j==310 && *k>=240 && *k<=290 ||
 *j==390 && *k>=200 && *k<=240 ||
 *j==390 && *k>=250 && *k<=300 ||
 *j==450 && *k>=240 && *k<=300 ||
 *j==420 && *k>=100 && *k<=150 ||
*j==460 && *k>=130 && *k<=150 ||
 *j==100 && *k>=330 && *k<=370 ||
 *j==160 && *k>=330 && *k<=370 ||
*j==220 && *k>=340 && *k<=380 ||
*j==280 && *k>=340 && *k<=380 ||
 *j==340 && *k>=330 && *k<=380 ||
*j==400 && *k>=330 && *k<=370 ||
 *j==470 && *k>=330 &&  *k<=370 )
{*j+=5;}
if(*j==485 && *k>=0 && *k<=400 ||
 *j==40 && *k>=150 && *k<=280 ||
 *j==90 && *k>=150 && *k<=190 ||
 *j==90 && *k>=240 && *k<=280 ||
*j==190 && *k>=150 && *k<=200 ||
 *j==280 && *k>=150 && *k<=190 ||
 *j==230 && *k>=200 && *k<=240 ||
*j==190 && *k>=240 && *k<=290 ||
*j==280 && *k>=250 && *k<=290 ||
*j==360 && *k>= 200 && *k<=300 ||
 *j==420 && *k>=250 && *k<=300 ||
*j==390 && *k>=100 && *k<=150 ||
*j==430 && *k>=120 && *k<=150 ||
 *j==40 && *k>=330 && *k<=370 ||
 *j==105 && *k>=330 && *k<=370 ||
*j==190 && *k>=330 && *k<=380||
 *j== 250 && *k>=340 && *k<=380 ||
 *j==310 && *k>=340  && *k<=380 ||
 *j==370 &&  *k>=330 && *k<=380 ||
*j==440 && *k>=330 &&  *k<=370 )
{*j-=5;}
if(*k==390 && *j>=0 && *j<=500 ||
*k==180 && *j>=60 && *j<=100 ||
*k==180 && *j>=210 && *j<=290 ||
  *k==110 && *j>=440 && *j<=495 ||
 *k==190 && *j>=370 && *j<=380 ||
 *k==230 && *j>=380 && *j<=440 ||
*k==320 && *j>=50 && *j<=90 ||
 *k==320 && *j>=110  && *j<=150 ||
 *k==320 && *j>=200 && *j<=330 ||
*k==320 && *j>=380 && *j<=390 ||
*k==320 && *j>=450  && *j<=460 ||
*k==360 && *j>=390 && *j<=450 ||
*k==140 && *j>=50 && *j<=60 ||
 *k==140 && *j>=100 && *j<=110 ||
 *k== 140 && *j>=200 &&  *j<=210 ||
*k==140 && *j>=290 && *j<=300 ||
 *k==230 && *j>=200 &&  *j<=240 ||
*k==230 && *j>=260 && *j<=300 )
{*k-=5;}
if(*k== 105 && *j>=0 && *j<=500 ||
*k==250 && *j>=60 && *j<=100 ||
 *k==290 && *j>=50 && *j<=60 ||
  *k==290 && *j>=100 && *j<=110 ||
*k==210 && *j>=200 && *j<=240 ||
 *k==210 && *j>=260 && *j<=300 ||
 *k==140 && *j>=450 && *j<=500 ||
 *k==260 && *j>=210 && *j<=290 ||
*k==300 && *j>=200  && *j<=210 ||
*k==300 && *j>=290 && *j<=300 ||
 *k==260 && *j>=380 && *j<=430 ||
 *k==310 && *j>=370  && *j<=380 ||
*k==310 && *j>=430 && *j<=440 ||
*k==380 && *j>=50 && *j<=90 ||
 *k==380 && *j>=110 && *j<=150 ||
 *k== 350 && *j>=210 &&  *j<=260 ||
 *k==350 && *j>=270 && *j<=320 ||
*k==380 && *j>=200 &&  *j<=210 ||
*k==380 && *j>=260 && *j<=270 ||
 *k==380 && *j>=320 && *j<=330 ||
 *k==160 && *j>=400 && *j<=410 ||
 *k==160 && *j>=440 && *j<=450 ||
*k==380 && *j>=380 && *j<=460  )
{*k+=5;}




}
/////////////////////////////////////////
void caption()
{
  setcolor(12);
  settextstyle(0,HORIZ_DIR,0);
      outtextxy(10,30,"Escape From The Maze");
  outtextxy(10,40,"Using space to quit the maze");
  outtextxy(10,420,">>Drop=Indicate the real keys.");
  outtextxy(350,420,">>Crystal=Indicate the fake keys.");
  outtextxy(10,430,">>Your given time is 100 seconds(Be quick!!)");

  setcolor(12);
  outtextxy(520,280," w -> Up");
  outtextxy(520,290," s -> Down");
  outtextxy(520,300," a -> Left");
  outtextxy(520,310," d -> Right");
 // outtextxy(545,30,"s");

  setcolor(WHITE);
}
void level_1()
{ t1=clock();



 cleardevice();

 cleardevice();
 body();          //draw the figure
 ball(j,k,l);     //draw the  ball
 caption();
// countm(&co_mo,&inc);

for(i=0;i<m++;i++){
conditiona1(&j,&k); //cheacking condition
 //stopcondition(&j,&k);
// countm(&co_mo,&inc);
 c=getch();

 cleardevice();
 if(c=='a') j-=5;
 if(c=='s') k+=5;
 if(c=='d') j+=5;
 if(c=='w') k-=5;
if(c==' ') display1();
  //*p=co_mo;
caption();
 body();        //draw the figure
 ball(j,k,l);
 //keycondition(&j,&k);
 //ghostcondition(&j,&k);


 // ghost(speed,loop,m1,p2,loop1,p3,p4,loop2,p5,p6,loop3,p7,p8);
 /*if(key==1)
 {
 setfillstyle(0,0);
 bar(440,360,480,361);
 }*/

    //draw the ball
    //stopcondition(&j,&k);
deathaa1(&j,&k);
deathaa2(&j,&k);
deathaa3(&j,&k);
deathaa4(&j,&k);
deathaa5(&j,&k);
deathaa6(&j,&k);
deathaa7(&j,&k);
 key22(&j,&k);
 key23(&j,&k);
 key24(&j,&k);
 key25(&j,&k);
 key26(&j,&k);
 key27(&j,&k);
 key28(&j,&k);
 //realkey12(&j,&k);


 if(realkey22==1)
{
deatha1=0;
setfillstyle(0,0);
bar(230,149,270,151);
bar(230,289,270,291);
bar(297,200,300,240);
}
if(realkey23==1)
{deatha2=0;
setfillstyle(0,0);
bar(200,200,203,240);
}
if(realkey24==1)
{deatha3=0;
setfillstyle(0,0);
bar(60,150,100,153);
bar(60,277,100,280);
}
if(realkey25==1)
{deatha4=0;
setfillstyle(0,0);
bar(400,329,400,331);
bar(410,147,440,150);
}
if(realkey26==1)
{deatha5=0;
setfillstyle(0,0);
bar(210,377,260,380);
bar(270,377,320,380);
}
if(realkey27==1)
{deatha6=0;
setfillstyle(0,0);
bar(380,200,430,203);
bar(437,210,440,240);
bar(410,147,440,150);
}
if(realkey28==1)
{deatha7=0;
setfillstyle(0,0);
bar(450,105,453,125);

}

 /* if(doorcondition7==1)
  {
     conditiong(&j,&k);
     doorcondition6=0;
  } */
fakekeyb(&j,&k);
crystalgroup2(&j,&k);
if(drop4==1)
{
  setcolor(GREEN);
 circle(220,280,2);
arc(220,280,95,85,5);
line(219,275,219,265);
line(221,275,221,265);
line(219,265,221,265);
bar3d(222,268,223,272,0,0);
setfillstyle(2,RED);
sector(530,170,45,135,9,14);


}
if(drop5==1)
{
  setcolor(GREEN);
  circle(300,360,2);
arc(300,360,95,85,5);
line(299,355,299,345);
line(301,355,301,345);
line(299,345,301,345);
bar3d(302,348,303,352,0,0);
circle(230,365,2);
arc(230,365,95,85,5);
line(229,360,229,350);
line(231,360,231,350);
line(229,350,231,350);
bar3d(232,352,233,356,0,0);
setfillstyle(2,RED);
sector(560,170,45,135,9,14);
}

if(drop6==1)
{
 setcolor(GREEN);
 circle(400,230,2);
arc(400,230,95,85,5);
line(399,225,399,215);
line(401,225,401,215);
line(399,215,401,215);
bar3d(402,218,403,222,0,0);
setfillstyle(2,RED);
sector(590,170,45,135,9,14);
}

if(crystal4==1)
{
  setcolor(5);
  circle(270,230,2);
arc(270,230,95,85,5);
line(269,225,269,215);
line(271,225,271,215);
line(269,215,271,215);
bar3d(272,218,273,222,0,0);
setfillstyle(2,RED);
bar3d(530,200,540,210,0,0);

}
if(crystal5==1)
{
  setcolor(5);
  circle(80,180,2);
arc(80,180,95,85,5);
line(79,175,79,165);
line(81,175,81,165);
line(79,165,81,165);
bar3d(82,168,83,172,0,0);
setfillstyle(2,RED);
bar3d(560,200,570,210,0,0);

}
if(crystal6==1)
{
  setcolor(GREEN);
 circle(400,230,2);
arc(400,230,95,85,5);
line(399,225,399,215);
line(401,225,401,215);
line(399,215,401,215);
bar3d(402,218,403,222,0,0);
/////
setfillstyle(2,RED);
bar3d(590,200,600,210,0,0);
}

if(drop4==1 && drop5==1 && drop6==1 && crystal4==1 && crystal5==1 &&crystal6==1 )

{
  cleardevice();
  sound();
 for(int j=0; j<=30000; j++)
 {
putpixel(random(640),random(480),4);
 delay(0);
 }
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You have used your all items!!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
}
///////////

if(deatha1==1 || deatha2==1 || deatha3==1 || deatha4==1 || deatha5==1 || deatha6==1 ||deatha7==1 )

{
  cleardevice();
 for(int j=0; j<=3000; j++)
 {
 putpixel(random(640),random(480),5);
 delay(0);
 }
 sound();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You went through the laser door ");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
   }





 //  }
     if(((clock()-t1)/CLOCKS_PER_SEC) >100)
    {
  cleardevice();
 for(int j=0; j<=30000; j++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You went through the laser door");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
   }



 if(j==485 && k==115 )
  {
  cleardevice();
  sound1();

 settextstyle(7,0,14);
outtextxy(100,150,"YOu Win!!");
settextstyle(7,0,2);
outtextxy(100,260,"You can escape sucessfully!!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
  display1();
}
    }
    }



////////////////////////////

  void sound2()
{
	for(int tay=1000;tay>=400;tay-=100)
	{
	sound(tay);
	delay(200);
	nosound();
	}
     }
      void sound3()
{
	for(int tay=900;tay>=200;tay-=100)
	{
	sound(tay);
	delay(200);
	nosound();
	}
     }


void body2() //figure
{// setcolor(3);
// setlinestyle(2,1,4);
rectangle(0,100,510,400);
rectangle(5,105,505,395);


 line(440,360,440,395);
 line(480,360,480,395);
 bar(440,360,480,361); //

//
  setfillstyle(11,YELLOW);
 bar3d(50,190,60,230,0,0);
 bar3d(60,190,100,200,0,0);
 setfillstyle(11,YELLOW);


 ///
bar3d(100,230,110,310,0,0);
bar3d(50,260,100,270,0,0);
///
 bar3d(140,190,150,300,0,0);
 /////
bar3d(140,340,150,360,0,0);
bar3d(150,340,220,350,0,0);
 //
 bar3d(180,190,190,300,0,0);
 bar3d(190,190,220,200,0,0);
 bar3d(190,240,220,250,0,0) ;
 bar3d(190,290,220,300,0,0);

  ///
 bar3d(280,190,290,300,0,0);
 bar3d(250,190,280,200,0,0);
 bar3d(250,240,280,250,0,0);
 ////
 bar3d(310,200,400,210,0,0);
 bar3d(310,210,320,300,0,0);
 bar3d(320,290,400,300,0,0);
 bar3d(400,280,410,300,0,0);
 bar3d(400,200,410,250,0,0);
 ////
 bar3d(280,340,410,350,0,0);
 bar3d(280,360,410,370,0,0);
 bar3d(310,350,320,360,0,0);
 bar3d(370,350,380,360,0,0);
 ///
 bar3d(310,130,320,160,0,0);
 bar3d(320,150,400,160,0,0);
 bar3d(400,130,410,160,0,0);
  ////
bar3d(440,130,480,140,0,0);
bar3d(450,140,460,160,0,0);
bar3d(440,210,447,290,0,0);
bar3d(473,210,480,290,0,0);
bar3d(447,250,473,260,0,0);
 ////
 rectangle(50,340,110,360);
 rectangle(60,345,100,355);
 floodfill(55,355,WHITE);
circle(205,230,2);
arc(205,230,95,85,5);
line(204,225,204,215);
line(206,225,206,215);
line(204,215,206,215);
bar3d(207,218,208,222,0,0);

//
circle(80,300,2);
arc(80,300,95,85,5);
line(81,295,81,285);
line(79,295,79,285);
line(79,285,81,285);
bar3d(82,288,83,292,0,0);
//
circle(70,385,2);
arc(70,385,95,85,5);
line(69,380,69,370);
line(71,380,71,370);
line(69,370,71,370);
bar3d(72,373,73,377,0,0);
/////
circle(80,120,2);
arc(80,120,95,85,5);
line(79,115,79,106);
line(81,115,81,106);
line(79,106,81,106);
bar3d(82,109,83,113,0,0);
/////
circle(100,120,2);
arc(100,120,95,85,5);
line(99,115,99,106);
line(101,115,101,106);
line(99,106,101,106);
bar3d(102,109,103,113,0,0);
/////
circle(180,330,2);
arc(180,330,95,85,5);
line(179,325,179,315);
line(181,325,181,315);
line(179,315,181,315);
bar3d(182,318,183,322,0,0);
/////
circle(200,280,2);
arc(200,280,95,85,5);
line(199,275,199,265);
line(201,275,201,265);
line(199,265,201,265);
bar3d(202,268,203,272,0,0);
/////
circle(200,385,2);
arc(200,385,95,85,5);
line(199,380,199,370);
line(201,380,201,370);
line(199,370,201,370);
bar3d(202,373,203,377,0,0);
/////
circle(270,230,2);
arc(270,230,95,85,5);
line(269,225,269,215);
line(271,225,271,215);
line(269,215,271,215);
bar3d(272,218,273,222,0,0);
/////
circle(320,385,2);
arc(320,385,95,85,5);
line(319,380,319,370);
line(321,380,321,370);
line(319,370,321,370);
bar3d(322,373,323,377,0,0);
/////
circle(380,385,2);
arc(380,385,95,85,5);
line(379,380,379,370);
line(381,380,381,370);
line(379,370,381,370);
bar3d(382,373,383,377,0,0);

/////
circle(460,280,2);
arc(460,280,95,85,5);
line(459,275,459,265);
line(461,275,461,265);
line(459,265,461,265);
bar3d(462,268,463,272,0,0);
circle(230,380,2);
arc(230,380,95,85,5);
line(229,375,219,365);
line(231,375,231,365);
line(229,365,231,365);
bar3d(232,368,233,372,0,0);

//////
circle(390,240,2);
arc(390,240,95,85,5);
line(389,235,389,225);
line(391,235,391,225);
line(389,225,391,225);
bar3d(392,228,393,232,0,0);




circle(460,240,2);
arc(460,240,95,85,5);
line(459,235,459,225);
line(461,235,461,225);
line(459,225,461,225);
bar3d(462,228,463,232,0,0);
/////
circle(390,140,2);
arc(390,140,95,85,5);
line(389,135,389,125);
line(391,135,389,125);
line(391,125,389,125);
bar3d(392,128,393,132,0,0);
/////
circle(330,270,2);
arc(330,270,95,85,5);
line(329,265,329,255);
line(331,265,331,255);
line(329,255,331,255);
bar3d(332,258,333,262,0,0);
/////
circle(330,230,2);
arc(330,230,95,85,5);
line(329,225,329,215);
line(331,225,331,215);
line(329,215,331,215);
bar3d(332,218,333,222,0,0);
/////
circle(230,380,2);
arc(230,380,95,85,5);
line(229,375,229,365);
line(231,375,231,365);
line(229,365,231,365);
bar3d(232,368,233,372,0,0);
circle(160,240,2);
arc(160,240,95,85,5);
line(159,235,159,225);
line(161,235,161,225);
line(159,225,161,225);
bar3d(162,228,163,232,0,0);

/////
setfillstyle(1,GREEN);
sector(70,220,45,135,8,11);
sector(340,140,45,135,8,11);
sector(425,380,45,135,8,11);
sector(550,160,45,135,8,11);
sector(565,160,45,135,8,11);
sector(580,160,45,135,8,11);
setfillstyle(1,5);
bar3d(60,180,70,170,0,1);
bar3d(165,270,175,260,0,1);
bar3d(470,150,480,160,0,1);
//////


bar3d(550,180,560,190,0,1);
bar3d(565,180,575,190,0,1);
bar3d(580,180,590,190,0,1);
//////
outtextxy(530,130," Your Items::");










setfillstyle(1,RED);
bar3d(80,360,90,395,0,0);
line(90,105,90,190);
line(241,105,241,150);
line(241,240,241,300);
line(241,360,241,395);
line( 146,105,146,140);
bar(100,200,103,230);
bar(100,310,103,340);
bar(5,350,50,353);
bar(145,140,148,190);
bar(110,360,140,357);
bar(150,250,180,253);
bar(220,200,217,240);
bar(220,250,217,290);
bar(200,300,203,340);
line(220,350,220,395);
bar(240,150,243,240);
bar(240,300,243,360);
bar(250,200,253,240);
bar(300,370,303,395);
bar(400,370,403,395);
line(440,340,440,395);
bar(440,340,505,343);
line(360,240,360,260);
line(350,250,370,250);
bar(320,249,350,251);
bar(370,249,400,251);
bar(359,210,361,240);
bar(359,260,361,290);
bar(447,210,473,213);
bar(447,288,473,290);
  bar(440,360,480,357);

 setcolor(WHITE);



}
////////////
void deathcc1(int *j2,int *k2)
{
  if(*k2==353 && *j2>=5 && *j2<=50)
    {deathc1=1;}
}
void deathcc2(int *j2,int *k2)
{
  if(*j2==100 && *k2>=310 && *k2<=340)
    {deathc2=1;}
}
void deathcc3(int *j2,int *k2)
{
  if(*k2==357 && *j2>=110 && *j2<=140)
    {deathc3=1;}
}
void deathcc4(int *j2,int *k2)
{
  if(*j2==145 && *k2>=140 && *k2<=190)
    {deathc4=1;}
}
void deathcc5(int *j2,int *k2)
{
  if(*j2==250 && *k2>=150 && *k2<=240 || *j2==250 && *k2>=300 && *k2<=360)
    {deathc5=1;}
}
  void deathcc6(int *j2,int *k2)
{
  if(*j2==300 && *k2>=370 && *j2<=390 || *j2==403 && *k2>=370 && *k2<=385)
    {deathc6=1;}
}
void deathcc7(int *j2,int *k2)
{
  if(*k2==210 && *j2>=447 && *j2<=473 || *k2==290 && *j2>=447 && *j2<=473)
    {deathc7=1;}
}
void deathcc8(int *j2,int *k2)
{
  if(*j2==220 && *k2>=200 && *k2<=240 || *j2==220 && *k2>=250 && *k2<=290 || *j2==250 && *k2>=200 && *k2<=240)
    {deathc8=1;}
}
void deathcc9(int *j2,int *k2)
{
  if(*k2==251 && *j2>=370 && *j2<=400)
    {deathc9=1;}
}
void deathcc10(int *j2,int *k2)
{
  if(*j2==361 && *k2>=210 && *k2<=240 || *k2==249 && *j2>=320 && *j2<=350)
    {deathc10=1;}
}
void deathcc11(int *j2,int *k2)
{
  if(*k2==340 && *j2>=440 && *j2<=505 || *k2==360 && *j2>=440 && *j2<=480)
    {deathc11=1;}

}
///////////
void caption1()
{
  setcolor(12);
  settextstyle(0,HORIZ_DIR,0);
      outtextxy(10,30,"Escape From The Maze");
  outtextxy(10,40,"Using space to quit the maze");
 
  outtextxy(10,420,">>Drop=Indicate the real keys.");
  outtextxy(350,420,">>Crystal=Indicate the fake keys.");
  outtextxy(10,430,">>Your given time is 100 seconds(Be quick!!)");

  outtextxy(520,280," w -> Up");
  outtextxy(520,290," s -> Down");
  outtextxy(520,300," a -> Left");
  outtextxy(520,310," d -> Right");
 // outtextxy(545,30,"s");

  setcolor(WHITE);
}
void ball1(int j2,int k2 ,int l)   //ball
{
 circle(j2,k2,l);
 line(j2-6,k2,j2-2,k2);
 line(j2+2,k2,j2+6,k2);
 arc(j2-4,k2,0,180,2);
 arc(j2+4,k2,0,180,2);
 setfillstyle(1,YELLOW);
 floodfill(j2,k2,WHITE);
 line(j2-6,k2,j2-6,k2+7);
 line(j2-4,k2,j2-4,k2+9);
 line(j2+6,k2,j2+6,k2+7);
 line(j2+4,k2,j2+4,k2+9);
 setfillstyle(1,BLUE);
 floodfill(j2-5,k2+4,WHITE);
 floodfill(j2+5,k2+4,WHITE);
 setfillstyle(1,RED);
 fillellipse(j2,k2+5,1,2);


 }
  /*if(*j2==215 && *k2>=205 && *k2<=230 )
   {
  k2ey=1;

    }
*/

void k2ey1(int *j2,int *k2)
{
  if(*j2==60 && *k2>=372 && *k2<=390)
  realk2ey1=1;
//k2eyconditionca=1;
}
void k2ey2(int *j2,int*k2)
{
    if(*j2==70 && *k2>=106 && *k2<=125 || *j2>=75&& *j2<=85 && *k2==135)
      realk2ey2=1;

}
///
void k2ey3(int *j2,int *k2)
{
    if(*j2==115 && *k2>=106 && *k2<=125 || *j2>=95 && *j2<=105 && *k2==135)
      realk2ey3=1;

}
///
void k2ey4(int *j2,int *k2)
{
    if(*j2==185 && *k2>=370 && *k2<=390 || *k2==360 && *j2>=195 && *j2<=205)
      realk2ey4=1;


}
///
void k2ey5(int *j2,int *k2)
{
    if(*k2==355 && *j2>=225 && *j2<=235)
      realk2ey5=1;

}
///
void k2ey6(int *j2,int *k2)
{
    if(*j2==375 && *k2>=125 && *k2<=145 || *k2==115 && *j2>=135 && *j2<=145)
      realk2ey6=1;

}
///
void k2ey7(int *j2,int *k2)
{
    if(*j2== 365&& *k2>=370 && *k2<=385 || *j2==395 && *k2>=370 && *k2<=385 )
      realk2ey7=1;

}
///
void k2ey8(int *j2,int *k2)
{
    if(*k2==220 && *j2>=450 && *j2<=470)
      realk2ey8=1;

}
///
void k2ey9(int *j2,int *k2)
{
    if(*j2==210 && *k2>=210 && *k2<=230)
      realk2ey9=1;

}
///
void k2ey10(int *j2,int *k2)
{
    if(*k2==245 && *j2>=385 && *j2<=395)
      realk2ey10=1;

}




void k2ey11(int *j2,int *k2)
{
    if(*k2==240 && *j2>=320 && *j2<=350)
      realk2ey11=1;

}
///

void conditionb1(int *j2,int *k2)
{

  if(
  *j2==15 && *k2>=0 && *k2<=400 ||
*j2==70 && *k2>=100 && *k2<=230 ||
 *j2==110 && *k2>=190 && *k2<=200 ||
 *j2==120 && *k2>=230 && *k2<=310 ||
 *j2==160 && *k2>=210 && *k2<=300 ||
*j2==200 && *k2>=200 && *k2>=240 ||
 *j2==200 && *k2>=250 && *k2<=290 ||
*j2==230 && *k2>=190 && *k2<=200 ||
 *j2==230 && *k2>=240 && *k2<=250 ||
 *j2==230 && *k2>=280 && *k2>=290 ||
 *j2==300 && *k2>=190 && *k2<=300 ||
*j2==330 && *k2>=210 && *k2<=290 ||
 *j2==420 && *k2>=200 && *k2<=250 ||
*j2==420 && *k2>=280 && *k2<=300 ||
*j2==460 && *k2>=200 && *k2<=250 ||
*j2==460 && *k2>=260 && *k2<=300 ||
*j2==490 && *k2>=200 && *k2<=300 ||
*j2==120 && *k2>=340 && *k2<=360 ||
 *j2==160 && *k2>=350 && *k2<=360 ||
*j2==230 && *k2>=340 && *k2<=350 ||
*j2==420 && *k2>=340 &&  *k2<=350 ||
 *j2<=420 &&  *k2>=360 && *k2<=370 ||
 *j2==490 && *k2>=360 && *k2<=400 ||
 *j2==160 && *k2>=100 && *k2<=140 ||
*j2==220 && *k2>=100 && *k2<=140 ||
*j2==330 && *k2>=130 && *k2<=150 ||
*j2==420 && *k2>=130 &&  *k2<=160 ||
*j2==470 &&  *k2>=140 && *k2<=160 ||
*j2==490 && *k2>=130 && *k2<=140  )
{*j2+=5;}

  if(
  * j2==495 && *k2>=0 && *k2<=400 ||
 *j2==40 && *k2>=190 && *k2<=230 ||
*j2==40 && *k2>=260 && *k2<=270 ||
*j2==90 && *k2>=230 && *k2<=260 ||
*j2==130 && *k2>=210 && *k2<=300 ||
 *j2==170 && *k2>=190 && *k2<=300 ||
*j2==240 && *k2>=190 && *k2<=200 ||
 *j2==240 && *k2>=240 && *k2<=250 ||
 *j2==260 && *k2>=200 && *k2<=240 ||
*j2==270 && *k2>= 250 && *k2<=300 ||
 *j2==300 && *k2>=200 && *k2<=300 ||
*j2==390 && *k2>=200 && *k2<=250 ||
*j2==390 && *k2>=280 && *k2<=300 ||
*j2==430 && *k2>=210 && *k2<=290 ||
*j2==460 && *k2>=200 && *k2<=250||
*j2== 460 && *k2>=260 && *k2<=300 ||
*j2==100 && *k2>=100 &&  *k2<=140 ||
 *j2==160 &&  *k2>=100 && *k2<=140 ||
*j2==300 && *k2>=130 &&  *k2<=160 ||
*j2==390 && *k2>=130 && *k2<=150 ||
*j2==450 && *k2>=120 && *k2<=130 ||
  *j2==440 && *k2>=140 && *k2<=160 ||
*j2==40 && *k2>=340 &&  *k2<=360 ||
*j2==130 && *k2>= 340 && *k2<=360 ||
*j2==270 && *k2>=340 && *k2<=350 ||
 *j2==290 && *k2>=360 && *k2<=370 ||
 *j2==430 && *k2>=360 && *k2<=400
 )
{*j2-=5;}


if( *k2==115 && *j2>=0 && *j2<=500 ||
*k2==140 && *j2>=120 && *j2<=160 ||
 *k2==140 && *j2>=180 && *j2<=220 ||
 *k2==170 && *j2>=310 && *j2<=410 ||
*k2==150 && *j2>=440 && *j2<=450 ||
 *k2==210 && *j2>=60 && *j2<=100 ||
*k2==240 && *j2>=60 && *j2<=70 ||
 *k2==280 && *j2>=50  && *j2<=100 ||
*k2==320 && *j2>=100 && *j2<=110 ||
 *k2==310 && *j2>=140 && *j2<=150 ||
*k2==210 && *j2>=190  && *j2<=220 ||
*k2==260 && *j2>=190 && *j2<=220 ||
*k2==300 && *j2>=190 && *j2<=230 ||
*k2==300 && *j2>=440 &&  *j2<=450 ||
*k2==300 && *j2>=470 &&  *j2<=480 ||
 *k2==210 && *j2>=250 && *j2<=280 ||
*k2== 260 && *j2>=250 &&  *j2<=290 ||
 *k2==310 && *j2>=280 && *j2<=290 ||
*k2==220 && *j2>=320 &&  *j2<=400 ||
*k2==260 && *j2>=400 && *j2<=410 ||
*k2==310 && *j2>=310 && *j2<=410 ||
*k2==370 && *j2>=60 && *j2<=120 ||
 *k2==360 && *j2>=160 && *j2<=230 ||
*k2==370 && *j2>=150 && *j2<=160 ||
 *k2==380 && *j2>=280 && *j2<=420)
{*k2+=5;}
if(*k2== 395 && *j2>=0 && *j2<=500 ||
*k2==360 && *j2>=450 && *j2<=490 ||
*k2==330 && *j2>=280 && *j2<=420 ||
  *k2==330 && *j2>=140 && *j2<=220 ||
 *k2==330 && *j2>=50 && *j2<=110 ||
*k2==180 && *j2>=60 && *j2<=110 ||
*k2==220 && *j2>100 && *j2<=110 ||
 *k2==250 && *j2>=50  && *j2<=100 ||
 *k2==240 && *j2>=450 &&  *j2<=470 ||
 *k2==270 && *j2>=450 &&  *j2<=470 ||
*k2==180 && *j2>=140 && *j2<=150 ||
*k2==180 && *j2>=180 && *j2<=210 ||
 *k2==230 && *j2>=190  && *j2<=220 ||
*k2==280 && *j2>=190 && *j2<=220 ||
*k2==180 && *j2>=240 && *j2<=290 ||
 *k2==230 && *j2>=260 && *j2<=280 ||
*k2== 190 && *j2>=310 &&  *j2<=410 ||
 *k2==280 && *j2>=320 && *j2<=400 ||
*k2==270 && *j2>=400 &&  *j2<=410 ||
*k2==200 && *j2>=440 &&  *j2<=450 ||
*k2==200 && *j2>=470 &&  *j2<=480 ||
*k2==120 && *j2>=310 && *j2<=320 ||
 *k2==120 && *j2>=400 && *j2<=410 ||
 *k2==140 && *j2>=320 && *j2<=400 ||
 *k2==120 && *j2>=440 && *j2<=480 )
{*k2-=5;}


}

//////////////////////////////


////////////////////////////////////////////

void fak2ek2ey(int *j2,int *k2)
{ if(*j2==65 && *k2>=285 && *k2<=305 || *k2==315 && *j2>=75 && *j2<=85)
    {sound(600);
    delay(500);
    nosound();}
  if(*j2==190 && *k2>=300&& *k2<=340 )
    {sound(600);
    delay(500);
    nosound();}
    if(*k2==215 && *j2>=150 && *j2<=170)
    {
      sound(600);
    delay(500);
    nosound();
    }
    if(*j2==165 && *k2>=310 && *k2<=330)
     {
      sound(600);
    delay(500);
    nosound();
    }

  if(*j2==305 && *k2>=370 && *k2<=390)
    {sound(600);
    delay(500);
    nosound();}
  if(*k2==295 && *j2>=455 && *j2<=465)
    {sound(600);
    delay(500);
    nosound();}
  if(*j2==215 && *k2>=265 && *k2<=285)
    {sound(600);
    delay(500);
    nosound();}
  if(*j2==255 && *k2>=215 && *k2<=235)
    {sound(600);
    delay(500);
    nosound();}
  if(*j2==345 && *k2>=215 && *k2<=235)
    {sound(600);
    delay(500);
    nosound();}
}
void crystal(int *j2,int *k2)

{
  if(*j2>=60 && *j2<=80 && *k2==230 || *j2==80 && *k2>=220 && *k2<=230)
    {drop8=1;


    }
    if(*j2>=330 && *j2<=350 && *k2==130|| *j2==330 && *k2>=130 && *k2<=150)
      {drop9=1;

      }
      if(*j2>=420 && *j2<=430 && *k2==370|| *j2==410 && *k2>=370 && *k2<=390)
      {drop10=1;

      }
      if(*j2>=60 && *j2<=70 && *k2==160|| *j2==50 && *k2>=170 && *k2<=180)
      {crystal9=1;

      //  setfillstyle(550,160,WHITE);

      }
      if(*j2>=165 && *j2<=175 && *k2==280)
      {crystal10=1;

      //  floodfillstyle(565,160,WHITE);
      }
if(*j2>=460 && *j2<=470 && *k2==160||*j2==480 && *k2>=150 && *k2<=160)
      {crystal11=1;



      }
      }


void level2()
{

 cleardevice();
 cleardevice();
 body2();          //draw the figure
 ball1(j2,k2,l);
 caption1();     //draw the  ball
for(i=0;i<m++;i++){
conditionb1(&j2,&k2); //cheack2ing condition
// stopcondition(&j2,&k2);
// countm(&co_mo,&inc);
 c=getch();

 cleardevice();
 if(c=='a') j2-=5;
 if(c=='s') k2+=5;
 if(c=='d') j2+=5;
 if(c=='w') k2-=5;
 if(c==' ') display1();
  //*p=co_mo;
caption1();
 body2();        //draw the figure
 ball1(j2,k2,l);
// k2eycondition(&j2,&k2);
 k2ey1(&j2,&k2);
 k2ey2(&j2,&k2);
 k2ey3(&j2,&k2);
 k2ey4(&j2,&k2);
 k2ey5(&j2,&k2);
 k2ey6(&j2,&k2);
 k2ey7(&j2,&k2);
 k2ey8(&j2,&k2);
 k2ey9(&j2,&k2);
 k2ey10(&j2,&k2);
 k2ey11(&j2,&k2);
 fak2ek2ey(&j2,&k2);

 //ghostcondition(&j2,&k2);

  //ghost(speed,loop,m1,p2,loop1,p3,p4,loop2,p5,p6,loop3,p7,p8);
deathcc1(&j2,&k2);
deathcc2(&j2,&k2);
deathcc3(&j2,&k2);
deathcc4(&j2,&k2);
deathcc5(&j2,&k2);
deathcc6(&j2,&k2);

deathcc7(&j2,&k2);
deathcc8(&j2,&k2);
deathcc9(&j2,&k2);
deathcc10(&j2,&k2);
deathcc11(&j2,&k2);

if(realk2ey1==1)
{deathc1=0;
setfillstyle(0,0);
bar(5,350,50,353);

}
if(realk2ey2==1)
{deathc2=0;
  setfillstyle(0,0);
bar(100,310,103,340);
}
if(realk2ey3==1)
{deathc3=0;
  setfillstyle(0,0);
bar(110,360,140,357);

}
if(realk2ey4==1)
{deathc4=0;
  setfillstyle(0,0);
bar(145,140,148,190);


}
if(realk2ey5==1)
{deathc5=0;
  setfillstyle(0,0);
bar(240,150,243,240);
bar(240,300,243,360);

}
if(realk2ey6==1)
{deathc6=0;
  setfillstyle(0,0);
bar(300,370,303,395);
bar(400,370,403,395);
}
if(realk2ey7==1)
{deathc7=0;
  setfillstyle(0,0);
  bar(447,210,473,213);
  bar(447,288,473,290);
}
if(realk2ey8==1)
{deathc8=0;
  setfillstyle(0,0);
bar(220,200,217,240);
bar(250,200,253,240);
bar(220,250,217,290);
}
if(realk2ey9==1)

{deathc9=0;
  setfillstyle(0,0);
bar(370,249,400,251);
bar(410,340,505,343);
}
if(realk2ey10==1)
{deathc10=0;
  setfillstyle(0,0);
bar(359,210,361,240);
bar(320,249,350,251);
}

if(realk2ey11==1)
{deathc11=0;
  setfillstyle(0,0);
bar(440,360,480,357);
bar(359,260,361,290);
}
crystal(&j2,&k2);
if(drop8==1)
{
  setcolor( GREEN);
     circle(80,120,2);
arc(80,120,95,85,5);
line(79,115,79,106);
line(81,115,81,106);
line(79,106,81,106);
bar3d(82,109,83,113,0,0);

      setfillstyle(2,RED);
      sector(550,160,45,135,8,11);
    //  floodfill(550,160,WHITE);
}
if(drop9==1)
{
  setcolor(GREEN);
  circle(380,385,2);
arc(380,385,95,85,5);
line(379,380,379,370);
line(381,380,381,370);
line(379,370,381,370);
bar3d(382,373,383,377,0,0);

/////


  setfillstyle(2,RED);
  sector(565,160,45,135,8,11);
//  floodfill(565,45,WHITE);

}
if(drop10==1)
{
  setcolor(GREEN);
  circle(460,240,2);
arc(460,240,95,85,5);
line(459,235,459,225);
line(461,235,461,225);
line(459,225,461,225);
bar3d(462,228,463,232,0,0);

/////


  setfillstyle(2,RED);
  sector(580,160,45,135,8,11);
//  floodfill(565,45,WHITE);

}
if(crystal11==1)
{
  setcolor(5);

circle(460,280,2);
arc(460,280,95,85,5);
line(459,275,459,265);
line(461,275,461,265);
line(459,265,461,265);
bar3d(462,268,463,272,0,0);
//


  setfillstyle(2,RED);
  bar3d(550,190,560,180,0,1);
}
if(crystal10==1)
{
  setcolor(5);
   circle(160,240,2);
arc(160,240,95,85,5);
line(159,235,159,225);
line(161,235,161,225);
line(159,225,161,225);
bar3d(162,228,163,232,0,0);




  setfillstyle(2,RED);
  bar3d(565,190,575,180,0,1);
}
if(crystal9==1)
{
  setcolor(5);

 circle(80,300,2);
arc(80,300,95,85,5);
line(81,295,81,285);
line(79,295,79,285);
line(79,285,81,285);
bar3d(82,288,83,292,0,0);

  setfillstyle(2,RED);
  bar3d(580,190,590,180,0,1);

}

if(drop8==1&& drop9==1 &&drop10==1&& crystal10==1||
drop8==1&& drop9==1 &&drop10==1&& crystal11==1||
drop8==1&& drop9==1 &&crystal9==1&& crystal10==1||
drop8==1&& drop9==1 &&crystal10==1&& crystal11==1||
drop8==1&& drop10==1 &&crystal9==1&& crystal11==1||
drop9==1&& drop10==1 &&crystal9==1&& crystal10==1||
drop9==1&& drop10==1 &&crystal10==1&& crystal11==1||
drop9==1&& drop10==1 &&crystal9==1&& crystal11==1||
drop8==1&& drop10==1 &&crystal9==1&& crystal10==1||
drop8==1&& drop10==1 &&crystal10==1&& crystal11==1||
drop8==1&& drop10==1 &&crystal9==1&& crystal11==1||
drop8==1&& crystal9==1 &&crystal10==1&& crystal11==1||
drop9==1&& crystal9==1 &&crystal10==1&& crystal11==1||
drop9==1&& crystal9==1 &&crystal10==1&& crystal11==1
)

 //   cleardevice();
    {
    cleardevice();
for(int j2=0; j2<=3000; j2++)
 {
 putpixel(random(640),random(480),5);
 delay(0);
 }
 sound2();
 settextstyle(7,0,7);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You Have used all the chances!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
display1();
  }
  if(deathc1==1 || deathc2==1 || deathc3==1 || deathc4==1 || deathc5==1 || deathc6==1 || deathc7==1 || deathc8==1 || deathc9==1 || deathc10==1 || deathc11==1)
  {
   cleardevice();
for(int j2=0; j2<=3000; j2++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound2();
 settextstyle(7,0,7);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You went through the laser door!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
display1();

}
 if(((clock()-t1)/CLOCKS_PER_SEC) >10)
    {
  cleardevice();
 for(int j=0; j<=3000; j++)
 {
 putpixel(random(640),random(480),9);
 delay(0);
 }
 sound2();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You Are Out Of Time ");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
   }
  //draw the ball
 //   conditionb1(&j02,&k2);
 if(k2>=395 && j>440 && j<480)
    {
for(int j2=0; j2<=30000; j2++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound3();
 settextstyle(7,0,7);
outtextxy(100,150,"YOU WIN");
settextstyle(7,0,2);
outtextxy(100,260,"You escaped successfully!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
display1();
  }

}
}


  void sound4()
{
  for(int tay=1000;tay>=400;tay-=100)
  {
  sound(tay);
  delay(200);
  nosound();
  }
     }
      void sound5()
{
  for(int tay=900;tay>=200;tay-=100)
  {
  sound(tay);
  delay(200);
  nosound();
  }
     }

void body5() //figure
{// setcolor(3);
// setlinestyle(2,1,4);
  setfillstyle(1,RED);
rectangle(0,100,500,400);
rectangle(5,105,495,395);
////
bar3d(50,130,60,190,0,0);
bar3d(60,130,130,140,0,0);
bar3d(130,130,140,190,0,0);
bar3d(90,140,100,190,0,0);
///////
rectangle(160,120,260,150);
rectangle(170,130,250,140);
floodfill(165,125,WHITE);
////
bar3d(160,190,170,250,0,0);
bar3d(110,240,160,250,0,0);
//////
bar3d(100,280,110,370,0,0);
bar3d(60,320,150,330,0,0);
////
bar3d(190,190,200,230,0,0);
bar3d(200,190,230,200,0,0);
///
bar3d(230,230,240,260,0,0);
bar3d(260,230,270,260,0,0);
bar3d(240,250,260,260,0,0);
/////
bar3d(340,200,350,250,0,0);
bar3d(350,240,370,250,0,0);
bar3d(360,250,370,300,0,0);
bar3d(250,190,300,200,0,0);
bar3d(300,190,310,250,0,0);
bar3d(190,250,200,300,0,0);
bar3d(200,290,230,300,0,0);
//////
bar3d(250,290,300,300,0,0);
bar3d(300,270,310,300,0,0);
///////////////
bar3d(300,150,350,160,0,0);
bar3d(340,160,350,180,0 ,0);
bar3d(350,170,380,180,0,0);
//bar3d(380,170,390,200,0,0);
//////////////
bar3d(200,340,290,350,0,0);
bar3d(290,340,300,370,0,0);
///////////////
bar3d(320,360,400,370,0,0);
bar3d(350,360,360,340,0,0);
///////////////////
//bar3d(380,120,390,150,0,0);
bar3d(410,120,420,150,0,0);
bar3d(390,140,410,150,0,0);
//////
rectangle(30,230,80,270);
rectangle(40,240,70,260);
floodfill(35,240,WHITE);
bar3d(410,170,420,220,0,0);
bar3d(470,170,480,220,0,0);
bar3d(420,210,470,220,0,0);
////
bar3d(460,105,470,130,0,0);
line(470,130,495,130);
/////

//floodfill(425,340,WHITE);
//////////////// ;
setfillstyle(1,YELLOW);
line(40,281,70,281);
bar(5,280,40,283);
bar(70,280,100,283);
bar(110,280,140,283);
line(140,281,160,281);
line(158,330,158,360);
bar(157,280,160,330);
bar(157,360,160,395);

bar(157,150,160,190);
bar(157,105,160,120);
bar(60,187,90,190);
bar(100,187,130,190);
bar(197,230,200,250);
bar(230,290,250,293);
bar(230,197,250,200);
bar(260,200,263,230);
bar(270,240,300,243);
bar(300,250,303,270);
bar(300,300,303,340);
bar(300,370,303,395);
bar(300,160,303,190);
bar(300,105,303,150);
line(420,170,430,170);
line(460,170,470,170);
bar(430,169,460,171);
line(475,148,495,148);
bar(420,150,475,147);
bar(420,105,423,120);
bar(470,130,495,127);
bar(260,260,263,290);


 setcolor(WHITE);
 circle(210,280,2);
arc(210,280,95,85,5);
line(209,275,209,265);
line(211,275,211,265);
line(209,265,211,265);
bar3d(212,268,213,272,0,0);
//
circle(290,280,2);
arc(290,280,95,85,5);

line(289,275,289,265);
line(291,275,291,265);
line(289,265,291,265);
bar3d(292,268,293,272,0,0);
/////
circle(290,220,2);
arc(290,220,95,85,5);
line(289,215,289,205);
line(291,215,291,205);
line(289,205,291,205);
bar3d(292,208,293,212,0,0);
/////
circle(270,370,2);
arc(270,370,95,85,5);
line(269,365,269,355);
line(271,365,271,355);
line(269,355,271,355);
bar3d(272,358,273,362,0,0);
/////
circle(270,150,2);
arc(270,150,95,85,5);
line(269,145,269,135);
line(271,145,271,135);
line(269,135,271,135);
bar3d(272,138,273,142,0,0);
/////
circle(90,310,2);
arc(90,310,95,85,5);
line(89,305,89,295);
line(91,305,91,295);
line(89,295,91,295);
bar3d(92,298,93,302,0,0);
/////
circle(120,360,2);
arc(120,360,95,85,5);
line(119,355,119,345);
line(121,355,121,345);
line(119,345,121,345);
bar3d(122,348,123,352,0,0);
/////
circle(115,170,2);
arc(115,170,95,85,5);
line(114,165,114,155);
line(116,165,116,155);
line(114,155,116,155);
bar3d(117,158,118,162,0,0);
/////
circle(360,230,2);
arc(360,230,95,85,5);
line(359,225,359,215);
line(361,225,361,215);
line(359,215,361,215);
bar3d(362,218,363,222,0,0);
/////
circle(350,280,2);
arc(350,280,95,85,5);
line(349,275,349,265);
line(351,275,351,265);
line(349,265,351,265);
bar3d(352,268,353,272,0,0);
/////
circle(360,385,2);
arc(360,385,95,85,5);
line(359,380,359,370);
line(361,380,361,370);
line(359,370,361,370);
bar3d(362,372,363,376,0,0);
/////
circle(360,160,2);
arc(360,160,95,85,5);
line(359,155,359,145);
line(361,155,361,145);
line(359,145,361,145);
bar3d(362,148,363,152,0,0);
/////
circle(440,130,2);
arc(440,130,95,85,5);
line(439,125,439,115);
line(441,125,441,115);
line(439,115,441,115);
bar3d(442,118,443,122,0,0);
/////

circle(70,180,2);
arc(70,180,95,85,5);
line(69,175,69,165);
line(71,175,71,165);
line(69,165,71,165);
bar3d(72,168,73,172,0,0);


circle(440,200,2);
arc(440,200,95,85,5);
line(439,195,439,185);
line(441,195,441,185);
line(439,185,441,185);
bar3d(442,188,443,192,0,0);

/////
setfillstyle(1,GREEN);
sector(125,310,45,135,9,14);
sector(335,350,45,135,9,14);
sector(400,130,45,135,9,14);
/////
sector(530,170,45,135,9,14);
sector(560,170,45,135,9,14);
sector(590,170,45,135,9,14);
/////
setfillstyle(1,5);
bar3d(80,340,90,350,0,1);
bar3d(320,170,330,180,0,1);
bar3d(370,340,380,350,0,1);

///

bar3d(530,200,540,210,0,1);
bar3d(560,200,570,210,0,1);
bar3d(590,200,600,210,0,1);
 setfillstyle(1,0);

outtextxy(530,140," Your Items::");
}
void ball5(int j3,int k3,int l)   //ball
{
 circle(j3,k3,l);
 setfillstyle(1,BLACK);
 fillellipse(j3-5,k3-2,2,3);
 fillellipse(j3+5,k3-2,2,3);

 arc(j3,k3,235,315,8);

 setfillstyle(SOLID_FILL,14);
 floodfill(j3,k3,WHITE);
}
void deathbb1(int *j3,int *k3)
{
  if(*j3==260 && *k3>=260 && *k3<=290)
    {deathb1=1;}
}
void deathbb2(int *j3,int *k3)
{
  if(*k3==243 && *j3>=270 && *j3<=300)
    {deathb2=1;}
}
void deathbb3(int *j3,int *k3)
{
  if(*j3==200 && *k3>=230 && *k3<=250 || *k3==290 && *j3>=230 && *j3<=250 || *k3==200 && *j3>=230 && *j3<=250 || *j3==300 && *k3>=250 && *k3<=270 )
    {deathb3=1;}
}
void deathbb4(int *j3,int *k3)
{
  if(*j3==160 && *k3>=150 && *k3<=190 || *j3==160 && *k3>=360 && *k3<=395 || *j3==160 && *k3>=150 && *k3<=190)
    {deathb4=1;}
}
void deathbb5(int *j3,int *k3)
{
  if(*k3==200 && *j3>=100 && *j3<=130)
    {deathb5=1;}
}
void deathbb6(int *j3,int *k3)
{
  if(*j3==300 && *k3>=300 && *k3<=340 || *j3==300 && *k3>=370 && *k3<=395 || *j3==300 && *k3>=105 && *k3<105 || *j3==300 && *k3>=160 && *k3<=190)
    {deathb6=1;}
}
void deathbb7(int *j3,int *k3)
{
  if(*k3==169 && *j3>=430 && *j3<=460)
    {deathb7=1;}
}
void deathbb8(int *j3,int *k3)
{
  if(*k3==200 && *j3>=60 && *j3<=90)
    {deathb8=1;}
}
void deathbb9(int *j3,int *k3)
{
  if(*k3==150 && *j3>=420 && *j3<=475)
    {deathb9=1;}
}
void deathbb10(int *j3,int *k3)
{
  if(*k3==130 && *j3>=470 && *j3<=495)
    {deathb10=1;}
}
void caption3()
{
  setcolor(12);
  settextstyle(0,HORIZ_DIR,0);
      outtextxy(10,30,"Escape From The Maze");
  outtextxy(10,40,"Using space to quit the maze");
  outtextxy(10,420,">>Drop=Indicate the real keys.");
  outtextxy(350,420,">>Crystal=Indicate the fake keys.");
  outtextxy(10,430,">>Your given time is 100 seconds(Be quick!!)");

  setcolor(5);

  setcolor(12);
  outtextxy(520,280," w -> Up");
  outtextxy(520,290," s -> Down");
  outtextxy(520,300," a -> Left");
  outtextxy(520,310," d -> Right");
 // outtextxy(545,30,"s");

  setcolor(WHITE);
}

void k3ey12(int *j3,int *k3)
{
  if(*j3==225 && *k3>=265 && *k3<=285||*k3==255&&*j3>=205&&*j3<=215)
  realk3ey12=1;
}
void k3ey13(int *j3,int*k3)
{
    if(*j3==275 && *k3>=265 && *k3<=285 || *j3>=285&& *j3<=295 && *k3==255)
      realk3ey13=1;
}
///
void k3ey14(int *j3,int *k3)
{
    if(*j3==275 && *k3>=205 && *k3<=225 || *j3>=285 && *j3<=295 && *k3==235)
      realk3ey14=1;
}
///
void k3ey15(int *j3,int *k3)
{
    if(*j3==255 && *k3>=355 && *k3<=375 || *k3==385 && *j3>=265 && *j3<=275)
      realk3ey15=1;
}
void k3ey16(int *j3,int *k3)
{
    if(*j3>=85 && *j3<=95 && *k3==285||*j3==75&&*k3>=295&&*k3<=315)
      realk3ey16=1;
}
///
void k3ey17(int *j3,int *k3)
{
    if(*k3==185 && *j3>=110 && *j3<=120)
      realk3ey17=1;
}
void k3ey18(int *j3,int *k3)
{
    if(*j3==345 && *k3>=270 && *k3<=290 || *j3>=345 && *j3<=355 && *k3==290)
      realk3ey18=1;
}
void k3ey19(int *j3,int *k3)
{
    if(*k3==175 && *j3>=430 && *j3<=450 || *j3==460 && *k3>=185 && *k3<=195)
      realk3ey19=1;
}
///
void k3ey20(int *j3,int *k3)
{
    if(*k3==195 && *j3>=60 && *j3<=80)
      realk3ey20=1;
}
void k3ey21(int *j3,int *k3)
{
    if(*k3==145 && *j3>=435 && *j3<=445)
      realk3ey21=1;
}
///
void fak3ek3eyb(int *j3,int *k3)
{ if(*k3==165 && *j3>=265 && *j3<=275)
    {sound(600);
    delay(500);
    nosound();}
  if(*j3==135 && *k3>=345 && *k3<=365 || *k3==375 && *j3>=115 && *j3<=125)
    {sound(600);
    delay(500);
    nosound();}
  if(*j3==345 && *k3>=370 && *k3<=385||*j3==375&&*k3>=370&&*k3<=385||*j3==375&&*k3>=225&&*k3<=235||*k3==215&&*j3>=355&&*j3<=365)
    {sound(600);
    delay(500);
    nosound();
  }
  if(*k3==130 && *j3>=350 && *j3<=370 || *j3==375 && *k3>=145 && *k3<=165)
    {sound(600);
    delay(500);
    nosound();
  }

}
void crystalgroup1(int *j3,int *k3)
{
if(*j3>=110 && *j3>=130 && *k3==300 || *j3==140 && *k3>=300 && *k3<=320)
{
  drop1=1;
}
if(*j3>=325 && *j3<=340 && *k3==335 || *j3==320 && *k3>=340 && *k3<=360)
{
  drop2=1;

}
if(*j3>=395 && *j3>=405 && *k3==110 )
{
  drop3=1;
}
if(*j3>=75 && *j3<=95 && *k3==360 || *j3==70 && *k3>=335 && *k3<=355)
{
  crystal1=1;

}

if(*j3>=315 && *j3<=335 && *k3==190 || *j3==310 && *k3>=165 && *k3<=185)
{
  crystal2=1;

}
if(*j3>=365 && *j3<=385 && *k3==335 || *j3==390 && *k3>=340 && *k3<=360)
{
  crystal3=1;

}
}
/////////////


void condition6(int *j3,int *k3)
{ if(*j3==15 && *k3>=0 && *k3<=400 ||
 *j3==80 && *k3>=230 && *k3<=270 ||
*j3==180 && *k3>=190 && *k3<=320 ||
 *j3==210 && *k3>=200 && *k3<=230 ||
*j3==210 && *k3>=250 && *k3<=290 ||
*j3==240 && *k3>=190 && *k3<=200 ||
 *j3==250 && *k3>=230 && *k3<=250 ||
*j3==280 && *k3>=230 && *k3<=260 ||
 *j3==240 && *k3>=290 && *k3<=300 ||
 *j3==320 && *k3>=190 && *k3<=250 ||
 *j3==320 && *k3>=270 && *k3<=300 ||
 *j3==360 && *k3>=200 && *k3<=240 ||
 *j3==380 && *k3>=240 && *k3<=300 ||
*j3==120 && *k3>=280 && *k3<=320 ||
 *j3==120 && *k3>=330 && *k3<=370 ||
 *j3==160 && *k3>=320 && *k3<=330 ||
*j3==310 && *k3>=340 && *k3<=370 ||
*j3==370 && *k3>=340 && *k3<=360 ||
 *j3==410 && *k3>=360 && *k3<=370 ||
 *j3==70 && *k3>=140 &&  *k3<=190 ||
*j3==110 && *k3>=140 && *k3<=190 ||
 *j3==150 && *k3>=130 && *k3<=190 ||
*j3==270 && *k3>=130 && *k3<=150 ||
 *j3==360 && *k3>=150 && *k3<=170 ||
 *j3==400 && *k3>=170 && *k3<=200 ||
*j3==400 && *k3>=120 && *k3<=140 ||
*j3==180 && *k3>=210 && *k3<=290 ||
*j3==430 && *k3>=120 && *k3<=150 ||
 *j3==480 && *k3>=100 && *k3<=130 ||
*j3==430 && *k3>=170 && *k3<=210 ||
 *j3==490 && *k3>=170 &&  *k3<=220 )
{*j3+=5;}
if(*j3==495 && *k3>=0 && *k3<=400 ||
*j3==40 && *k3>=130 && *k3<=190 ||
*j3==80 && *k3>=140 && *k3<=190 ||
 *j3==120 && *k3>=140 && *k3<=190 ||
 *j3==160 && *k3>=130 && *k3<=150 ||
*j3==290 && *k3>=150 && *k3<=160 ||
*j3==330 && *k3>=160 && *k3<=180 ||
*j3==370 && *k3>=180 && *k3<=200 ||
 *j3==370 && *k3>=120 && *k3<=150 ||
 *j3==400 && *k3>=120 && *k3<=140 ||
*j3==450 && *k3>=100 && *k3<=130 ||
*j3==400 && *k3>=170 && *k3<=220 ||
*j3==460 && *k3>=170 && *k3<=220 ||
 *j3==20 && *k3>=230 && *k3<=270 ||
 *j3==100 && *k3>=240 && *k3<=260 ||
*j3==150 && *k3>=190 && *k3<=240 ||
//*j3==150 && *k3>=250 && *k3<=290 ||
 *j3==185 && *k3>=190 && *k3<=230 ||
 *j3==185 && *k3>=250 && *k3<=300 ||
*j3==220 && *k3>=230 && *k3<=260 ||
*j3==255 && *k3>=230 && *k3<=250  ||
*j3==290 && *k3>=200 && *k3<=250 ||
 *j3==290 && *k3>=270 && *k3<=290 ||
 *j3==240 && *k3>=190 && *k3<=200 ||
*j3==240 && *k3>=290 && *k3<=300 ||
*j3==330 && *k3>=200 && *k3<=250 ||
 *j3==360 && *k3>=250 && *k3<=300 ||
 *j3==50 && *k3>=320 && *k3<=330 ||
*j3==90 && *k3>=280 && *k3<=320 ||
*j3==90 && *k3>=330 && *k3<=370 ||
*j3==190 && *k3>=340 && *k3<=350 ||
 *j3==280 && *k3>=350 && *k3<=370 ||
 *j3==315 && *k3>=360 && *k3<=370 ||
*j3==340 && *k3>=340 && *k3<=360 )
{*j3-=5;}
if(*k3==105 && *j3>=0 && *j3<=500 ||
 *k3==150 && *j3>=60 && *j3<=90 ||
 *k3==150 && *j3>=100 && *j3<=130 ||
  *k3==200 && *j3>=50 && *j3<=60 ||
*k3==200 && *j3>=90 && *j3<=100 ||
 *k3==200 && *j3>=130 && *j3<=140 ||
 *k3==160 && *j3>=170 && *j3<=270 ||
  *k3==170 && *j3>=300 && *j3<=340 ||
 *k3==190 && *j3>=350 && *j3<=380 ||
  *k3==190 && *j3>=340 && *j3<=350 ||
 *k3==210 && *j3>=370 && *j3<=380 ||
  *k3==160 && *j3>=390 && *j3<=420 ||
  *k3==155 && *j3>=380 && *j3<=390 ||
*k3==140 && *j3>=460 && *j3<=470 ||
 *k3==230 && *j3>=410 && *j3<=480 ||
 *k3==280 && *j3>=30 && *j3<=70 ||
*k3==260 && *j3>=110 && *j3<=160 ||
 *k3==300 && *j3>=160 && *j3<=170 ||
 *k3==210 && *j3>=200 && *j3<=230 ||
  *k3==210 && *j3>=250 && *j3<=300 ||
*k3==240 && *j3>=190 && *j3<=200 ||
 *k3==260 && *j3>=300 && *j3<=310 ||
 *k3==270 && *j3>=230 && *j3<=270 ||
*k3==310 && *j3>=190 && *j3<=230 ||
 *k3==310 && *j3>=250 && *j3<=310 ||
 *k3==260 && *j3>=340 && *j3<=370 ||
  *k3==310 && *j3>=360 && *j3<=370 ||
*k3==340 && *j3>=60 && *j3<=100 ||
 *k3==340 && *j3>=110 && *j3<=150 ||
 *k3==380 && *j3>=100 && *j3<=110 ||
*k3==360 && *j3>=200 && *j3<=290 ||
 *k3==370 && *j3>=290 && *j3<=300 ||
 *k3==290 && *j3>=5 && *j3<=160 ||
 *k3==380 && *j3>=320 && *j3<=400 )
{*k3+=5;}
if(*k3==495 && *j3>=0 && *j3<=500 ||
*k3==385 && *j3>=5 && *j3<=495 ||
 *k3==120 && *j3>=50 && *j3<=140 ||
 *k3==270 && *j3>=5 && *j3<=160 ||
 *k3==120 && *j3>=170 && *j3<=260 ||
*k3==140 && *j3>=300 && *j3<=350 ||
 *k3==160 && *j3>=350 && *j3<=380 ||
 *k3==110 && *j3>=380 && *j3<=390 ||
*k3==110 && *j3>=410 && *j3<=420 ||
 *k3==130 && *j3>=390 && *j3<=410 ||
 *k3==170 && *j3>=410 && *j3<=420 ||
*k3==160 && *j3>=470 && *j3<=480 ||
 *k3==200 && *j3>=420 && *j3<=470 ||
 *k3==220 && *j3>=30 && *j3<=70 ||
*k3==180 && *j3>=160 && *j3<=170 ||
 *k3==230 && *j3>=110 && *j3<=160 ||
 *k3==180 && *j3>=190 && *j3<=230 ||
*k3==180 && *j3>=250 && *j3<=310 ||
 *k3==220 && *j3>=230 && *j3<=240 ||
 *k3==220 && *j3>=260 && *j3<=270 ||
*k3==240 && *j3>=240 && *j3<=260 ||
 *k3==250 && *j3>=190 && *j3<=200 ||
*k3==270 && *j3>=300 && *j3<=310 ||
*k3==280 && *j3>=200 && *j3<=230 ||
 *k3==280 && *j3>=250 && *j3<=300 ||
 *k3==195 && *j3>=340 && *j3<=350 ||
*k3==230 && *j3>=350 && *j3<=370 ||
 *k3==270 && *j3>=100 && *j3<=110 ||
 *k3==310 && *j3>=60 && *j3<=100 ||
*k3==310 && *j3>=110 && *j3<=150 ||
 *k3==330 && *j3>=200 && *j3<=300 ||
 *k3==330 && *j3>=350 && *j3<=360 ||
*k3==350 && *j3>=320 && *j3<=350 ||
 *k3==350 && *j3>=360 && *j3<=400  )
{*k3-=5;}
}

/////////////////
void level4()
{ cleardevice();

 cleardevice();
 body5();          //draw the figure
 ball5(j3,k3,l);     //draw the  ball
caption3();
// countm(&co_mo,&inc);
for(i=0;i<m++;i++){
condition6(&j3,&k3); //cheack3ing condition
 //stopcondition(&j3,&k3);
// countm(&co_mo,&inc);
 c=getch();

 cleardevice();
 if(c=='a') j3-=5;
 if(c=='s') k3+=5;
 if(c=='d') j3+=5;
 if(c=='w') k3-=5;
if(c==' ') display1();
  //*p=co_mo;
caption3();
 body5();        //draw the figure
 ball5(j3,k3,l);
 //k3eycondition(&j3,&k3);
 //ghostcondition(&j3,&k3);


 // ghost(speed,loop,m1,p2,loop1,p3,p4,loop2,p5,p6,loop3,p7,p8);
 /*if(k3ey==1)
 {
 setfillstyle(0,0);
 bar(440,360,480,361);
 }*/

    //draw the ball
    //stopcondition(&j3,&k3);
 k3ey12(&j3,&k3);
 k3ey13(&j3,&k3);
 k3ey14(&j3,&k3);
 k3ey15(&j3,&k3);
 k3ey16(&j3,&k3);
 k3ey17(&j3,&k3);
 k3ey18(&j3,&k3);
 k3ey19(&j3,&k3);
 k3ey20(&j3,&k3);
 k3ey21(&j3,&k3);
 //realk3ey12(&j3,&k3);

deathbb1(&j3,&k3);
deathbb2(&j3,&k3);
deathbb3(&j3,&k3);
deathbb4(&j3,&k3);
deathbb5(&j3,&k3);
deathbb6(&j3,&k3);
deathbb7(&j3,&k3);
deathbb8(&j3,&k3);
deathbb9(&j3,&k3);
deathbb10(&j3,&k3);
 if(realk3ey12==1)
{deathb1=0;
setfillstyle(0,0);
bar(260,260,263,290);}
if(realk3ey13==1)
{deathb2=0;
  setfillstyle(0,0);
bar(270,240,300,243);
bar(260,200,263,230);
}
if(realk3ey14==1)
{deathb3=0;
  setfillstyle(0,0);
bar(197,230,200,250);
bar(230,290,250,293);
bar(230,197,250,200);

}
if(realk3ey15==1)
{deathb4=0;
  setfillstyle(0,0);
bar(157,280,160,330);
bar(157,360,160,395);
bar(157,150,160,210);
}
if(realk3ey16==1)
{deathb5=0;
  setfillstyle(0,0);
bar(100,187,130,190);
}
if(realk3ey17==1)
{deathb6=0;
  setfillstyle(0,0);
bar(300,300,303,340);
bar(300,105,303,150);
}
if(realk3ey18==1)
{deathb7=0;
  setfillstyle(0,0);
bar(430,169,460,171);

}
if(realk3ey19==1)
{deathb8=0;
  setfillstyle(0,0);
bar(60,187,90,190);

}
if(realk3ey20==1)

{deathb9=0;
  setfillstyle(0,0);
bar(420,150,475,147);
bar(420,105,423,120);
}
if(realk3ey21==1)
{deathb10=0;
  setfillstyle(0,0);
bar(470,130,495,127);

}
fak3ek3eyb(&j3,&k3);
crystalgroup1(&j3,&k3);
if(drop1==1)
{
  setcolor(GREEN);
  circle(115,170,2);
arc(115,170,95,85,5);
line(114,165,114,155);
line(116,165,116,155);
line(114,155,116,155);
bar3d(117,158,118,162,0,0);
setfillstyle(2,8);
sector(530,170,45,135,9,14);

}
if(drop2==1)
{
  setcolor(GREEN);
  circle(440,200,2);
arc(440,200,95,85,5);
line(439,195,439,185);
line(441,195,441,185);
line(439,185,441,185);
bar3d(442,188,443,192,0,0);

setfillstyle(2,8);
sector(560,170,45,135,9,14);

}
if(drop3==1)
{
 setcolor(GREEN);
 circle(440,130,2);
arc(440,130,95,85,5);
line(439,125,439,115);
line(441,125,441,115);
line(439,115,441,115);
bar3d(442,118,443,122,0,0);
setfillstyle(2,8);
sector(590,170,45,135,9,14);

}
if(crystal1==1)
{
  setcolor(5);
  circle(120,360,2);
arc(120,360,95,85,5);
line(119,355,119,345);
line(121,355,121,345);
line(119,345,121,345);
bar3d(122,348,123,352,0,0);
setfillstyle(2,8);
bar3d(530,200,540,210,0,1);

/////
}
if(crystal2==1)
{
  setcolor(5);
  circle(360,230,2);
arc(360,230,95,85,5);
line(359,225,359,215);
line(361,225,361,215);
line(359,215,361,215);
bar3d(362,218,363,222,0,0);

setfillstyle(2,RED);
bar3d(560,200,570,210,0,1);

//////////
}
if(crystal3==1)
{
setcolor(5);
  circle(360,385,2);
arc(360,385,95,85,5);
line(359,380,359,370);
line(361,380,361,370);
line(359,370,361,370);
bar3d(362,372,363,376,0,0);

setfillstyle(2,RED);
bar3d(590,200,600,210,0,1);

//////////
}
if(drop1==1&& drop2==1 &&drop3==1&& crystal1==1&& crystal3==1||
drop1==1&& drop2==1 &&drop3==1&& crystal2==1&& crystal3==1||
drop1==1&& drop3==1&& crystal1==1&& crystal2==1&&crystal3==1||
drop1==1&& drop2==1&& crystal1==1&& crystal2==1&&crystal3==1||
drop2==1&& drop3==1&& crystal1==11&& crystal2==1&& crystal3==1
)


{
  cleardevice();
 for(int j3=0; j3<=30000; j3++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound4();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You have used your all items!!!");
settextstyle(6,0,3);
outtextxy(100,290,"Press any k3ey to continue");
sleep(2);
getch();
   display1();
}
if(deathb1==1 || deathb2==1 || deathb3==1 || deathb4==1 || deathb5==1 || deathb6==1 || deathb7==1 || deathb8==1 || deathb9==1 || deathb10==1 )
{
  cleardevice();
 for(int j3=0; j3<=30000; j3++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound4();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"You went through the laser door");
settextstyle(6,0,3);
outtextxy(100,290,"Press any k3ey to continue");
sleep(2);
getch();
   display1();
}

 if(((clock()-t1)/CLOCKS_PER_SEC) >10)
    {
  cleardevice();
 for(int j=0; j<=30000; j++)
 {
 putpixel(random(640),random(480),4);
 delay(0);
 }
 sound();
 settextstyle(7,0,14);
outtextxy(100,150,"GAME OVER");
settextstyle(7,0,2);
outtextxy(100,260,"Out of time");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
   }
   




 if(k3<=105|| k3>=395)
       {	   cleardevice();

 sound5();
 settextstyle(7,0,14);
outtextxy(100,150,"YOU WIN");
settextstyle(7,0,2);
outtextxy(100,260,"You escape sucessfully");
settextstyle(6,0,3);
outtextxy(100,290,"Press any key to continue");
sleep(2);
getch();
   display1();
   }

 /////////
   }

   }


////////////////////////////////////
int main()
{
int g=DETECT,d;
initgraph(&g,&d," ");
display1();
return 1;
  }
int menu()
{
int ch;
int selected=1;
int TotalOptions=5;
cleardevice();
setbkcolor(BLACK);
setfillstyle(1,YELLOW);

circle(100,150,50);
floodfill(100,150,WHITE);
//setfillstyle(1,BLACK);
line(80,150,90,140);
line(75,150,85,140) ;
line(80,130,90,140);
line(75,130,85,140);
line(75,150,80,150);
line(75,130,80,130);
line(120,150,110,140);
line(125,150,115,140);
line(120,130,110,140);
line(125,130,115,140);
line(120,130,125,130);
line(120,150,125,150);
line(70,160,130,160);
arc(100,160,180,360,30);
arc(100,195,30,150,20);
setfillstyle(1,BLACK);
floodfill(100,165,WHITE);
floodfill(78,148,WHITE);
floodfill(121,148,WHITE);
setfillstyle(1,RED);
floodfill(100,180,WHITE);
//////////
circle(530,200,50);
line(520,190,504,190);
arc(512,190,0,180,8);
line(540,190,556,190);
arc(548,190,0,180,8);
line(505,190,505 ,246);
line(514,190,514,249);
line(556,190,556,245);
line(546,190,546,249);
ellipse(530,230,0,360,5,10);
line(525,230,535,230);

setfillstyle(1,YELLOW);
floodfill(530,200,WHITE);
setfillstyle(1,BLUE);
floodfill(512,240,WHITE);
floodfill(550,240,WHITE);
setfillstyle(1,RED);
floodfill(530,235,WHITE);
///////////////
circle(150,350,50);
setfillstyle(1,BLACK);
fillellipse(130,340,5,7);
fillellipse(170,340,5,7);
arc(150,360,210,330,20);
arc(150,358,210,330,20);
setfillstyle(1,YELLOW);
floodfill(150,350,WHITE);

show_Header();
signature();
sound(400);
delay(50);
nosound();
drawmenu(selected,RED,GREEN   );
do
{
ch=getch();
if(ch==DOWN_ARROW)
{
selected = selected >= TotalOptions ? 1: selected+1;
drawmenu(selected,RED,GREEN);
}
else if(ch==UP_ARROW)
{
selected = selected < 2 ? TotalOptions : selected-1;
drawmenu(selected,RED,GREEN);
}

sound(400);
delay(50);
nosound();}
while(ch!=' ');
return selected;
}
void drawmenu(int selected, int defCol, int selCol)
{
int x=250;
int y=120;
int width=150;
int height=30;
int i;
int TotalOptions=5;
char menu_option[5][14]={"LEVEL-1", "LEVEL-2","LEVEL-3","HOW TO PLAY","EXIT"};
setcolor(WHITE);
for(i=1;i<=TotalOptions;i++)
{
if(i==selected)
setfillstyle(1,selCol);
else
setfillstyle(1,defCol);
bar(x,y,x+width,y+height);
rectangle(x,y,x+width,y+height);
outtextxy(x+20,y+10,menu_option[i-1]);
y=y+height+30;
}
}



void signature()
{
setcolor(RED);
outtextxy(350,400,"Group-2");
setcolor(YELLOW);
outtextxy(352,398,"Group-2");
}
void show_Header()
{
setcolor(RED);
settextstyle(1,0,10);
outtextxy(193,27,"Emoji Escape") ;
setcolor(YELLOW);
outtextxy(195,25,"Emoji Escape") ;
}

void show_HowTOPlay()
{
	cleardevice();
	setbkcolor ( BLACK );
	show_Header();
	settextstyle ( 0 , 0 , 0 );
	setcolor ( WHITE );
	outtextxy ( 20 , 100 , "Objective:" );
	outtextxy ( 20 , 150 , "Playing:" );
	outtextxy ( 20 , 220 , "Tip:" );
	setcolor ( LIGHTGREEN );
	outtextxy ( 120 , 120 , "To Touch Real Key In order To Open The Door and Escape Emoji." );
	outtextxy ( 120 , 170 , "1. Use 'W','S','A','D' keys to control your Emoji." );
	outtextxy ( 120 , 180 , "2. To collect some shortcuts to get real keys."  );
	outtextxy ( 120 , 190 , "3. Press <Space Bar> to QUIT any time." );
	outtextxy ( 120 , 240 , "1. Touch shortcuts to collect the real keys." );
	outtextxy ( 120 , 260 , "2. There are so many fake keys,be aware and so enjoy this game." );
	signature();
	getch();
}

 void display1()
{
int selected_option;

Start:
selected_option=menu();
switch(selected_option)
{
case 1:
level_1();
goto Start;
case 2:
level4();
goto Start;
case 3:
level2();
goto Start;
case 4:
show_HowTOPlay();
goto Start;
case 5:
exit(0);
}
}




