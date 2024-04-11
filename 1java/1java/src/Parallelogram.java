// Parallelogram.java (Example implementation)
public class Parallelogram implements Shape {
    private double a, b;
    private double angle;

    public Parallelogram(double a, double b, double angle) {
        this.a = a;
        this.b = b;
        this.angle = angle;
    }

    @Override
    public double calcArea() {
        // Implement the area calculation for a parallelogram
        // Return the actual area value.
        return Math.sin(Math.toRadians(angle)) * a * b;
    }

    @Override
    public double calcCircumference() {
        return 2 * (a + b);
    }

    @Override
    public String info() {
        return "Parallelogram";
    }
}
