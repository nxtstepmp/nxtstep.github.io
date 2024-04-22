// Abstract class Shape defines a template for derived classes.
abstract class Shape {
    // Abstract method that must be implemented by any subclass.
    public abstract void numberOfSides();
}

// Class Rectangle inherits from Shape and provides an implementation of numberOfSides().
class Rectangle extends Shape {
    // Implements the numberOfSides method specific to rectangles.
    public void numberOfSides() {
        System.out.println("The sides of rectangle are:" + 4);
    }
}

// Class Triangle inherits from Shape and provides an implementation of numberOfSides().
class Triangle extends Shape {
    // Implements the numberOfSides method specific to triangles.
    public void numberOfSides() {
        System.out.println("The sides of triangle are:" + 3);
    }
}

// Class Hexagon inherits from Shape and provides an implementation of numberOfSides().
class Hexagon extends Shape {
    // Implements the numberOfSides method specific to hexagons.
    public void numberOfSides() {
        System.out.println("The sides of hexagon are:" + 6);
    }
}

// TestShape class contains the main method to execute the program.
class TestShape {
    // Main method is the entry point of the program.
    public static void main(String args[]) {
        // Creating an instance of Rectangle.
        Rectangle r = new Rectangle();
        // Calling the method to print number of sides of the rectangle.
        r.numberOfSides();

        // Creating an instance of Triangle.
        Triangle t = new Triangle();
        // Calling the method to print number of sides of the triangle.
        t.numberOfSides();

        // Creating an instance of Hexagon.
        Hexagon h = new Hexagon();
        // Calling the method to print number of sides of the hexagon.
        h.numberOfSides();
    }
}
