import java.util.Scanner;
public class Main {
    public static int gcd(int x, int y){
        int temp = 0;
        for(int i = Math.min(x,y); i > 0; i--){
            if(x % i == 0 && y % i == 0){
                temp = i;
                break;
            }
        }
        return temp;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        System.out.println(gcd(x, y));
    }
}
