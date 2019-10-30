import java.util.Scanner;

public class Template {
    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            while (in.hasNextInt()) {
                int a = in.nextInt();
                int b = in.nextInt();
                System.out.println(a + b);
            }
        }
    }
}