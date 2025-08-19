import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input number
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        
        // Call method to calculate factorial
        int result = factorialRecursive(num);
        
        System.out.println("Factorial of " + num + " is " + result);
    }

    // Recursive approach to calculate factorial
    public static int factorialRecursive(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorialRecursive(n - 1);
        }
    }
}
