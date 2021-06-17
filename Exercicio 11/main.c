#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long int C, O, L, X, PC, PO, PL, PX, H, M, S;

  cin >> C >> O >> L >> X;

PC= C/4;
PO= O/8;
PL= L/2;
PX= X/1;

if ((PC==PO)&&(PL==PX)){
  H= (PC*1259)/3600;
  M= ((PC*1259)%3600)/60;
  S= ((PC*1259)%3600)%60 ;

  cout << H << " h " << M << " m " << S << " s ";
}
else if (PC<=PO && PC<=PL && PC<=PX ) {
  H= (PC*1259)/3600;
  M= ((PC*1259)%3600)/60;
  S= ((PC*1259)%3600)%60;

  cout << H << " h " << M << " m " << S << " s ";

}
else if (PO<=PC && PO<=PL && PO<=PX ) {
 H= (PO*1259)/3600;
 M= ((PO*1259)%3600)/60;
 S= ((PO*1259)%3600)%60;

  cout << H << " h " << M << " m " << S << " s ";

}
else if (PL<PC && PL<PO && PL<PX ) {
 H= (PL*1259)/3600;
 M= ((PL*1259)%3600)/60;
 S= ((PL*1259)%3600)%60;

  cout << H << " h " << M << " m " << S << " s ";

}
else if (PX<PC && PX<PO && PX<PL) {
 H= (PX*1259)/3600;
 M= ((PX*1259)%3600)/60;
 S= ((PX*1259)%3600)%60;

  cout << H << " h " << M << " m " << S << " s ";

}

}
