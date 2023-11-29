import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        int[][] array = new int[m][n];
        //input.nextLine(); //用来跳过行列后的回车符，作用是丢弃当前行
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                array[i][j] = input.nextInt();
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                System.out.print(array[j][i] + " ");
            }
            System.out.println();
        }
    }
}
