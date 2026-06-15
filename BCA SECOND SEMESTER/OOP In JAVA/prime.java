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
public class prime {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of n:");
        int n = sc.nextInt();
        
        int count = 0;

        for (int num = 2; count < n; num++) {
            int factor = 0;

            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    factor++;
                }
            }

            if (factor == 2) {
                System.out.println(num);
                count++;
            }
        }
        
       
        
    }
}
