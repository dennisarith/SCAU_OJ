import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        float a, b, result;
        char operator;
        Scanner input = new Scanner(System.in);
        a = input.nextFloat();
        operator = input.next().charAt(0);
        b = input.nextFloat();
        switch (operator) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = a / b; break;
            default:
                System.out.println("error");
                return;
        }
        System.out.printf("%.2f\n", result);
    }
}