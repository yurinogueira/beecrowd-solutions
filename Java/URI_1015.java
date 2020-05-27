import java.io.IOException;
import java.util.Scanner;

public class URI_1015 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        final String[] lista_1 = scanner.nextLine().split("\\s");
        final String[] lista_2 = scanner.nextLine().split("\\s");

        final double x1 = Double.parseDouble(lista_1[0]), y1 = Double.parseDouble(lista_1[1]);
        final double x2 = Double.parseDouble(lista_2[0]), y2 = Double.parseDouble(lista_2[1]);

        System.out.printf("%.4f\n", Math.pow((Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2)), (0.5)));

    }

}
