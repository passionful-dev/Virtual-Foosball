void CalcForceMaxAng()
{
if (MouseRotate > 0 && MouseRotate < 10)
{
	Force=0.5;
	MaxAng=55;
}

if (MouseRotate >= 10 && MouseRotate < 20)
{
	Force=1.0;
	MaxAng=100;
}

if (MouseRotate >= 20 && MouseRotate < 30)
{
	Force=2.5;
	MaxAng=105;
}

if (MouseRotate >= 30 && MouseRotate < 40)
{
	Force=4.0;
	MaxAng=110;
}

if (MouseRotate >= 40 && MouseRotate < 50)
{
	Force=5.5;
	MaxAng=115;
}

if (MouseRotate >= 50 && MouseRotate < 60)
{
	Force=7.0;
	MaxAng=120;
}

if (MouseRotate >= 60 && MouseRotate < 70)
{
	Force=8.5;
	MaxAng=125;
}

if (MouseRotate >= 70 && MouseRotate < 80)
{
	Force=10.0;
	MaxAng=130;
}

if (MouseRotate >= 80 && MouseRotate < 90)
{
	Force=11.5;
	MaxAng=135;
}

if (MouseRotate >= 90 && MouseRotate < 100)
{
	Force=13.0;
	MaxAng=140;
}

if (MouseRotate >= 100 && MouseRotate < 110)
{
	Force=14.5;
	MaxAng=145;
}

if (MouseRotate >= 110 && MouseRotate < 120)
{
	Force=16.0;
	MaxAng=150;
}

if (MouseRotate >= 120 && MouseRotate < 130)
{
	Force=17.5;
	MaxAng=155;
}

if (MouseRotate >= 130 && MouseRotate < 140)
{
	Force=19.0;
	MaxAng=160;
}

if (MouseRotate >= 140 && MouseRotate < 150)
{
	Force=20.5;
	MaxAng=165;
}

if (MouseRotate >= 150 && MouseRotate < 160)
{
	Force=22.0;
	MaxAng=170;
}

if (MouseRotate >= 160 && MouseRotate < 170)
{
	Force=23.5;
	MaxAng=175;
}

if (MouseRotate >= 170 && MouseRotate < 180)
{
	Force=25.0;
	MaxAng=180;
}

if (MouseRotate >= 180 && MouseRotate < 190)
{
	Force=26.5;
	MaxAng=185;
}

if (MouseRotate >= 190 && MouseRotate < 200)
{
	Force=28.0;
	MaxAng=190;
}

if (MouseRotate >= 200 && MouseRotate < 210)
{
	Force=29.5;
	MaxAng=195;
}

if (MouseRotate >= 210 && MouseRotate < 220)
{
	Force=31.0;
	MaxAng=200;
}

if (MouseRotate >= 220 && MouseRotate < 230)
{
	Force=32.5;
	MaxAng=205;
}

if (MouseRotate >= 230 && MouseRotate < 240)
{
	Force=34.0;
	MaxAng=210;
}

if (MouseRotate >= 240 && MouseRotate < 250)
{
	Force=35.5;
	MaxAng=215;
}

if (MouseRotate >= 250 && MouseRotate < 260)
{
	Force=37.0;
	MaxAng=220;
}

if (MouseRotate >= 260 && MouseRotate < 270)
{
	Force=38.5;
	MaxAng=225;
}

if (MouseRotate >= 270 && MouseRotate < 280)
{
	Force=40.0;
	MaxAng=230;
}

if (MouseRotate >= 280 && MouseRotate < 290)
{
	Force=41.5;
	MaxAng=235;
}

if (MouseRotate >= 290 && MouseRotate < 300)
{
	Force=43.0;
	MaxAng=240;
}

if (MouseRotate >= 300 && MouseRotate < 310)
{
	Force=44.5;
	MaxAng=245;
}

if (MouseRotate >= 310 && MouseRotate < 320)
{
	Force=46.0;
	MaxAng=250;
}

if (MouseRotate >= 320 && MouseRotate < 330)
{
	Force=47.5;
	MaxAng=255;
}

if (MouseRotate >= 330 && MouseRotate < 340)
{
	Force=49.0;
	MaxAng=260;
}

if (MouseRotate >= 340 && MouseRotate < 350)
{
	Force=50.5;
	MaxAng=265;
}

if (MouseRotate >= 350 && MouseRotate < 360)
{
	Force=52.0;
	MaxAng=270;
}

if (MouseRotate >= 360 && MouseRotate < 370)
{
	Force=53.5;
	MaxAng=275;
}

if (MouseRotate >= 370 && MouseRotate < 380)
{
	Force=55.0;
	MaxAng=280;
}

if (MouseRotate >= 380 && MouseRotate < 390)
{
	Force=56.5;
	MaxAng=285;
}

if (MouseRotate >= 390 && MouseRotate < 400)
{
	Force=58.0;
	MaxAng=290;
}

if (MouseRotate >= 400)
{
	Force=59.5;
	MaxAng=295;
}


//////Forward Direction
if (MouseRotate <= 0 && MouseRotate > -10)
{
	Force=0.5;
	MaxAng=-55;
}

if (MouseRotate <= -10 && MouseRotate > -20)
{
	Force=1.0;
	MaxAng=-100;
}

if (MouseRotate <= -20 && MouseRotate > -30)
{
	Force=2.5;
	MaxAng=-105;
}

if (MouseRotate <= -30 && MouseRotate > -40)
{
	Force=4.0;
	MaxAng=-110;
}

if (MouseRotate <= -40 && MouseRotate > -50)
{
	Force=5.5;
	MaxAng=-115;
}

if (MouseRotate <= -50 && MouseRotate > -60)
{
	Force=7.0;
	MaxAng=-120;
}

if (MouseRotate <= -60 && MouseRotate > -70)
{
	Force=8.5;
	MaxAng=-125;
}

if (MouseRotate <= -70 && MouseRotate > -80)
{
	Force=10.0;
	MaxAng=-130;
}

if (MouseRotate <= -80 && MouseRotate > -90)
{
	Force=11.5;
	MaxAng=-135;
}

if (MouseRotate <= -90 && MouseRotate > -100)
{
	Force=13.0;
	MaxAng=-140;
}

if (MouseRotate <= -100 && MouseRotate > -110)
{
	Force=14.5;
	MaxAng=-145;
}

if (MouseRotate <= -110 && MouseRotate > -120)
{
	Force=16.0;
	MaxAng=-150;
}

if (MouseRotate <= -120 && MouseRotate > -130)
{
	Force=17.5;
	MaxAng=-155;
}

if (MouseRotate <= -130 && MouseRotate > -140)
{
	Force=19.0;
	MaxAng=-160;
}

if (MouseRotate <= -140 && MouseRotate > -150)
{
	Force=20.5;
	MaxAng=-165;
}

if (MouseRotate <= -150 && MouseRotate > -160)
{
	Force=22.0;
	MaxAng=-170;
}

if (MouseRotate <= -160 && MouseRotate > -170)
{
	Force=23.5;
	MaxAng=-175;
}

if (MouseRotate <= -170 && MouseRotate > -180)
{
	Force=25.0;
	MaxAng=-180;
}

if (MouseRotate <= -180 && MouseRotate > -190)
{
	Force=26.5;
	MaxAng=-185;
}

if (MouseRotate <= -190 && MouseRotate > -200)
{
	Force=28.0;
	MaxAng=-190;
}

if (MouseRotate <= -200 && MouseRotate > -210)
{
	Force=29.5;
	MaxAng=-195;
}

if (MouseRotate <= -210 && MouseRotate > -220)
{
	Force=31.0;
	MaxAng=-200;
}

if (MouseRotate <= -220 && MouseRotate > -230)
{
	Force=32.5;
	MaxAng=-205;
}

if (MouseRotate <= -230 && MouseRotate > -240)
{
	Force=34.0;
	MaxAng=-210;
}

if (MouseRotate <= -240 && MouseRotate > -250)
{
	Force=35.5;
	MaxAng=-215;
}

if (MouseRotate <= -250 && MouseRotate > -260)
{
	Force=37.0;
	MaxAng=-220;
}

if (MouseRotate <= -260 && MouseRotate > -270)
{
	Force=38.5;
	MaxAng=-225;
}

if (MouseRotate <= -270 && MouseRotate > -280)
{
	Force=40.0;
	MaxAng=-230;
}

if (MouseRotate <= -280 && MouseRotate > -290)
{
	Force=41.5;
	MaxAng=-235;
}

if (MouseRotate <= -290 && MouseRotate > -300)
{
	Force=43.0;
	MaxAng=-240;
}

if (MouseRotate <= -300 && MouseRotate > -310)
{
	Force=44.5;
	MaxAng=-245;
}

if (MouseRotate <= -310 && MouseRotate > -320)
{
	Force=46.0;
	MaxAng=-250;
}

if (MouseRotate <= -320 && MouseRotate > -330)
{
	Force=47.5;
	MaxAng=-255;
}

if (MouseRotate <= -330 && MouseRotate > -340)
{
	Force=49.0;
	MaxAng=-260;
}

if (MouseRotate <= -340 && MouseRotate > -350)
{
	Force=50.5;
	MaxAng=-265;
}

if (MouseRotate <= -350 && MouseRotate > -360)
{
	Force=52.0;
	MaxAng=-270;
}

if (MouseRotate <= -360 && MouseRotate > -370)
{
	Force=53.5;
	MaxAng=-275;
}

if (MouseRotate <= -370 && MouseRotate > -380)
{
	Force=55.0;
	MaxAng=-280;
}

if (MouseRotate <= -380 && MouseRotate > -390)
{
	Force=56.5;
	MaxAng=-285;
}

if (MouseRotate <= -390 && MouseRotate > -400)
{
	Force=58.0;
	MaxAng=-290;
}

if (MouseRotate <= -400)
{
	Force=59.5;
	MaxAng=-295;
}

//printf("Force= %f, MaxAng= %f\n\n", Force,MaxAng);
}
