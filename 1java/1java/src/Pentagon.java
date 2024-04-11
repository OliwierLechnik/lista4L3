// Pentagon.java (Example implementation)
public class Pentagon implements Shape {
    private double a;

    public Pentagon(double a) {
        if (a < 0) {
            throw new IllegalArgumentException("Argument must not be negative.");
        }
        this.a = a;
    }

    @Override
    public double calcArea() {
        // Implement the area calculation for a regular pentagon
        // Return the actual area value.
        return Math.sqrt(5 * (5 + 2 * Math.sqrt(5))) * a * a / 4;
    }

    @Override
    public double calcCircumference() {
        return a * 5;
    }

    @Override
    public String info() {
        return "Pentagon";
    }
}
