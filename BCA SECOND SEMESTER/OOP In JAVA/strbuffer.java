/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 * Name: Nabaraj Shrestha
 * Roll No: 14
 * @author nabaraj
 */
public class strbuffer {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        StringBuffer sb = new StringBuffer("Hello");
        StringBuffer sr = new StringBuffer("Hello");
        StringBuffer sc = new StringBuffer("Hello");
        StringBuffer sl = new StringBuffer("Hello");
        sb.append("Java");
        sb.delete(1,3);
        sr.reverse();
        sc.capacity();
        sl.length();
        System.out.println(sb);
        System.out.println(sr);
        System.out.println(sc.capacity());
        System.out.println(sl.length());
        
    }
}
