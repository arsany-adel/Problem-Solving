// Problem Link: https://codeforces.com/problemset/problem/554/B
// Rate: 1200
// Topics: strings, greedy, brute force

import java.util.Scanner;

public class App {
    static Scanner in = new Scanner(System.in);

    private static void solve() {
        int size = in.nextInt();
        int cleaned = 0;

        String[] row = new String[size];

        for (int i = 0; i < size; i++){
            row[i] = in.next();

            if (row[i].indexOf('0') == -1){
                cleaned++;
            }
        }

        if (cleaned == size || size == 1){
            System.out.println(size);
            return;
        }

        for (int i = 0; i < size - 1; i++){
            int possibleCleaned = 1;

            for (int j = i + 1; j < size; j++){
                if ( row[i].equals(row[j]) ){
                    possibleCleaned++;
                }
            }

            cleaned = Math.max(cleaned, possibleCleaned);
        }

        System.out.println(cleaned);
    }

    public static void main(String[] args) throws Exception {
        int t = 1;

        while(t-- != 0) {
            solve();
        }
    }
}
