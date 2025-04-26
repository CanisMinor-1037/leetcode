import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();

        int numOfCigarette = n; // 烟的数量
        int numOfCigaretteButts = 0; // 烟蒂的数量
        int answer = 0; // 结果
        int i = 0;
        do {
            answer += numOfCigarette; // 抽烟
            numOfCigaretteButts += numOfCigarette; // 烟变成烟蒂
            //numOfCigarette = 0; // 烟抽完了
            numOfCigarette = numOfCigaretteButts / k; // 烟蒂换烟
            numOfCigaretteButts -= numOfCigarette * k; 
            i++;
            //System.out.println("round " + i + ", numberOfCigarette = " + numOfCigarette
            //    + ", numberOfCigaretteButts = " + numOfCigaretteButts);
        } while (numOfCigarette != 0 || numOfCigaretteButts >= k);
        System.out.println(answer);
    }
}
