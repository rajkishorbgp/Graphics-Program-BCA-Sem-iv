#include<graphics.h>

void stickman_open(int speed, int color)
{
   int i,s,y=245;
   s=speed;
   for(i=0; i<3; i++)
   {
      setcolor(color);
      circle(50+s,320+y,30+i);
      line(50+i+s,350+y,50+i+s,400+y);

      //legs
      line(50+i+s,400+y,30+i+s,450+y);
      line(50+i+s,400+y,70+i+s,450+y);

      //left hand
      line(50+s+i,360+y,35+s+i,400+y);
      //right hand
      line(50+s+i,360+y,65+s+i,400+y);
   }
     setcolor(WHITE);
}

void stickman_mid(int speed, int color){

    int s,i,y=245;
    s=speed;

    for( i=0; i<3; i++)
    {
       setcolor(color);
       circle(50+s,320+y,30+i);
       line(50+i+s,350+y,50+i+s,400+y);
       //legs
       line(52-i+s,400+y,40-i+s,450+y);
       line(50+i+s,400+y,60+i+s,450+y);
       //left hand
       line(50+s+i,360+y,20+s+i,400+y);
       // right hand
       line(50+s+i,360+y,80+s+i,400+y);
    }
    setcolor(WHITE);
}

// stickman close legs with rose
void stickman_close(int speed, int color)
{
    int s,i,y=245;
    s=speed;

    for( i=0; i<3; i++)
    {
       setcolor(color);
       circle(50+s,320+y,30+i);
       line(50+i+s,350+y,50+i+s,400+y);
       //legs
       line(52-i+s,400+y,50-i+s,450+y);
       line(50+i+s,400+y,52+i+s,450+y);
       //left hand
       line(50+s+i,360+y,40+s+i,400+y);
       // right hand
       line(50+s+i,360+y,60+s+i,400+y);
    }
    setcolor(WHITE);
}

// cloud
void cloud(int x,int y)
{
    setcolor(LIGHTGRAY);

    int i=2;
		//up
		arc(50+x,50+2+y,20,160,25+i);
		arc(100-2+x,50+2+y,20,160,25+i);
		//down
		arc(50+x,80-4+y,180+20,360-20,25+i);
		arc(100-2+x,80-4+y,180+20,360-20,25+i);
	    //left
		arc(25+5+x,65+y,90+10,270-10,20+i);
	    // right
		arc(125-5+x,65+y,270,90,20+i);


	setfillstyle(1,LIGHTGRAY);
	floodfill(25+x,75+y,LIGHTGRAY);
}

int main()
{
    initwindow(1200,750,"rajkishorbgp");

    int i=0,y=150,s=1,t=0,d=0;

    while(!kbhit()){
    //Sun
    setcolor(7);
      for(int k=0; k<40; k++){
      circle(800,80,40-k);
    }
    setcolor(WHITE);

    cloud(100,100+d);
    cloud(250,50+d);
    cloud(870,40+d);
    cloud(500,40+d);
    cloud(1000,100+d);

    //Road
    for(int i=0; i<5; i++)
    line(0,692+i,1200,692+i);

    //mountain
    // step1
    line(0+i,199+y,200+i,100+y);
    arc(220+i,157+y,49,118,60);

    line(259+i,112+y,460+i,300+y);
    line(353+i,200+y,600+i,60+y);
    arc(625+i,115+y,49,118,60);
    line(664+i,70+y,1100+i,360+y);

    line(1012+i,300+y,1280+i,115+y);
    arc(1320+i,160+y,49,135,60);
    line(1357+i,113+y,1600+i,300+y);


    //step 2
    int s2=1600;
    line(0+i+s2,300+y,200+i+s2,100+y);
    arc(220+i+s2,157+y,49,113,60);

    line(259+s2+i,112+y,460+i+s2,300+y);
    line(353+i+s2,200+y,600+i+s2,60+y);
    arc(625+i+s2,115+y,49,118,60);
    line(664+i+s2,70+y,1100+i+s2,360+y);

    line(1012+i+s2,300+y,1280+i+s2,115+y);
    arc(1320+i+s2,160+y,49,135,60);
    line(1357+i+s2,113+y,1600+i+s2,300+y);

    //step3
    int s3=1600+s2+s2;
    line(0+i+s3,300+y,200+i+s3,100+y);
    arc(220+i+s3,157+y,49,113,60);

    line(259+s3+i,112+y,460+i+s3,300+y);
    line(353+i+s3,200+y,600+i+s3,60+y);
    arc(625+i+s3,115+y,49,118,60);
    line(664+i+s3,70+y,1100+i+s3,360+y);

    line(1012+i+s3,300+y,1280+i+s3,115+y);
    arc(1320+i+s3,160+y,49,135,60);
    line(1357+i+s3,113+y,1600+i+s3,300+y);

    if(s%3==0){
        stickman_open(s+t,YELLOW);
    }else if(s%3==1){
        stickman_mid(s+t,YELLOW);
    }else{
        stickman_close(s+t,YELLOW);
    }

    cloud(100+s+t,450+d);
    if(d<50){
        d++;
    }

    i--;
    t+=2;
    s++;
    delay(200);
    cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
