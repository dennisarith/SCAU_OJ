/*国王将金币作为工资，发放给忠诚的骑士。
第1天，骑士收到一枚金币；之后两天(第2天和第3天)里，每天收到两枚金币；
之后三天(第4、5、6天)里，每天收到三枚金币；之后四天(第7、8、9、10天)里，
每天收到四枚金币……这种工资发放模式会一直这样延续下去：
当连续n天每天收到n枚金币后，骑士会在之后的连续n+1天里，每天收到n+1枚金币(n为任意正整数)。
你需要编写一个程序，确定从第一天开始的给定天数内，骑士一共获得了多少金币。
注：类名必须为Main(大写M)
输入格式
一个正整数（范围1到10000），表示天数。
输出格式
骑士获得的金币数。
输入样例
6
输出样例
14
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int day = input.nextInt();
        int result = 1;
        if (day == 1) {
            System.out.println(result);
        }
        int coin = 2;
        int i = 1;
        int m = 1;
        int n = 2;
        while(i < day) {

            m += n++;
            i += m;
        }
    }
}
