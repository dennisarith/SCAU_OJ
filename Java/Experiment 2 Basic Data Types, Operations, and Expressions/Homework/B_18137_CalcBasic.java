public class Main {
    public static void main(String[] args){
        int a, b, c;
        float d = 15, e, f;
        a = 35 % 7;
        b = 15 / 10;
        c = b++;
        e = 15 / 10;
        f = d / 10;
        System.out.printf("%d, %d, %d, %f, %f, %f", a, b, c, d, e, f);
        //0, 2, 1, 15.000000, 1.000000, 1.500000
        System.out.println();
    }
}
