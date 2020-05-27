import java.io.IOException;
import java.util.Scanner;

public class URI_1019 {

    public static void main(String[] args) throws IOException {

        final int sec = Integer.parseInt(new Scanner(System.in).nextLine());

        final int hours = sec / 3600;
        final int minutes = (sec % 3600) / 60;
        final int seconds = sec % 60;

        System.out.printf("%d:%d:%d\n", hours, minutes, seconds);

    }

}
