#include <iostream>
using namespace std;
int main(){ 
  int a=5 , b=10;
//Arithmatic operators
  cout<<"sum = " << (a+b) <<endl;
  cout<<"difference = " << (a-b) <<endl;
  cout<<"product = " << (a*b) <<endl;
  cout<<"divide = " << (a/b) <<endl;
    cout<<"modulo = " << (a%b) <<endl;

        cout<<(5/(double)2) <<endl;  //Type casting 
  
//Relational operators 

  cout<<(3<5) << endl; // True:1
  cout<<(3>5) << endl; //False:0
  cout<<(3<=5)<< endl; //True:1
  cout<<(3>=5)<< endl; //False:1

  cout<<(3==3) << endl; //True:1
  cout<<(3==5) << endl; //False:0
   cout<<(3!=3) << endl; //False :1

//Logical operator 
   
    //NOT (!) T->F F->T
   cout<< !(3<5) << endl;

    //OR ek bhi T ans = T
  cout<<((3>1)|| (3>10)) << endl; //tru

   //AND ek bhi f ans = F
  cout<<((3>1) && (3>10)) << endl;//fal



//UNARY operators

//increment++ 
{
  //a++ (post increment)
  int a=10;
  int b = a++;//Kaam;Update
  cout<<"b=" << b << endl;
  cout<<"a=" << a << endl;
}

{  //++a  (pre increment)
  int a = 10;
  int b = ++a;//Update;Kaam
  cout<<"b=" << b << endl;//11
  cout<<"a=" << a << endl;//11
    }

//decrement--
{
  //a-- (post decrement)
  int a = 10;
  int b = --a;//Update;Kaam
  cout<<"b=" << b << endl;//9
  cout<<"a=" << a << endl;//9
}

{ //a-- (post decrement)
  int a=10;
  int b = a--;//Kaam;Update
  cout<<"b=" << b << endl;//10
  cout<<"a=" << a << endl;//9

}





//sum of 2 nos.
{
  int a,b;
  cout<<"enter 2 numbers:"<< endl;
  cin >> a >> b;
  cout<<"sum of 2 nos = "<<(a + b )<< endl;
}



  return 0; 
}







