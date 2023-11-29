import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        for(int c = Math.min(a, b); c >=1; c--){
            if(a % c == 0 && b % c == 0){
                System.out.println(c);
                break;
            }
        }
    }
}
