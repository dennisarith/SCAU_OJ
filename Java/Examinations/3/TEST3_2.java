// 计算数列和

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double e = input.nextDouble();
        int i = 1;
        int j = -1;
        double sum = 0.0;
        if(Math.abs((int)Math.pow(j, i + 1) * (1.0 / i)) >= e) {
            do {
                sum += (int) Math.pow(j, i + 1) * (1.0 / i);
                ++i;
            } while (Math.abs((int) Math.pow(j, i + 1) * (1.0 / i)) >= e);
        }
        System.out.printf("%.7f\n", sum);
    }
}
