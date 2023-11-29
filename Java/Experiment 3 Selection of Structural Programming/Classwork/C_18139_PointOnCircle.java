import java.util.Scanner;
 public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a = input.nextFloat();
        float b = input.nextFloat();
        double c = Math.sqrt(a*a+b*b);
        if((float)c >=0.999 && (float)c<=1.001)
            System.out.println("Y");
        else
            System.out.println("N");
    }
}