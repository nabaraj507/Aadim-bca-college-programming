/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 * Name: Nabaraj Shrestha
 * Roll No: 14
 * @author nabaraj
 */
public class PBoxDemo {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        PBox b1 = new PBox(10, 20, 15);
        PBox b2 = new PBox(3, 6, 9);
        double vol;
        vol = b1.volume();
        System.out.println("Volume is" +vol);
        vol = b2.volume();
        System.out.println("Volume is" +vol);
    }
}
