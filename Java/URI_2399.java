import java.io.IOException;
import java.util.Scanner;

public class URI_2399 {
    
    public static void main(String[] args) throws IOException {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] vetor = new int[n];

        for (int i = 0; i < n; i++) vetor[i] = 0;
        for (int i = 0; i < n; i++) {
            int c = scanner.nextInt();
            if (c == 1) {
                if (i > 0) {
                    vetor[i - 1]++;
                }
                vetor[i]++;
                if ((i + 1) != n) {
                    vetor[i + 1]++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.println(vetor[i]);
        }

        scanner.close();

    }

}
