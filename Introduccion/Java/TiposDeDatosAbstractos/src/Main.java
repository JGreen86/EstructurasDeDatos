public class Main {
    public static void main(String[] args) {
        Cuadrado cuadrado = new Cuadrado(5.0);
        double area = cuadrado.area();
        double perimetro = cuadrado.perimetro();
        System.out.println("Area = " + area +
                " Perimetro = " + perimetro);
    }
}