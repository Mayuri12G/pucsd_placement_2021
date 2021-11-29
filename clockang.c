#include<stdio.h>
#include<math.h>
float Ang_min_hr(float h,float m)
{ 
  if(h==12) h=0;
  if(m==60) m=0;
  int h_ang=(int)(0.5*(h*60+m));
  int m_ang=(int)(6*m);
  int angle=abs(h_ang-m_ang);
  int ang=360-angle;
  return (ang>angle)?angle:ang;
}
float Ang_min_sec(float ha, float ma, float sa)
{
  if(ma==60) ma=0;
  if(sa==60) sa=0;
    int ha_ang=(int)(0.5*(ha*60+ma));
  int ma_ang=(int)(6*ma);
  int sa_ang=(int)((1/60)*6*sa);
  int angle=abs(ha_ang-sa_ang);
  int ang=270-angle;
    printf("%0.2f\t%0.2f \t %d\t %d", ma_ang,sa_ang,angle,ang);
  return (ang>angle)?angle:ang;
}
int main(void)
{
  float h,m;
  printf("Enter hour hand and min hand pos : ");
  scanf("%f%f",&h,&m);
  if(h<0 || m<0 || h>12 || m>60)
  {
    printf("\n Wrong input...");
  }
  else
  {
    printf("\n Angle between hour and min hand is %0.2f ",Ang_min_hr(h,m));
  }
  float ha,ma,sa;
  printf("\nEnter hour hand, min hand and sec hand pos : ");
  scanf("%f%f%f",&ha,&ma,&sa);
  if(ha<0 || ma<0 || sa<0 || ha>12 || ma>60 || sa>60)
  {
    printf("\n Wrong input...");
  }
  {

    printf("\n Angle between Min and Sec hand is %0.2f ",Ang_min_sec(ha,ma,sa));
  }
}

