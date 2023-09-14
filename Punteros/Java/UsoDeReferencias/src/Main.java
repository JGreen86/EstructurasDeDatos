public class Main {

    public static void main(String[] args) {
        int x = 5;
        int y = x;
        y = 7;
        System.out.println(x); // 'x' no se ve afectada for 'z'
        ///////////////////////////Objetos//////////////////////////////
        Persona persona1 = new Persona("Homero Simpson", 47);
        Persona persona2 = persona1;
        persona2.setNombre("Bart Simpson");
        persona2.setEdad(10);
        System.out.println(persona1.getNombre()); // persona1 se ve afectada por persona2
        System.out.println(persona1.getEdad());
        ////////////////Arreglos///////////////////
        int[] a = {2,3,4,5,6};
        int[] b = a;
        b[2] = 8;
        System.out.println(a[2]); // 'a' se ve afectada for 'b'
    }
}