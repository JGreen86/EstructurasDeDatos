import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class Main {
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
        // buscar el automovil con noSerie = "C002" en el catalogo
        Automovil mustang2 = catalogoDeAutomoviles.get("C002");
        System.out.println(mustang2.toString());
    }
}