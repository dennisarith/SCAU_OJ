/*根据邮件的重量和用户是否选择加急计算邮费。计算规则：
重量在1000克以内(包括1000克), 基本费8元。
超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算；
如果用户选择加急，多收5元。
注：类名必须为Main(大写M)

输入一行，包含两个整数，以一个半角空格分开，
分别表示重量（正整数，单位为克）和是否加急。
如果1，说明选择加急；如果0，说明不加急。*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int weight = input.nextInt();
        int speed = input.nextInt();
        int result = 8;
        if (weight > 1000) {
            weight -= 1000;
            while (weight / 500 > 1 || weight / 500 == 1 && weight % 500 != 0) {
                result += 4;
                weight -= 500;
            }
            result += 4;
        }
        if (speed == 1) {
            result += 5;
        }
        System.out.println(result);
    }
}
