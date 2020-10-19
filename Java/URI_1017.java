import java.io.IOException;
import java.util.Scanner;

public class URI_1017 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        final int horas = Integer.parseInt(scanner.nextLine());
        final int km = Integer.parseInt(scanner.nextLine());

        scanner.close();

        System.out.printf("%.3f\n", ((horas * km) / 12.0));

    }

}
