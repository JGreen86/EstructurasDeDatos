import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Listas en Java
        ArrayList<String> listaDeCompras = new ArrayList<>();
        // Agregar
        listaDeCompras.add("Sabritas");
        listaDeCompras.add("Refresco");
        listaDeCompras.add("Vasos");
        listaDeCompras.add("Carne");
        // Eliminar
        listaDeCompras.remove(1);
        // Obtener
        String producto = listaDeCompras.get(2);
        System.out.println("Producto en posición 2 es " + producto);
        // Actualizar
        listaDeCompras.set(1, "Platos");
        // Imprimir lista
        for (int i = 0; i < listaDeCompras.size(); i++) {
            System.out.println(listaDeCompras.get(i));
        }
        for (String producto1 : listaDeCompras) {
            System.out.println(producto1);
        }
    }
}