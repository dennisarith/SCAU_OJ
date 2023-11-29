/*编写程序，输入若干个整数，统计其中互不相同的整数的个数。要求如下：
首先输入一个整数n代表要输入的整数个数；然后输入n个整数，统计并输出这n个整数中互不相同的整数的个数。*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for(int i = 0; i < array.length; i++){
            array[i] = input.nextInt();
        }
        int result = 0;
        for(int i = 0; i < array.length; i++){
            for(int j = 0; j < i; j++){
                if(array[j] == array[i]){
                    ++result;
                    break;
                }
            }
        }
        System.out.println(n - result);
    }
}
