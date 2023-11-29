import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int s = 0; s < n + 1; s++) {
            for (int i = n; i > s; i--) {
                System.out.print(" ");
            }
            for (int j = 0; j < (2 * s + 1); j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int s = n; s > 0; s--) {
            for (int i = n; i > s - 1; i--) {
                System.out.print(" ");
            }
            for (int j = 0; j < (2 * s - 1); j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
