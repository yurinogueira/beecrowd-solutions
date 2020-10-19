import java.io.IOException;
import java.util.Scanner;

public class URI_1012 {

    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);
        final String[] lista = scanner.nextLine().split("\\s");

        scanner.close();
        
        double A, B, C;

        A = Double.parseDouble(lista[0]);
        B = Double.parseDouble(lista[1]);
        C = Double.parseDouble(lista[2]);

        System.out.printf("TRIANGULO: %.3f\n", ((A * C) / 2));
        System.out.printf("CIRCULO: %.3f\n", ((C * C) * 3.14159));
        System.out.printf("TRAPEZIO: %.3f\n", (((A + B) * C) / 2));
        System.out.printf("QUADRADO: %.3f\n", (B * B));
        System.out.printf("RETANGULO: %.3f\n", (A * B));

    }

}
