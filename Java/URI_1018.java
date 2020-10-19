import java.io.IOException;
import java.util.Scanner;

public class URI_1018 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);
        final int a = Integer.parseInt(scanner.nextLine());
        scanner.close();

        final int n100 = a / 100;
        final int v100 = n100 * 100;
        final int n50 = (a - v100) / 50;
        final int v50 = n50 * 50;
        final int n20 = (a - v100 - v50) / 20;
        final int v20 = n20 * 20;
        final int n10 = (a - v100 - v50 - v20) / 10;
        final int v10 = n10 * 10;
        final int n5 = (a - v100 - v50 - v20 - v10) / 5;
        final int v5 = n5 * 5;
        final int n2 = (a - v100 - v50 - v20 - v10 - v5) / 2;
        final int v2 = n2 * 2;
        final int n1 = a - v100 - v50 - v20 - v10 - v5 - v2;

        System.out.println(a);
        System.out.println(n100 + " nota(s) de R$ 100,00");
        System.out.println(n50 + " nota(s) de R$ 50,00");
        System.out.println(n20 + " nota(s) de R$ 20,00");
        System.out.println(n10 + " nota(s) de R$ 10,00");
        System.out.println(n5 + " nota(s) de R$ 5,00");
        System.out.println(n2 + " nota(s) de R$ 2,00");
        System.out.println(n1 + " nota(s) de R$ 1,00");

    }

}
