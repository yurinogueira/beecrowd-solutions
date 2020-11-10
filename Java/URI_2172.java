import java.io.IOException;
import java.util.Scanner;

public class URI_2172 {

    public static void main(String[] args) throws IOException {
        
        Scanner scanner = new Scanner(System.in);
        int a, b;
        a = scanner.nextInt();
        b = scanner.nextInt();
        while (a != 0 && b != 0) {
            System.out.println(a*b);
            a = scanner.nextInt();
            b = scanner.nextInt();
        }

        scanner.close();

    }

}
