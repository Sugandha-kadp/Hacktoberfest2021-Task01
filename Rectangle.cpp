#include <iostream>
using namespace std;

class Rectangle
{
  private :
    int length;
    int width;
  
  public : 
    void setLength(int no1);
    void setWidth(int no2);
    int calcArea();
};

  void Rectangle::setLength(int no1)
  {
    length = no1;
  }

  void Rectangle::setWidth(int no2)
  {
    width = no2;
  }

  int Rectangle::calcArea()
  {
    int area = length*width;
    
    return area;
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
