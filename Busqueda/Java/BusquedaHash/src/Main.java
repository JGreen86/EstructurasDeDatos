import java.util.*;

public class Main {

    private static void imprimirCatalogo(HashMap<String, Automovil> catalogo) {
        System.out.println("=====Catalogo de automoviles=====");
        for(Map.Entry<String, Automovil> fila : catalogo.entrySet()) {
            System.out.println(fila.getValue().toString());
        }
        System.out.println("=================================");
    }

    public static void main(String[] args) {
        Automovil versa2023 = new Automovil("C001","Nissan","Versa",2023,"Rojo",4);
        Automovil mustang = new Automovil("C002", "Ford", "Mustang", 1965, "Verde", 2);
        Automovil cheyenne = new Automovil("A104", "Chevrolet", "Cheyene", 2000, "Negro", 4);

        List<Automovil> listaDeAutomoviles = new ArrayList<>();
        listaDeAutomoviles.add(versa2023);
        listaDeAutomoviles.add(mustang);
        listaDeAutomoviles.add(cheyenne);
        // buscar el automovil con noSerie = C002
        for(Automovil automovil : listaDeAutomoviles) {
            if (automovil.getNoSerie().equals("C002")) {
                System.out.println(automovil.toString());
                break;
            }
        }
        // Hashmap
        HashMap<String, Automovil> catalogoDeAutomoviles = new HashMap<>();
        catalogoDeAutomoviles.put(versa2023.getNoSerie(), versa2023);
        catalogoDeAutomoviles.put(mustang.getNoSerie(), mustang);
        catalogoDeAutomoviles.put(cheyenne.getNoSerie(), cheyenne);

        Scanner scanner = new Scanner(System.in);
        String noSerie;

        // eliminar.
        System.out.print("Ingresa el numero de serie del vehiculo a eliminar: ");
        noSerie = scanner.nextLine();
        if (catalogoDeAutomoviles.containsKey(noSerie)) {
            catalogoDeAutomoviles.remove(noSerie);
            System.out.println("Eliminando automovil ...");
        } else {
            System.out.println("Automovil no encontrado.");
        }
        imprimirCatalogo(catalogoDeAutomoviles);

        // buscar el automovil con noSerie
        System.out.print("Ingresa el numero de serie del vehiculo: ");
        noSerie = scanner.nextLine();
        Automovil carrito = catalogoDeAutomoviles.get(noSerie);
        System.out.println(carrito.toString());

        // actualizar
        carrito.setAnio(1999);
        carrito.setColor("Gris");
        catalogoDeAutomoviles.put(carrito.getNoSerie(), carrito);
        imprimirCatalogo(catalogoDeAutomoviles);


    }
}