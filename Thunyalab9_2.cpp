#include <iostream>
#include <string>
using namespace std;


char findGrade(double x){
    
    if( x >90.0){
       return 'A' ;
    }
    else if(x>75.0){
        return 'B' ;
    }   
    else if(x>60.0){
        return 'C' ;
    }
    else if(x>45.0){
        return 'D' ;
    }
    else{
        return 'F' ;
    }
    
}

int main(){
 double y ;
 cout << "grade : ";
 cin >> y ;
 cout << findGrade( y ) ;

 return 0 ;
}