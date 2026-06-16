/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 * Name: Nabaraj Shrestha
 * Roll No: 14
 * @author nabaraj
 */
public class CopyBox {
    double width;
    double height;
    double depth;

    CopyBox(double width, double height, double depth)
    {
        this.width = width;
        this.height = height;
        this.depth = depth;
    }
    CopyBox(CopyBox other)
    {
        this.width = other.width;
        this.height = other.height;
        this.depth = other.depth;
    }
    
}

