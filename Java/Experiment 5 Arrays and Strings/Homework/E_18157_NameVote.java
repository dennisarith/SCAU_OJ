// 字符串的比较
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = 0, b = 0, c = 0, d = 0;
        String name1 = "Alan";
        String name2 = "Mike";
        String name3 = "Tom";
        for(int i = 0; i < n; i++){
            String name = input.next();
            if(name.equals(name1)){
                ++a;
            }
            else if(name.equals(name2)){
                ++b;
            }
            else if(name.equals(name3)){
                ++c;
            }
            else{
                ++d;
            }
        }
        System.out.println("Alan:" + a);
        System.out.println("Mike:" + b);
        System.out.println("Tom:" + c);
        System.out.println("invalid:" + d);
    }
}
