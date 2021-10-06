#include <iostream>
using name space std;

class Rectangle
{
  private :
    int length;
    int width;
  
  public : 
    void setLength(int no);
    void setWidth(int no);
    int calcArea();
};

  void Rectangle::setLength(int no)
  {
    length = no;
  }

  void Rectangle::setWidth(int no)
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
  cout << r1.calcArea() <<endl;
  return 0;
}
