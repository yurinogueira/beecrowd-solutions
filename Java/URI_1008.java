import java.io.IOException;
import java.util.Scanner;

public class URI_1008 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        int N, H;

        N = Integer.parseInt(scanner.nextLine());
        H = Integer.parseInt(scanner.nextLine());

        final double S = Double.parseDouble(scanner.nextLine());

        System.out.println("NUMBER = " + N);
        System.out.printf("SALARY = U$ %.2f\n", (S * H));

    }

}
