#include <iostream>
using namespace std;
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
    width = no;
  }

  int Rectangle::calcArea()
  {
    int area = length*width;
    return area;
  }

int main()
{
  Rectangle r2;

  r2.setLength(10);
  r2.setWidth(20);
  

  //print rectangel area
  cout << r2.calcArea() <<endl;
  return 0;
}
