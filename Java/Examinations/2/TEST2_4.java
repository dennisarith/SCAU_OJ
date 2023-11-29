import java.util.Scanner;

//由键盘输入一个不多于9位的正整数，判断并输出它是几位数
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int result = 0;
        if (a == 0)
            result = 0;
        else if (a > 0 && a < 10)
            result = 1;
        else if (a >= 10 && a < 100)
            result = 2;
        else if (a >= 100 && a < 1000)
            result = 3;
        else if (a >= 1000 && a < 10000)
            result = 4;
        else if (a >= 10000 && a < 100000)
            result = 5;
        else if (a >= 100000 && a < 1000000)
            result = 6;
        else if (a >= 1000000 && a < 10000000)
            result = 7;
        else if (a >= 10000000 && a < 100000000)
            result = 8;
        else
            result = 9;
        System.out.println(result);
    }
}
