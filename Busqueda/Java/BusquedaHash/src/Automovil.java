public class Automovil {
    private String noSerie;
    private String marca;
    private String modelo;
    private int anio;
    private String color;
    private int noPuertas;

    public Automovil(String noSerie, String marca, String modelo, int anio, String color, int noPuertas) {
        this.noSerie = noSerie;
        this.marca = marca;
        this.modelo = modelo;
        this.anio = anio;
        this.color = color;
        this.noPuertas = noPuertas;
    }

    public String getNoSerie() {
        return noSerie;
    }

    public void setNoSerie(String noSerie) {
        this.noSerie = noSerie;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public int getAnio() {
        return anio;
    }

    public void setAnio(int anio) {
        this.anio = anio;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public int getNoPuertas() {
        return noPuertas;
    }

    public void setNoPuertas(int noPuertas) {
        this.noPuertas = noPuertas;
    }

    @Override
    public String toString() {
        return "Automovil{" +
                "noSerie='" + noSerie + '\'' +
                ", marca='" + marca + '\'' +
                ", modelo='" + modelo + '\'' +
                ", anio=" + anio +
                ", color='" + color + '\'' +
                ", noPuertas=" + noPuertas +
                '}';
    }
}
