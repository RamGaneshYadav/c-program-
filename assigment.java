import java.util.Scanner;

class assignment1 {
    public static void main(String[] args) {
        int i, j;
        int matrix[][] = new int[10][20];
        Scanner d = new Scanner(System.in);
        // int d = objd.nextInt();
        System.out.println("enter a row");
        Scanner obj = new Scanner(System.in);
        int r = obj.nextInt();
        // System.out.println(" " + r);
        System.out.println("enter a column");
        Scanner obj1 = new Scanner(System.in);
        int c = obj1.nextInt();
        // System.out.println(" " + c);
        System.out.println("Enter a element in matrix");
        for (i = 1; i <= r; i++) {
            for (j = 1; j <= c; j++) {
                matrix[i][j] = d.nextInt();
            }
        }
        System.out.println("matrix :");
        System.out.println("\n");
        for (i = 1; i <= r; i++) {
            for (j = 1; j <= c; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println("\t\n");
        }
        int mext[t][o]=matrix[i][j].length;
        int maxt[c][e]=new int matrix[i][j].length;
        System.out.println("Enter a element in matrix");
        for (i = 1; i <= c; i++) {
            for (j = 1; j <= e; j++) {
                matrix[i][j] = d.nextInt();
            }
        }

    }
}