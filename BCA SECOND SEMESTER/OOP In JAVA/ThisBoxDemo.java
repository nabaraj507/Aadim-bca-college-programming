class ThisBoxDemo {
    public static void main(String[] args)
    {
        ThisBox tb1 = new ThisBox();

        System.out.println("\n Passing current object");
        tb1.show();


        System.out.println("\n Returning current object:");
        ThisBox tb2 = tb1.getBox();
        System.out.println(tb1.name);
    }    
}
