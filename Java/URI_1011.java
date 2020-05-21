import java.io.IOException;
import java.util.Scanner;

public class URI_1011 {

    public static void main(String[] args) throws IOException {

        final int raio = Integer.parseInt(new Scanner(System.in).nextLine());

        System.out.printf("VOLUME = %.3f\n", (((4.0/3.0) * 3.14159) * (Math.pow(raio, 3))));

    }

}
