import java.io.IOException;
import java.util.Scanner;

public class URI_1001 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        int A, B;
        A = Integer.parseInt(scanner.nextLine());
        B = Integer.parseInt(scanner.nextLine());

        scanner.close();

        System.out.println("X = " + (A + B));

    }

}
