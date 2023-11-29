import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int i = 1;
        while(a >= 10){
            a /= 10;
            ++i;
        }
        System.out.println(i);
    }
}