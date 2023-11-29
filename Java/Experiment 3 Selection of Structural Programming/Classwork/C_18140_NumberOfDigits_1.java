import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        if(a>0&&a<10)
            System.out.println("1");
        else if(a>=10&&a<100)
            System.out.println("2");
        else if(a>=100&&a<1000)
            System.out.println("3");
        else if(a>=1000&&a<10000)
            System.out.println("4");
        else if(a>=10000&&a<100000)
            System.out.println("5");
        else if(a>=100000&&a<1000000)
            System.out.println("6");
        else if(a>=1000000&&a<10000000)
            System.out.println("7");
        else if(a>=10000000&&a<100000000)
            System.out.println("8");
        else
            System.out.println("9");
    }
}