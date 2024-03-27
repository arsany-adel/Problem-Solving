// Problem Link: https://codeforces.com/problemset/problem/569/B
// Rate: 1200
// Topics: Greedy, frequency array, data structures

import java.util.Scanner;
import java.util.LinkedHashSet;
import java.util.Iterator;

public class App {

    static Scanner in = new Scanner(System.in);

    private static void Solve() {
        int size = in.nextInt();
        int[] item = new int[size];
        int[] freq = new int[100002];
        freq[0] = 0;

        for (int i = 0; i < size; i++) {
            item[i] = in.nextInt();
            freq[item[i]]++;
        }

        LinkedHashSet<Integer> neededNums = new LinkedHashSet<Integer>();

        for (int i = 1; i <= size; i++) {
            if (freq[i] == 0) {
                neededNums.add(i);
            }
        }

        for (int i = 0; i < size; i++) {
            if (neededNums.isEmpty()) {
                break;
            }

            Iterator<Integer> it = neededNums.iterator();
            Integer value = it.next();

            if (freq[item[i]] > 1 || item[i] > size) {
                freq[item[i]]--;
                item[i] = value;

                neededNums.remove(value);
            }
        }

        for (int i = 0; i < size; i++){
            System.out.print(item[i] + " ");
        } 
            
    }



    public static void main(String[] args) throws Exception {
        int t = 1;
        while (t-- != 0){
            Solve();
        }
    }
}
