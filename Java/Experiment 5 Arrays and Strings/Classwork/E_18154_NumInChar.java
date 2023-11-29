import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.nextLine();
        int result = 0;
        for(int i = 0; i < a.length(); i++){
            char c = a.charAt(i);
            if(c >= '0' && c <= '9'){
                result++;
            }
        }
        System.out.println(result);
    }
}
