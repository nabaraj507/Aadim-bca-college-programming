class PBox{
    double width;
    double height;
    double depth;

    PBox(double w, double h, double d){
        width = w;
        height = h;
        depth = d;
    }

    double volume(){
        return width * height * depth;
    }
}