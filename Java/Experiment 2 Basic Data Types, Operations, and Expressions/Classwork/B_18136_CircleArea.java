import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double r = input.nextDouble();
        double pi = 3.14159;
        double s = pi * Math.pow(r, 2);
        System.out.printf("%.2f", s);
        System.out.println();
    }
}