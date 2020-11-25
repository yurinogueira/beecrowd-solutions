import java.io.IOException;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class URI_2492 {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            List<String> dominio = new ArrayList<>();
            List<String> imagem = new ArrayList<>();

            boolean notFunc = false;
            boolean repete = false;

            int t = scanner.nextInt();
            
            if (t == 0) {
                break;
            }

            for (int i = 0; i < t; i++) {
                String[] sep = new String[2];
                sep[0] = scanner.next();
                scanner.next();
                sep[1] = scanner.next();
                if (dominio.contains(sep[0])) {
                    notFunc = true;
                }
                if (imagem.contains(sep[1])) {
                    repete = true;
                }
                dominio.add(sep[0]);
                imagem.add(sep[1]);
            }

            if (notFunc) {
                System.out.println("Not a function.");
            } else if (repete) {
                System.out.println("Not invertible.");
            } else {
                System.out.println("Invertible.");
            }
        }

        scanner.close();

    }
}