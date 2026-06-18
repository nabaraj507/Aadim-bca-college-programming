class StaticStudentDemo {
    public static void main(String[] args) {
        StaticStudent.change();

        StaticStudent s1 = new StaticStudent (111, "Karan");
        StaticStudent s2 = new StaticStudent (112, "Aryan");
        StaticStudent s3 = new StaticStudent (113, "Sono");

        s1.display();
        s2.display();
        s3.display();

    }    
}