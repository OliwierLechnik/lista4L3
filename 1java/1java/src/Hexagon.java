// Hexagon.java (Example implementation)
public class Hexagon implements Shape {
    private double a;

    public Hexagon(double a) {
        if (a < 0) {
            throw new IllegalArgumentException("Argument must not be negative.");
        }
        this.a = a;
    }

    @Override
    public double calcArea() {
        // Implement the area calculation for a regular hexagon
        // Return the actual area value.
        return a * a * Math.sqrt(27) / 2;
    }

    @Override
    public double calcCircumference() {
        return 6 * a;
    }

    @Override
    public String info() {
        return "Hexagon";
    }
}
