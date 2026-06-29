/**
 * TestPolymorphism2
 */
public class TestPolymorphism2 {
    public static void main(String[] args) {
        Shape s;
        // System.out.println(s.getClass());
        s = new Rectangle();
        System.out.println(s.getClass());
        s.draw();
        s = new Circle();
        System.out.println(s.getClass());
        s.draw();
        s = new Triangle();
        System.out.println(s.getClass());
        s.draw();
        
    }
}