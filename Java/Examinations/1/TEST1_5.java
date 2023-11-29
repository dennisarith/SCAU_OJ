//输出最小值
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arr = new int[10];
        for(int i = 0; i < 10; i++){
            arr[i] = input.nextInt();
        }
        int temp = arr[0];
        for(int i = 1; i < 10; i++){
            if(temp > arr[i]){
                temp = arr[i];
            }
        }
        System.out.println(temp);
    }
}
