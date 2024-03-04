// Problem Link: https://codeforces.com/problemset/problem/625/B
// Rate: 1200
// Topics: strings, greedy, constructive algorithm

import java.util.Scanner;

public class App {

    static Scanner in = new Scanner(System.in);

    private static int countSubstringOccurrences(String inputString, String substring) {
        int count = 0;
        int index = 0;

        while ((index = inputString.indexOf(substring, index)) != -1) {
            count++;
            index += substring.length();
        }

        return count;
    }

    private static void Solve(){
        String ai = in.next(), phone = in.next();

        int count = countSubstringOccurrences(ai, phone);

        System.out.println(count);
    }



    public static void main(String[] args) throws Exception {
        int t = 1;
        while (t-- != 0){
            Solve();
        }
    }
}
