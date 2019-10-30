// 筛法求素数

package OTHER;

import java.util.Scanner;

public class Prime {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt(); // 范围
        int Location[] = new int[N + 1];
        for (int i = 0; i != N + 1; ++i) {
            Location[i] = i;
        }
        Location[1] = 0; // 筛除部分 1不是素数
        int p, q, end;
        end = (int) (Math.sqrt((double) N) + 1);
        for (p = 2; p != end; ++p) { // 开始筛选
            if (Location[p] != 0) { // 如果是素数，就把后面的筛选啦
                for (q = p; p * q <= N; ++q) {
                    for (int k = p * q; k <= N; k *= p)
                        Location[k] = 0;
                }
            }
        }
        int count = 0;
        for (int i = 1; i != N + 1; ++i) {
            if (Location[i] != 0) {
                System.out.print(Location[i] + " ");
                ++count;
            }
            if (count % 10 == 0)
                System.out.println(); // 十个换次行
        }
        System.out.println("\n一共有：" + count + "个素数");
    }
}