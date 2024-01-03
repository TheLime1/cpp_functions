#include "header.h"

Notes::Notes()
{
    test1=0;
    test2=0;
    DS=0;
    Examen=0;
    orale=0;
    TP=0;
    avecTP=true;
}
Notes::Notes(float a,float b,float c,float d,float e,float f)
{
    test1=a;
    test2=b;
    DS=c;
    Examen=d;
    orale=e;
    TP=f;
}
Notes::Notes(float a1,float b1,float c1,float d1,float e1)
 {
      test1=a1;
    test2=b1;
    DS=c1;
    Examen=d1;
    orale=e1;
    avecTP=false;
 }
 float Notes::calculNCC()
 {
     return (test1+test2+orale+(2*DS))/5;
 }
float Notes::calculeMoyenne()
{
    float moy1,moy2;
    if(avecTP)
    {
        moy1=(calculNCC()*0.3)+(0.2*TP)+(0.5+Examen);
        return moy1;
    }
    else
    {
            moy2=(0.4*calculNCC())+(0.6*Examen);
        return moy2;
    }

}
