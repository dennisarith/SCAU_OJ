import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int result = 0, temp = 0;
        for(int i = n; i >= 1; i--){
            temp = 2 * i - 1;
            result += temp;
        }
        System.out.println(result);
    }
}
