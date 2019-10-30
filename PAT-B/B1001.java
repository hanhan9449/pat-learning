import java.util.Scanner;

public class B1001 {
    public static void main(String[] args) {
        answer();
    }

    public static void answer() {
        int count = 0;
        try (Scanner in = new Scanner(System.in)) {
            int a = in.nextInt();
            while (a != 1) {
                if (a % 2 == 0) {
                    a /= 2; // 为偶数
                } else {
                    a = (3 * a + 1) / 2;
                }
                count++;
            }
        } catch (Exception e) {
            // TODO: handle exception
        }
        finally {
            System.out.println(count);
        }
    }
}
