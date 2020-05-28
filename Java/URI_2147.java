import java.io.IOException;
import java.util.Scanner;

public class URI_2147 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        final int i = Integer.parseInt(scanner.nextLine());
        double len;
        String string;

        for (int j = 0; j < i; j++) {
            string = scanner.nextLine();
            len = string.length();
            System.out.printf("%.2f\n", (len / 100));
        }

    }

}
