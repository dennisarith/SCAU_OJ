//计算数列和
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += 2 * i - 1;
        }
        System.out.println(sum);
    }
}
