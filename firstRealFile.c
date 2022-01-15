//ok here she is
#include <stdio.h>

int main(void) {

    int nRobots;
    int nClean;
    int nObs;
    
    char name[nRobots][10];
    int mEf[nRobots];
    int cEf[nRobots];
    int xPos[nClean];
    int yPos[nClean];
    int t[nClean];

    int lx[nObs];
    int ly[nObs];
    int rx[nObs];
    int ry[nObs];


scanf("%d %d %d",&nRobots,&nClean,&nObs);

//sorting robot info
for(int i=0; i<nRobots; i++)
{
scanf("%s %d %d",name[i][],&mEf[i],&cEf[i]);
//each index of an array is associated with that robot
}

//sorting location info
for(int i=0; i<nClean; i++)
{
scanf("%d %d %d",&xPos[i],&yPos[i],&t[i]);
//each index across all arrays associated with a single location
}

//sorting location info
for(int i=0; i<nObs; i++)
{
scanf("%d %d %d %d",&lx,&ly,&rx,&ry);
//each index across all arrays associated with a single location
}

    int tv[nClean];
    //making the array which stores time values associated with each task
    for(int i=0;i<nClean;i++)
      {
        tv[i]=2*xPos[i]+2*yPos[i]+t[i];
      }

  int re[nRobots];
  //evaluating which robot is most efficent 
  for(int i=0;i<nRobots;i++)
    {
        re[i]=mEf[i]+cEf[i];
    }

//assign cleaning task to robot
for(int i=0;i<nRobots;i++)
{
    
    


}









  return 0;
}
