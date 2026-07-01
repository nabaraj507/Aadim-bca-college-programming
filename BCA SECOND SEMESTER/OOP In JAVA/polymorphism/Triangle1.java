class Triangle1 extends Figure{
    Triangle1(double a, double b){
        super(a, b);
    }

    //override area for triangle
    double area(){
        System.out.println("Inside Area for Triangle.");
        return dim1 * dim2 / 2;
    }
}
