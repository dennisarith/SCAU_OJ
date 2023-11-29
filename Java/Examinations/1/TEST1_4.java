//判断点是否在圆上
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a = input.nextFloat();
        float b = input.nextFloat();
        float c = Math.abs(a * a + b * b);
        if(c >= 0.999 && c <= 1.001){
            System.out.println("Y");
        }
        else{
            System.out.println("N");
        }
    }
}
