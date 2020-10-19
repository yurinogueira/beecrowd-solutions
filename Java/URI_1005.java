import java.io.IOException;
import java.util.Scanner;

public class URI_1005 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        double A, B;

        A = Double.parseDouble(scanner.nextLine());
        B = Double.parseDouble(scanner.nextLine());

        scanner.close();

        System.out.printf("MEDIA = %.5f\n", (((A * 3.5) + (B * 7.5)) / 11));

    }

}
