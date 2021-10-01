#include <iostream>
using namespace std:
class Rectangle
{
  private :
    int length;
    int width;
  
  public : 
    int setLength(int no);
    void setWidth(int no);
    int calcArea();
};

  void Rectangle::setLength(no)
  {
    length = no;
  }

  void Rectangle::setWidth(no)
  {
    width = no
  }

  int Rectangle::calcArea()
  {
    int area = length*width;
    
  }

int main()
{
  Rectangle r1;

  r1.setLength(10);
  r1.setWidth(20);
  

  //print rectangel area
  cout << r2.calcArea() <<endl;
  return 0;
}
