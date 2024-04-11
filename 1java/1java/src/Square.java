// Square.java (Example implementation)
public class Square implements Shape {
    private double a;

    public Square(double a) {
        this.a = a;
    }

    @Override
    public double calcArea() {
        return a * a;
    }

    @Override
    public double calcCircumference() {
        return 4 * a;
    }

    @Override
    public String info() {
        return "Square";
    }
}
