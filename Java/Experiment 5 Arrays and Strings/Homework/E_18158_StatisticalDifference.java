import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int sum = 0;
        int[] array = new int[m];
        for(int i = 0; i < array.length; i++){
            array[i] = input.nextInt();
        }
        for(int i = 0; i < array.length; i++){
            int j;
            for(j = 0; j < i; j++){
                if(array[i] == array[j]){
                    break;
                }
            }
            if(j == i){
                sum += 1;
                //逐个数进行比较，如果到了i和j相同，就说明i前面的值都和i的值不一致，所以i是一个与其他不同的数
            }
        }
        System.out.println(sum);
    }
}
