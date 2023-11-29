import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        if (a != 0){
            if(a > 0)
                System.out.println("positive");
            else
                System.out.println("negative");
            if(a % 2 == 0)
                System.out.println("even");
            else
                System.out.println("odd");
        }
    }
}
