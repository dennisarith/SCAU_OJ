// 读入一行字符串（不多于800个字符，以回车结束），统计其中Bubble出现了多少次

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.nextLine();
        a.indexof
        int result = 0;
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) == 'B') {
                if (a.charAt(i + 1) == 'u') {
                    if (a.charAt(i + 2) == 'b') {
                        if (a.charAt(i + 3) == 'b') {
                            if (a.charAt(i + 4) == 'l') {
                                if (a.charAt(i + 5) == 'e') {
                                    ++result;
                                }
                            }
                        }
                    }
                }
            }
        }
        System.out.println(result);
    }
}
