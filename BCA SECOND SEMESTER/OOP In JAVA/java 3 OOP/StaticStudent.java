class StaticStudent {
    
    int rollno;
    String name;
    static String college = "ITS";

    static void change(){
        college = "Aadim National College";
    }
    StaticStudent(int r, String n){
        rollno = r;
        name = n;
    }
    void display(){
        System.out.println(rollno+ "" +name+"" +college);
    }
}