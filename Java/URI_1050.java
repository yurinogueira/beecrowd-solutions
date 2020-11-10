import java.io.IOException;
import java.util.Scanner;

public class URI_1050 {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        switch (scanner.nextInt()) {
            case 71:
                System.out.println("Salvador");
                break;
            case 61:
                System.out.println("Brasilia");
                break;
            case 32:
                System.out.println("Juiz de Fora");
                break;
            case 31:
                System.out.println("Belo Horizonte");
                break;
            case 27:
                System.out.println("Vitoria");
                break;
            case 21:
                System.out.println("Rio de Janeiro");
                break;
            case 19:
                System.out.println("Campinas");
                break;
            case 11:
                System.out.println("Sao Paulo");
                break;
            default:
                System.out.println("DDD nao cadastrado");
        }
        scanner.close();

    }
    
}
