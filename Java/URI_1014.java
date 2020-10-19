import java.io.IOException;
import java.util.Scanner;

public class URI_1014 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        final int km = Integer.parseInt(scanner.nextLine());
        final double combustivel = Double.parseDouble(scanner.nextLine());

        scanner.close();

        System.out.printf("%.3f km/l\n", (km / combustivel));

    }

}
