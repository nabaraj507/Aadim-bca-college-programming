class AbstractAreas {
    public static void main(String args[]){
        // Figure f = new Figure(10, 10); // illegal now
        
        Rectangle1 r = new Rectangle1(9, 5);
        Triangle1 t = new Triangle1(10, 8);
        Figure figref; //this is ok, no object is created
        figref = r;
        System.out.println("Area is " + figref.area());
        figref = t;
        System.out.println("Area is " + figref.area());
    }
}
