class Bike4 extends Vehicle {

    int speed = 100;
    
    void display(){
        System.out.println(speed);
    }

    public static void main(String args[])
    {
        Bike4 b = new Bike4();
        b.display();
    }
}