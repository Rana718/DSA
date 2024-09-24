package Java.array;

import java.util.Scanner;

class MyArray {
    private int n, arr[];

    public MyArray() { // initialize
        n = 0;
        arr = null;
    }

    public void create(int x) { // Create the array
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many elements you want to add: ");
        n = sc.nextInt();
        arr = new int[x];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public boolean isFull() { // check if array is full
        return n == arr.length;
    }

    public boolean isEmpty() { // check if array is empty
        return n == 0;
    }

    public void add(int x, int pos) { // add element to array
        if (isFull()) {
            System.out.println("Array is full");
            return;
        }
        if (pos < 0 || pos > n) { // position validation
            System.out.println("Invalid position");
            return;
        }
        for (int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        n++;
    }

    public void delete(int pos) { // delete element from array
        if (isEmpty()) {
            System.out.println("Array is empty");
            return;
        }
        if (pos < 0 || pos >= n) { // position validation
            System.out.println("Invalid position");
            return;
        }
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    public void display() { // display array
        if (isEmpty()) {
            System.out.println("Array is empty");
            return;
        }
        System.out.print("\nArray: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println(); 
    }
}

public class array_ope {
    public static void main(String[] args) { 
        MyArray arr = new MyArray(); // create object
        Scanner sc = new Scanner(System.in);
        int temp, pos;

        System.out.println("Enter the max size of array: ");
        temp = sc.nextInt();
        arr.create(temp); // create array

        while (true) { // loop for modifications
            System.out.println("\nA. for adding the element\nD. for deleting the element\nE. for displaying the array\nQ. for quitting");
            System.out.print("Enter your choice: ");
            String choice = sc.next();

            switch (choice.toUpperCase()) { // switch case to perform operations
                case "D":
                    System.out.println("Enter the position of the element you want to delete: ");
                    temp = sc.nextInt();
                    arr.delete(temp);
                    break;
                case "A":
                    System.out.println("Enter the element you want to add: ");
                    temp = sc.nextInt();
                    System.out.println("Enter the position you want to add the element: ");
                    pos = sc.nextInt();
                    arr.add(temp, pos);
                    break;
                case "E":
                    arr.display();
                    break;
                case "Q":
                    System.out.println("\nGoodbye!");
                    sc.close();
                    System.exit(0); // exit the program
                default:
                    System.out.println("Invalid choice. Try again.");
            }
        }
    }
}
