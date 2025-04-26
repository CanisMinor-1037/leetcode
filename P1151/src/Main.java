import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        int K = input.nextInt();
        int a[] = new int[5];
        int sub[] = new int[3];
        int tmp;
        int flag = 0;
        for (int i = 10000; i < 30001; i++) {
            // i:int -> a:int[5]
            tmp = i;
            for (int j = 4; j >= 0; j--) {
                a[j] = tmp % 10;
                tmp /= 10;
            }

            sub[0] = a[0] * 100 + a[1] * 10 + a[2];
            if (sub[0] % K == 0) {
                sub[1] = a[1] * 100 + a[2] * 10 + a[3];
                if (sub[1] % K == 0) {
                    sub[2] = a[2] * 100 + a[3] * 10 + a[4];
                    if (sub[2] % K == 0) {
                        System.out.println(i);
                        flag = 1;
                    }
                } 
            } 
        }
        if (flag == 0) {
            System.out.println("No");
        }
    }
}