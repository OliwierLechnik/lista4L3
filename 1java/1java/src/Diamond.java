// Diamond.java (Example implementation)
public class Diamond implements Shape {
    private double a;
    private double angle;

    public Diamond(double a, double angle) {
        this.a = a;
        this.angle = angle;
    }

    @Override
    public double calcArea() {
        // Implement the area calculation for a diamond
        // Return the actual area value.
        return Math.sin(Math.toRadians(angle)) * a * a;
    }

    @Override
    public double calcCircumference() {
        // Since a diamond has equal sides, the circumference is the perimeter
        return 4 * a;
    }

    @Override
    public String info() {
        return "Diamond";
    }
}
