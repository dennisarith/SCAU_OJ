//输出2-200素数

public class Main {
    public static void main(String[] args) {
        for (int i = 2; i <= 200; i++) {
            int flag = 0;
            for (int j = i - 1; j > 1; j--) {
                if (i % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                System.out.println(i);
            }
        }
    }
}