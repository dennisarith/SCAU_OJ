import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        int max = 0, mx = 0, my = 0;
        int[][] array = new int[m][n];
        //input.nextLine();
        for(int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = input.nextInt();
                if(array[i][j] > max){
                    max = array[i][j];
                    mx = i;
                    my = j;
                }
            }
        }
        System.out.printf("array[%d][%d]=%d\n", mx, my, max);
    }
}
