import java.io.IOException;
import java.util.Scanner;

public class URI_1007 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        int A, B, C, D;

        A = Integer.parseInt(scanner.nextLine());
        B = Integer.parseInt(scanner.nextLine());
        C = Integer.parseInt(scanner.nextLine());
        D = Integer.parseInt(scanner.nextLine());

        System.out.println("DIFERENCA = " + ((A * B) - (C * D)));

    }

}
