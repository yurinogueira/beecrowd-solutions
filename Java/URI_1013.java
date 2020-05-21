import java.io.IOException;
import java.util.Scanner;

public class URI_1013 {

    public static void main(String[] args) throws IOException {

        final String[] lista = new Scanner(System.in).nextLine().split("\\s");

        final int a = Integer.parseInt(lista[0]), b = Integer.parseInt(lista[1]), c = Integer.parseInt(lista[2]);
        final int maior_inicial = (a + b + Math.abs(a - b)) / 2;
        final int result = (maior_inicial + c + Math.abs(maior_inicial - c)) / 2;

        System.out.println(result + " eh o maior");

    }

}
