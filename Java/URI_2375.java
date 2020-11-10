import java.io.IOException;
import java.util.Scanner;

public class URI_2375 {
    
    public static void main(String[] args) throws IOException {
        
        Scanner scanner = new Scanner(System.in);
        int bola, x, y, z;
        bola = scanner.nextInt();
        x = scanner.nextInt();
        y = scanner.nextInt();
        z = scanner.nextInt();

        if (bola <= x && bola <= y && bola <= z) {
            System.out.println("S");
        } else {
            System.out.println("N");
        }

        scanner.close();

    }

}
