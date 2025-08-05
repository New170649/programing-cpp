#include <iostream>
#include <cmath>
using namespace std;

class Base_class {
	public:
	int base, height;
	int width, length;
	double radius;
	
	void findArea() {
		cout << "findArea() in Base class" << endl;
	}
	void perimeter() {
		cout << "perimeter() in Base class" << endl;
	}
};
class Triangle : public Base_class {
	public:	
	Triangle(){
		base = 10; height = 2;
	}
	void findArea() {
		cout << "Area of Triangle is " << (0.5 * base * height) << endl;
	}
	void perimeter() {
		double c= sqrt((base*base) + (height*height));
		cout << "Perimeter of triangle is " << (base + height + c) << endl;
	}
};
class Rectangle : public Base_class {
	public:	
	Rectangle(){
		width = 5; length = 10;
	}
	void findArea(){
		cout << "Area of rectangle is " << (width * length) << endl;
	}
	void perimeter(){
		cout << "Perimeter of rectangle is " << (2*(width+length)) << endl;
	}
};
class Circle : public Base_class {
	public:	
	Circle(double rr){
		radius = rr;
	}
	void findArea() {
		cout << "Area of circle is " << (M_PI * radius * radius) << endl;
	}
	void perimeter() {
		cout << "Perimeter of cicle is " << (2.0 * M_PI * radius) << endl;
	}
};

int main() {
	Triangle tr;
	tr.findArea();
	tr.perimeter();
	
	Rectangle rec;
	rec.findArea();
	rec.perimeter();
	
	Circle cr(10);
	cr.findArea();
	cr.perimeter();
}
