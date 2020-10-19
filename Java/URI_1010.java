import java.io.IOException;
import java.util.Scanner;

public class URI_1010 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        final String[] lista_1 = scanner.nextLine().split("\\s");
        final String[] lista_2 = scanner.nextLine().split("\\s");

        final int n1 = Integer.parseInt(lista_1[1]), n2 = Integer.parseInt(lista_2[1]);
        final double p1 = Double.parseDouble(lista_1[2]), p2 = Double.parseDouble(lista_2[2]);

        scanner.close();

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", ((n1 * p1) + (n2 * p2)));

    }

}
