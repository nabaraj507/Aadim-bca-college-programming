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
public class even {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        
        Scanner sc= new Scanner(System.in);
        
        System.out.println("Enter the value of n:");
        int n = sc.nextInt();
        int sum=0;
        int num = 2;
        for(int i = 1; i<= n; i++)
        {
            sum=sum+num;
            System.out.println(num);
            num = num +2;
        }
        System.out.println("Sum of n even number is:" +sum);
    }
    
}
        
        


