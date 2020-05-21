import java.io.IOException;
import java.util.Scanner;

public class URI_1009 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);
        scanner.nextLine();

        double S, V;

        S = Double.parseDouble(scanner.nextLine());
        V = Double.parseDouble(scanner.nextLine());

        System.out.printf("TOTAL = R$ %.2f\n", (((V / 100) * 15) + S));

    }

}
