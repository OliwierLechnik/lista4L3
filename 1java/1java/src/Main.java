import java.util.ArrayList;
import java.util.List;

enum Shapes {
    CircleFlag,
    QuadrangleFlag,
    PentagonFlag,
    HexagonFlag
}

public class Main {
    public static Shapes interpretFlag(String flag) throws IllegalArgumentException {
        int len = flag.length();
        if (len != 2) {
            throw new IllegalArgumentException("Flag must be 2 characters long.");
        }
        if (flag.charAt(0) != '-') {
            throw new IllegalArgumentException("Flag must start with '-'.");
        }
        switch (flag.charAt(1)) {
            case 'c':
                return Shapes.CircleFlag;
            case 'q':
                return Shapes.QuadrangleFlag;
            case 'p':
                return Shapes.PentagonFlag;
            case 'h':
                return Shapes.HexagonFlag;
            default:
                throw new IllegalArgumentException("No such flag of value '" + flag + "' exists.");
        }
    }
    public static void info(Shape shape) {
        System.out.println(shape.info());
    }

    public static void area(Shape shape) {
        System.out.println(shape.calcArea());
    }

    public static void circumference(Shape shape) {
        System.out.println(shape.calcCircumference());
    }

    public static void main(String[] args) {
        if (args.length < 2) {
            return;
        }
        List<Double> parsed = new ArrayList<>();
        for (int i = 1; i < args.length; i++) {
            try {
                double tmp = Double.parseDouble(args[i]);
                if (tmp < 0) {
                    System.err.println("Invalid value of '" + args[i] + "' should be positive.");
                    return;
                }
                parsed.add(tmp);
            } catch (NumberFormatException e) {
                System.err.println("Invalid value of '" + args[i] + "' should be a number.");
                return;
            }
        }

        Shape shape = null;
        switch (interpretFlag(args[0])) {
            case CircleFlag:
                if (parsed.size() != 1) {
                    System.err.println("Incorrect number of following arguments, should be 1 but is " + parsed.size() + ".");
                    System.exit(0);
                }
                shape = new Circle(parsed.get(0));
                break;
            case PentagonFlag:
                if (parsed.size() != 1) {
                    System.err.println("Incorrect number of following arguments, should be 1 but is " + parsed.size() + ".");
                    System.exit(0);
                }
                shape = new Pentagon(parsed.get(0));
                break;
            case HexagonFlag:
                if (parsed.size() != 1) {
                    System.err.println("Incorrect number of following arguments, should be 1 but is " + parsed.size() + ".");
                    System.exit(0);
                }
                shape = new Hexagon(parsed.get(0));
                break;
            case QuadrangleFlag:
                if (parsed.size() != 5) {
                    System.err.println("Incorrect number of following arguments, should be 5 but is " + parsed.size() + ".");
                    System.exit(0);
                }

                if(parsed.get(4) <= 0 || parsed.get(4) >= 180){
                    System.err.println("angle invalid");
                    System.exit(0);
                }

                if (parsed.get(0).equals(parsed.get(1)) && parsed.get(1).equals(parsed.get(2)) && parsed.get(2).equals(parsed.get(3))) {
                    if (parsed.get(4).equals(90.0)) {
                        shape = new Square(parsed.get(0));
                    } else {
                        shape = new Diamond(parsed.get(0), parsed.get(4));
                    }
                } else if (parsed.get(0).equals(parsed.get(2)) && parsed.get(1).equals(parsed.get(3))) {
                    if (parsed.get(4).equals(90.0)) {
                        shape = new Rectangle(parsed.get(0), parsed.get(1));
                    } else {
                        shape = new Parallelogram(parsed.get(0), parsed.get(1), parsed.get(4));
                    }
                } else {
                    shape = new Quadrangle(parsed.get(0), parsed.get(1), parsed.get(2), parsed.get(3), parsed.get(4));
                }
                break;
            default:
                System.exit(0);
        }
        info(shape);
        area(shape);
        circumference(shape);
    }
}
