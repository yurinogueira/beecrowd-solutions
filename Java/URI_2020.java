import java.io.IOException;
import java.util.Scanner;

public class URI_2020 {

    public static void main(String[] args) throws IOException {

        final int idadedia = Integer.parseInt(new Scanner(System.in).nextLine());
        final int anos = idadedia / 365;
        final int meses = (idadedia - (anos * 365)) / 30;
        final int dias = idadedia - (anos * 365) - (meses * 30);

        System.out.println(anos + " ano(s)");
        System.out.println(meses + " mes(es)");
        System.out.println(dias + " dia(s)");

    }

}
