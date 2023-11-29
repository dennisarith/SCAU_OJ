//计算圆的面积
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double r = input.nextDouble();
        double PI = 3.14159;
        double s = PI * r * r;
        System.out.printf("%.2f\n", s);
    }
}
