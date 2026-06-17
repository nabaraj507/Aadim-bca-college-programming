class ThisBox {
    int id;
    String name;

    ThisBox(int id, String name)
    {
        this.id = id;
        this.name = name;
    }


    // No args constructor
    ThisBox()
    {
        this(101, "Nabaraj Shrestha");
        System.out.println("No-args constructor called");
    }


    //Pass current object
    void display(ThisBox tb)
    {
        System.out.println("ID:" +tb.id);
        System.out.println("Name:" +tb.name);
    }

    void show()
    {
        display(this);   //Passing current object
    }


    // Return Current Object
    ThisBox getBox()
    {
        return this;
    }
    
}
