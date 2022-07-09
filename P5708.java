import java.util.Scanner;

public class P5708{
    public static void main(String[] args) {
        int a, b, c;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        double p = (a+b+c)*1.0/2;
        System.out.printf("%.1f\n",Math.pow(p*(p-a)*(p-b)*(p-c), 0.5));
    }
}