/*编写一个程序，首先从键盘输入一个正整数n表示个数，然后输入n个整数，存放到数组中。
使用冒泡排序算法对该数组进行从大到小的排序，并输出排序之后的结果。输出时，两个整数之间用一个空格隔开。*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < array.length; i++) {
            array[i] = input.nextInt();
        }
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array.length - i - 1; j++) {
                if (array[j] < array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        for(int i = 0; i<array.length;i++){
            System.out.print(array[i] + " ");
        }
    }
}
