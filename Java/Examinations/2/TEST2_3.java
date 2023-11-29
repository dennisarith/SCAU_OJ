import java.util.Scanner;
//输入正整数n，计算n!，结果用长整型数表示（注n!=1*2*3*...*n）

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long result = n;
        while (n != 1) {
            result *= --n;
        }
        System.out.println(result);
    }
}