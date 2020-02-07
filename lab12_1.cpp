#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
   double max= A[0] ,min=A[0],avr,xx,sd;
  for(int i = 0;i<=N;i++){
       avr += A[i];
      
       if(max<=A[i]){max = A[i];}
       if(min>=A[i]){min = A[i];}
      
      
       xx += (A[i]*A[i]);
   }
  
   double mean = avr / N;
   sd = (xx/N)-(mean*mean);
   sd = sqrt(sd);

   B[0] = mean;
   B[1] = sd;
   B[2] = max;
   B[3] = min;
}
