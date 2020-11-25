import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class URI_2729 {
    
    public static void main(String[] args) throws IOException {

        Scanner scanner = new Scanner(System.in);

        int n = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < n; i++) {
            List<String> lista = new ArrayList<>();
            String strings[] = scanner.nextLine().split(" ");
            for (String string : strings) {
                if (!lista.contains(string)) {
                    lista.add(string);
                }
            }
            Collections.sort(lista);
            for (int j = 0; j < lista.size(); j++) {
                System.out.print(lista.get(j));
                if (j + 1 != lista.size()) {
                    System.out.print(" ");
                }
            }
            System.out.printf("%n");
        }
        scanner.close();

    }

}
