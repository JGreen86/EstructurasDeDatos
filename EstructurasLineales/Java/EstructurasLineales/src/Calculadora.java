public class Calculadora implements Operacion, Convertidor {

    public Calculadora() {

    }

    @Override
    public int suma(int a, int b) {
        return a+b;
    }

    @Override
    public int resta(int a, int b) {
        return a-b;
    }

    @Override
    public double metrosAcentimetros(double metros) {
        return metros*100;
    }

    @Override
    public double centimetrosAmetros(double cm) {
        return cm/100;
    }
}
