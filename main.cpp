// This code is for solving two simultneous equations
//with two variable.
// The method of formula
# include <iostream>
# include <cmath>
# include <ctype.h>
using namespace std;

int main(){
    int choice = 1 ;
    //do {
    cout<<"  ********* This program solves two simulataneous equations ****************"<<endl;
    cout<<"\n\tThe method of  elimination is used "<<endl;
    signed int x1,y1,z1,x2,y2,z2=0; // initial values of variables
    signed int x4,y4,z4,x3,y3,z3=0; // initial values of variables
    signed int ans1, ans2=0; double varY, varX, sub_varX = 0 ;
    cout<<"\n\t Enter value of first coefficeint in equation 1: ";
    cin>>x1;
    cout<<"\n\t Enter value of second coefficeint in equation 1: ";
    cin>>y1;
    cout<<"\n\t Enter value of third coefficeint in equation 1: ";
    cin>>z1;
    cout<<"\n\t Enter value of first coefficeint in equation 2: ";
    cin>>x2;
    cout<<"\n\t Enter value of second coefficeint in equation 2: ";
    cin>>y2;
    cout<<"\n\t Enter value of third coefficeint in equation 2: ";
    cin>>z2;
    x3=x2*x1; y3=x2*y1; z3=x2*z1; x4=x2*x1; y4=y2*x1; z4=x1*z2;
    if((x3<0&&x4<0)||(x3>0&&x4>0)){
        ans1 = y3 - y4 ;
        ans2 = z3 - z4 ;
        }// end of if statement
    if((x3<0&&x4>0)||(x3>0&&x4<0)){
        ans1 = y3 + y4 ;
        ans2 = z3 + z4 ;
        }// end of if statement
    varY = static_cast<double>(ans2)/ans1 ;
    sub_varX = varY*static_cast<double>(y1);
    if (sub_varX>0){
        varX = (static_cast<double>(z1)-sub_varX) / x1;
        }// end of if statement
    else
         varX = (static_cast<double>(z1)+(sub_varX*(-1))) / x1 ;
    cout<<"\n\t After solving, X = "<<varX<<" and Y = "<<varY<<"\n\t\t\t THANK YOU "<<endl;
    }// end of fnction main
