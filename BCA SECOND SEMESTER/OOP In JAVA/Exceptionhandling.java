/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 * Name: Nabaraj Shrestha
 * Roll No: 14
 * @author nabaraj
 */
import java.util.Scanner;
public class Exceptionhandling {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter number 1: ");
            int num1 = scanner.nextInt();

            System.out.print("Enter number 2: ");
            int num2 = scanner.nextInt();

            // ArithmeticException occurs if num2 is 0
            int result = num1 / num2;

            System.out.println("Result of division: " + result);

        } catch (ArithmeticException e) {
            System.out.println("Error caught: Cannot divide by 0");

        } catch (Exception e) {
            System.out.println("Error caught: Invalid input");

        } finally {
            System.out.println("Cleaning resources and closing scanner.");
            scanner.close();
        }
    }
}
