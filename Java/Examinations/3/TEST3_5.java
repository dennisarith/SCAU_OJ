/*给定正整数n，输出如下边长为n的星号平行四边形。
例如n=3时，输出
*
**
***
 **
  *
例如n=4时，输出
*
**
***
****
 ***
  **
   *
要求星号平行四边形上部不能有多余空行，左边不能有多余空列。*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            for (int j = n; j > i; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
