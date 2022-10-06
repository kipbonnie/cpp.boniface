 // program to find the area of a circle
 #include <iostream>
 using namespace std;
 float circle(int r);      //function prototype
  int main()
  {
  int radius;
  float area;
  cout<<"Enter radius"<<endl;
  cin>>radius;
   area=circle(radius);      //function calling
  cout<<"The area is"<<area<<endl;
  return 0;
  }
	  float circle(int r)  //fuction definition
	  {
	  	float area;
	  	area= 3.142*r*r;
	  return area;
  }