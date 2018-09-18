/**~*~*~*~*~*~
   Project 6A: - in class exercise
 
   Defining and using functions in a C++ program:

       void welcome(void);                          // No paramaters, no return value
       void farewell(void);
       void printCircle(double, double, double);    // PASS BY VALUE
       double getRadius(void);                      // return a value
       double calcArea(double);                     // receive a value and return a value
       double calcCirc(double);
 
       double calculateCircle(double, &double, &double); // PASS BY REFERENCE
 
   This program will output the circumference and area
   of a circle with a given radius.
 
    @author Jiaming Liu
    @date July 23rd   
*~**/


#include <iostream>

using namespace std;

const  double PI = 3.14;

void welcome(); // prototype for welcome
void farewell(); // prototype for farewell
double getRadius(); // prototype for getting the radius
void printCircle(double, double, double); // prototype for printing the circle
double calcArea(double);   // prototype for calculating the area
double calcCirc(double);  // prototype for calculating the circumference
void calculateCircle(double radius, double circ, double area); // prototype for calculating area&circ

int main()
{
    double radius;
	double area, circ;

    welcome(); // call for welcome
    
    radius = getRadius(); // call to get radius

    circ = calcCirc(radius);  // call to calculate the circumference
    area = calcArea(radius); // call to calculate the area

    printCircle(radius, circ, area); // call to printcircle
    
    // Perform Calculations - second solution
    calculateCircle(radius, circ, area);     // call the calculateCircle function
    
    printCircle(radius, circ, area); // Display Results again, after the second calculation
    // call the printCircle function again
    
    farewell();  // calling the farewell function

   return 0;
}

// Display a welcome message
void welcome()
{
    cout << "WELCOME to the CIRCLE calculator!\n\n"
    << "This program will output the\n"
    << "\tcircumference and\n"
    << "\tarea\n"
    << "of a circle with a given radius.\n\n";
}

// Display an "end of the program" message
void farewell()
{
    cout << "\n\n"
    << "\t ~~*~~ The END ~~*~~ \n\n"
    << "\t        ~~*~~ \n"
    << "\t      Thank you\n\tfor using my program!\n";
}

// Get Radius
double getRadius()
{
    double radius;
    do
    {
        cout << "Enter radius (must be > 0): ";
        cin  >> radius;
    } while (radius <= 0);
    
    return radius;
}

// Display Results
void printCircle(double radius, double circ, double area)
{
    cout << "\n\nRESULTS\n";
    cout << "\tRadius = " << radius << endl;
    cout << "\tCircumference = " << circ << endl;
    cout << "\tArea = " << area << endl;
}

// Perform Calculations
double calcCirc(double radius)
{
    return 2 * PI * radius;
}

// Perform Calculations
double calcArea(double radius)
{
    return PI * radius * radius;
}

// Perform Calculations
void calculateCircle(double radius, double &circ, double &area)
{
    circ = 2 * PI * radius;
    area = PI * radius * radius;
}

/*****************
 WELCOME to the CIRCLE calculator!
 
 This program will output the
 circumference and
 area
 of a circle with a given radius.
 
 Enter radius (must be > 0): 5
 
 
 RESULTS
 Radius = 5
 Circumference = 31.4
 Area = 78.5
 
 
 ~~*~~ The END ~~*~~
 
 ~~*~~
 Thank you
 for using my program!
 Program ended with exit code: 0
 */
