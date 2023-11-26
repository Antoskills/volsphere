#include <iostream>
using namespace std;

class sphere
{
  public:
  double radius;
  void getdata()
  {
    cout<<"Enter the radius of the sphere: ";
    cin>>radius;
  }
  void putdata()
  {
    cout<<"The volume of the sphere is: "<<(4*3.14*radius*radius*radius)/3;
  }

};
int main() 
{
  sphere s;
  s.getdata();
  s.putdata();
  return 0;
}