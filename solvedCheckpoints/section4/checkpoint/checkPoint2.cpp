/*

Build a program that prints all points in a 2D graph
A graph is a structure with many points. It also has a name.
A point is a structure with 2 numbers.
Both structures should have empty constructors and "full" constructos
Example:
Point pointA = Point();
Point pointB = Point(1.4f,2.6f);

Graph a = Graph();
Graph b = Graph("Gráfico A", { Any number of points })

Use the last program you made and:

Add a method to convert a graph and a point 
into a string and use it to print it
Hint: You may need to use the function to_string(float x)

*/

#include <iostream>
#include <vector>
using namespace std;

struct Point {
    float x;
    float y;

    Point() : x(0), y(0) {}

    Point(float dX, float dY) : x(dX), y(dY) {}

    string toString() {
        return "Point, x: " + to_string(x) + ", y: " + to_string(y);
    }
};

struct Graph2D {
    vector<Point> points;
    string name;

    Graph2D() : name("No name"), points(0) {}


    Graph2D(string dName, vector<Point>& dPoints) : 
        name(dName), points(dPoints) {}

    string toString() {
        string resultStr = "Graph has points: \n";
        for(int i = 0; i < points.size(); i++) {
            resultStr += points[i].toString() + "\n";
        }
        return resultStr;
    }
};

int main() {
    Point pointA = Point();
    Point pointB = Point(1.4f,2.6f);

    vector<Point> points = {pointA, pointB};

    Graph2D a = Graph2D();
    Graph2D b = Graph2D("Gráfico A", points);

    cout << a.toString() << endl;
    cout << "----------" << endl;
    cout << b.toString() << endl;

    return 0;
}