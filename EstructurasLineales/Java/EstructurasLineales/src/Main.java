import java.util.ArrayList;

public class Main {

    private static void imprimirProductos(ArrayList<Producto> listaDeProductos) {
        System.out.println("=================");
        for (Producto p : listaDeProductos) {
            System.out.println(p.toString());
        }
    }
    /*private static Producto buscarProducto(ArrayList<Producto> productos,String nombre) {

    }*/

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
        // Listas de productos
        ArrayList<Producto> listaDeProductos = new ArrayList<>();
        Producto producto1 = new Producto("Sabritas", 25.50);
        Producto producto2 = new Producto("Refresco", 29.99);
        // Agregar
        listaDeProductos.add(producto1);
        listaDeProductos.add(producto2);
        listaDeProductos.add(new Producto("Pan", 8.30));
        listaDeProductos.add(new Producto("Leche", 26));
        // Eliminar
        listaDeProductos.remove(1);
        // Obtener
        Producto producto_2 = listaDeProductos.get(2);
        System.out.println("Producto en posición 2 es " + producto_2.getNombre());
        System.out.println("Producto en posición 2 es " +
                listaDeProductos.get(2).getNombre());
        Producto azucar = new Producto("Azucar", 5);
        // Actualizar
        listaDeProductos.set(2, azucar);
        // Imprimir lista
        for (int i = 0; i < listaDeProductos.size(); i++) {
            System.out.println(listaDeProductos.get(i).toString());
        }
        imprimirProductos(listaDeProductos);
        Producto manzana = new Producto("Manzana", 60);
        listaDeProductos.add(1, manzana);
        imprimirProductos(listaDeProductos);
    }
}