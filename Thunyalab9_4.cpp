#include<iostream>
#include<iomanip>
using namespace std;


int main(){
  int x ;
  int y ;
  int z ;
  cout<<"Enter your age: ";
  cin >> x ;
  if(x<=20){
      cout << "Enter your height: " ;
      cin >> y ;
      if(y<160){cout << "Your status = UNFRIEND";}
      else if(y<175){cout << "Your status = FRIEND";}
      else{
          cout <<"Enter your property: ";
          cin >> z ;
          if(z>69000000){cout << "Your status = MARRIED";}
          else{cout << "Your status = ONE-NIGHT-STAND";}
      }
    }
  else if(x<30){
      cout <<"Enter your property: ";
      cin >> z ;
      if(z>10000000){cout << "Your status = BEST FRIEND";}
      else{cout << "Your status = UNFRIEND";}
    }
  else{cout << "Your status = UNFRIEND";}
 return 0;
}