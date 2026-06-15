/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 * Name: Nabaraj Shrestha
 * Roll No: 14
 * @author nabaraj
 */
public class initarr {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]){
        // TODO code application logic here
        double[] myList={1.9,2.9,3.4,3.5};
        for(int i=0; i< myList.length;i++)
        {
            System.out.println(myList[i]+"");
        }
        
        double total = 0;
        for(int i = 0; i<myList.length;i++)
        {
            total+=myList[i];
        }
        double enhancedtotal=0;
        for(double num:myList)
        {
            enhancedtotal+=num;
        }
        System.out.println("Total is \t" +total);
        System.out.println("Enhancedtotal is \t"+enhancedtotal);
        double max = myList[0];

        for (double num : myList) {
        if (num > max) {
         max = num;
            }
        }
        System.out.println("Max number is =" +max);
        
        for(int i = 0; i< myList.length;i++)
        {
            if(myList[i]> max)
            {
                max = myList[i];
            }
        }
        System.out.println("Max=" +max);
        }
}
