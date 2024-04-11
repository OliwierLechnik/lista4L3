// Rectangle.java (Example implementation)
public class Rectangle implements Shape {
    private double a, b;

    public Rectangle(double a, double b) {
        this.a = a;
        this.b = b;
    }

    @Override
    public double calcArea() {
        return a * b;
    }

    @Override
    public double calcCircumference() {
        return 2 * (a + b);
    }

    @Override
    public String info() {
        return "Rectangle";
    }
}
