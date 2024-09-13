//  Q.7 Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions 
// to calculate the circle's area and circumference. 
 
 
 #include<iostream>

 using namespace std;

 class circle
 {
     private:
          double radius;

     public:
      circle(double r) : radius(r) {}

     getArea()  
     {
         return 3.14 * radius * radius;
     }

     getCircumference()  
     {
         return 2 * 3.14 * radius;
     }

     setRadius(double r)
     {
         radius=r;
     }

     getRadius()
     {
         return radius;
     }
 };

 int main()
 {
     double r;

     cout <<"enter the radius of circle: ";
     cin >>r;

     circle myCircle(r);

     cout <<"Radius: "<<myCircle.getRadius()<<endl;
     cout <<"Area: "<<myCircle.getArea()<<endl;
     cout <<"Circumference: "<<myCircle.getCircumference()<<endl;

     return 0;
 }






