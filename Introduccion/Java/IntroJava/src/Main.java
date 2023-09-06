public class Main {
    public static void main(String[] args) {
        int[] arreglo = {2,1,5,4,3,8,6,7};
        //int[] arreglo2 = new int[5];
        //arreglo2[0] = 2;
        int suma = 0;
        for (int i=0; i<arreglo.length; i++) {
            suma += arreglo[i];
        }
        System.out.println("El resultado es " + suma);
        //////////////////OBJETOS////////////////////
        Usuario usuario = new Usuario();
        usuario.setNombre("Homero");
        String nombre = usuario.getNombre();
        System.out.println(nombre);

        Usuario usuario2 = new Usuario("Bart");
        String nombre2 = usuario2.getNombre();
        System.out.println(nombre2);
    }
}