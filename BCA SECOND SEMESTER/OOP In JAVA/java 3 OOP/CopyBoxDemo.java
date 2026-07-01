public class CopyBoxDemo {

    public static void main(String args[]) {
        // CopyBox c1 = new CopyBox(10,20, 30);
        // CopyBox c2 = new CopyBox(c1);

        CopyBox c1= new CopyBox(10, 20,30);
        CopyBox c2 = c1;
        System.out.println(c2.width);
        System.out.println(c2.height);
        System.out.println(c2.depth);
    }
}
