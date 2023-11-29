import java.util.Scanner;
public class Main {
    public static boolean isLeapYear(int y){
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }
    public static void main(String[] args) {
        for(int year = 1990; year <= 2010; year++){
            if(isLeapYear(year)){
                System.out.println(year);
            }
        }
    }
}
