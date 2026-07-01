class Outer {

     private static int x = 7;
    static class Inner{
        void meth(){
            System.out.println("x = "+x);
        }
    }

    public static void main(String args[]){
        Outer.Inner in = new Inner();
        in.meth();
    }
    
        
    }
