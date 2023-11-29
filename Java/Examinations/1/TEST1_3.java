//数的排序
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        int temp = 0;
        if(a > b){
            temp = b;
            b = a;
            a = temp;
        }
        if(a > c){
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
        System.out.println(a + "," + b + "," + c);
    }
}
