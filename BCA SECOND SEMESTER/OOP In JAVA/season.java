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
public class season {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value 1 to 12 for check season:");
        int n = sc.nextInt();
        switch(n)
        {
            case 12:
            case 1:
            case 2:
                System.out.println("Winter");
                break;
                
            case 3:
            case 4:
            case 5:
                System.out.println("Spring");
                break;
            case 6:
            case 7:
            case 8:
                System.out.println("Summer");
                break;
            case 9:
            case 10:
            case 11:
                System.out.println("Autumn");
                break;
            
            default:
                System.out.println("Invalid month");
        }
        
                
        
    }
}
