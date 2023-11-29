public class Main {
    public static void main(String[] args){
        for(int i = 2; i <=200; i++){
            int prime = 0;
            for(int j = i - 1; j >= 2; j--){
                if(i % j == 0){
                    prime = 1;
                    break;
                }
            }
            if(prime == 0){
                System.out.println(i);
            }
        }
    }
}
