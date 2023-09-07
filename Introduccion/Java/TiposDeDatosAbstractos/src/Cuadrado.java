public class Cuadrado extends Figura {
    public Cuadrado(double x) {
        super(x);
    }
    @Override
    public double area() {
        return x*x;
    }
    @Override
    public double perimetro() {
        return 4*x;
    }
}
