public abstract class Figura {
    protected double x;

    public Figura(double x) {
        this.x = x;
    }
    public abstract double area();
    public abstract double perimetro();
}