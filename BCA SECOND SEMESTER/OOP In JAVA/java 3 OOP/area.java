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
public class area {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the radius: ");
        double radius = sc.nextDouble();

        double area = Math.PI * radius * radius;

        System.out.println("Area of the circle = " + area);

        sc.close();
    }
}
