import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int[] nums = new int[5];
        for(int i = 0; i < 5; i++){
            nums[i] = input.nextInt();
        }
        for(int i = 0; i < 5; i++){
            if(nums[i] % 27 == 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}