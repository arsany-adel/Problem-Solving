import java.util.Scanner;

public class App {

    static Scanner in = new Scanner(System.in);

    private static void Solve() {
        int islands = in.nextInt(), brokenBridges = in.nextInt();

        System.out.println((brokenBridges < islands -1 ? islands : 1));
    }



    public static void main(String[] args) throws Exception {
        int t = in.nextInt();
        while (t-- != 0){
            Solve();
        }
    }
}
