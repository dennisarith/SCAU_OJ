import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        int[] a = new int[10];
        Scanner input = new Scanner(System.in);
        for(int i = 0; i < 10; i++){
            a[i] = input.nextInt();
        }
        int min = a[0];
        for(int i = 1; i < 10; i++){
            if(a[i] < min){
                min = a[i];
            }
        }
        System.out.println(min);
    }
}
