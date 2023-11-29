import java.util.Scanner;
public class Main {
    //使用方法重载编写max
    public static int max(int a, int b){
        return a > b ? a : b;
        // replace with: return Math.max(a, b);
    }
    public static int max(int a, int b, int c) {
        return Math.max(Math.max(a, b), c);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        int z = input.nextInt();
        System.out.println(max(x, y));
        System.out.println(max(x, y, z));
    }
}
