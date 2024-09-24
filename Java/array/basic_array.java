package Java.array;
import java.util.Scanner;

public class basic_array {
    public static void main() {
        // Create a Scanner object for reading input
        Scanner sc = new Scanner(System.in);

        // get user to input the size of the array
        System.out.println("Enter the size of array");
        int size = sc.nextInt();

        int[] arr = new int[size]; // create the array

        // input the array elements
        System.out.println("Enter the elements of array");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        // print the array elements
        System.out.println("The array elements are: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        sc.close(); // close the scanner
    }
}