public class Usuario {
    private String nombre;
    private String apellidoPat;
    public Usuario() {
        // constructor vacio
    }
    public Usuario(String nombre) {
        this.nombre = nombre;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getApellidoPat() {
        return apellidoPat;
    }
    public void setApellidoPat(String apellidoPat) {
        this.apellidoPat = apellidoPat;
    }
}
