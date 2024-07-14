// Problem Link: https://codeforces.com/problemset/problem/370/A
// Rate: 1100
// graph, maths, shortest path

import java.util.Scanner;

public class App {
    static Scanner in = new Scanner(System.in);

    private static void solve() {
        short r1 = in.nextShort(), c1 = in.nextShort(), r2 = in.nextShort(), c2 = in.nextShort();
        short rook, bishop, king;

        rook = (r1 == r2 || c1 == c2 ? (short) 1 : (short) 2);

        if ((r1 % 2 == 0 && c1 % 2 == 0 || r1 % 2 != 0 && c1 % 2 != 0) && (r2 % 2 == 0 && c2 % 2 == 0 || r2 % 2 != 0 && c2 % 2 != 0)) {
            bishop = (Math.abs(c1 - c2) == Math.abs(r1 - r2) ? (short) 1 : (short) 2);
        } else if ((r1 % 2 == 0 && c1 % 2 != 0 || r1 % 2 != 0 && c1 % 2 == 0) && (r2 % 2 == 0 && c2 % 2 != 0 || r2 % 2 != 0 && c2 % 2 == 0)){
            bishop = (Math.abs(c1 - c2) == Math.abs(r1 - r2) ? (short) 1 : (short) 2);
        } else {
            bishop = 0;
        }

        king = 0;
        while(!(r1 == r2 && c1 == c2)){
            if (r1 != r2){
                r1 += (r1 < r2 ? 1 : -1);
            }

            if (c1 != c2){
                c1 += (c1 < c2 ? 1 : -1);
            }

            king++;
        }

        System.out.println(rook + " " + bishop + " " + king);
    }

    public static void main(String[] args) throws Exception {
        int t = 1;

        while(t-- != 0) {
            solve();
        }
    }
}
