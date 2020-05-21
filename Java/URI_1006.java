import java.io.IOException;
import java.util.Scanner;

public class URI_1006 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        double A, B, C;

        A = Double.parseDouble(scanner.nextLine());
        B = Double.parseDouble(scanner.nextLine());
        C = Double.parseDouble(scanner.nextLine());

        System.out.printf("MEDIA = %.1f\n", (((A * 2) + (B * 3) + (C * 5)) / 10));

    }

}
