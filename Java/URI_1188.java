import java.io.IOException;
import java.util.Scanner;

public class URI_1188 {
    
    public static void main(String[] args) throws IOException {

        final Scanner scanner = new Scanner(System.in);

        double[][] matriz = new double[12][12];
        double total = 0.0;
        String operacao = scanner.nextLine();

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                matriz[i][j] = Double.parseDouble(scanner.nextLine());
            }
        }

        scanner.close();

        int k = 5;
        for (int i = 7; i < 12; i++) {
            for (int j = k; j < i; j++) {
                total += matriz[i][j];
            }
            k--;
        }

        if (!operacao.equals("M")) {
            System.out.printf("%.1f\n", total);
            return;
        }
        System.out.printf("%.1f\n", (total / 30.0));

    }

}
