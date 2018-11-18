//program to compare the area and perimeter of two rectangle objects of a class using values input by the user
#include <iostream>
using namespace std;
//initialising class rectangle
class rectangle
{
  public:
  int area(int l, int b)            //function to calculate area
  {
    int a=l*b;
    return a;
  }
  int perimeter(int l, int b)       //function to calculate perimeter
  {
    int p=2*(l+b);
    return p;
  }
};
int main()
{
  rectangle ob1,ob2;                      //object creation
  int l1,b1,l2,b2;                        //declaring necessary variables
  //input
  cout<<"Please enter the length and breadth of 1st rectangle in order:"<<endl;
  cin>>l1;
  cin>>b1;
  cout<<"Please enter the length and breadth of 2nd rectangle in order:"<<endl;
  cin>>l2;
  cin>>b2;
  //calling necessary class functions and assigning values
  int a1=ob1.area(l1,b1);
  int p1=ob1.perimeter(l1,b1);
  int a2=ob2.area(l2,b2);
  int p2=ob2.perimeter(l2,b2);
  //output
  cout<<"The area and perimeter of 1st rectangle are "<<a1<<" and "<<p1<<" respectively."<<endl;
  cout<<"The area and perimeter of 2nd rectangle are "<<a2<<" and "<<p2<<" respectively."<<endl;
  if(a1>a2)
    cout<<"Area of 1st rectangle is higher."<<endl;
  else if(a1==a2)
    cout<<"Area of both rectangles are the same."<<endl;
  else
    cout<<"Area of 2nd rectangle is higher."<<endl;
  if(p1>p2)
    cout<<"Perimeter of 1st rectangle is higher."<<endl;
  else if(p1==p2)
    cout<<"Perimeter of both rectangles are the same."<<endl;
  else
    cout<<"Perimeter of 2nd rectangle is higher."<<endl;
  return 0;
}
