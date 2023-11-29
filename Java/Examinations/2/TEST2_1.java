import java.util.Scanner;
//点是否在圆上
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = Math.abs(a * a + b * b);
        if(c >= 0.999 && c <= 1.001){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }
    }
}
