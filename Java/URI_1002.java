import java.io.IOException;
import java.util.Scanner;

public class URI_1002 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);
        final double n = 3.14159;
        final double raio = Double.parseDouble(scanner.nextLine());

        System.out.printf("A=%.4f\n", (n * (raio * raio)));

    }

}
