import java.io.IOException;
import java.util.Scanner;

public class URI_2763 {

    public static void main(String[] args) throws IOException {

        Scanner scanner = new Scanner(System.in);
        String cpf = scanner.nextLine();
        scanner.close();

        for (String parte : cpf.split("-|\\.")) {
            System.out.println(parte);
        }

    }

}