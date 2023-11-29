import java.util.Scanner;
public class Main {
    public static String d2b(int n) {
        String result = "";
        if (n > 1) {
            result = result + d2b(n / 2);
        }
        return result + (n % 2);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(d2b(num));
    }
}