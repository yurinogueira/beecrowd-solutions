import java.io.IOException;
import java.util.Scanner;

public class URI_2021 {

    public static void main(String[] args) throws IOException {

        final double money = Double.parseDouble(new Scanner(System.in).nextLine());
        final int a = (int) money;
        double b = money - a;

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

        System.out.println("NOTAS:");
        System.out.println(n100 + " nota(s) de R$ 100.00");
        System.out.println(n50 + " nota(s) de R$ 50.00");
        System.out.println(n20 + " nota(s) de R$ 20.00");
        System.out.println(n10 + " nota(s) de R$ 10.00");
        System.out.println(n5 + " nota(s) de R$ 5.00");
        System.out.println(n2 + " nota(s) de R$ 2.00");
        System.out.println("MOEDAS:");
        System.out.println(n1 + " moeda(s) de R$ 1.00");

        int m50 = 0, m25 = 0, m10 = 0, m5 = 0, m1 = 0;

        while (true) {
            if (b >= 0.50) {
                m50 += 1;
                b -= 0.50;
            } else if (b >= 0.25) {
                m25 += 1;
                b -= 0.25;
            } else if (b >= 0.10) {
                m10 += 1;
                b -= 0.10;
            } else if (b >= 0.05) {
                m5 += 1;
                b -= 0.05;
            } else if (b >= 0.009) {
                m1 += 1;
                b -= 0.01;
            } else {
                break;
            }
        }

        System.out.println(m50 + " moeda(s) de R$ 0.50");
        System.out.println(m25 + " moeda(s) de R$ 0.25");
        System.out.println(m10 + " moeda(s) de R$ 0.10");
        System.out.println(m5 + " moeda(s) de R$ 0.05");
        System.out.println(m1 + " moeda(s) de R$ 0.01");

    }

}
