// Circle.java (Example implementation)
public class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double calcArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public double calcCircumference() {
        return 2 * Math.PI * radius;
    }

    @Override
    public String info() {
        return "Circle with radius " + radius;
    }
}
