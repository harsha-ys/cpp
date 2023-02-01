
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
    private:
        int l{0}, b{0}, h{0};
    public:
        Box(){}//default
        Box(int l, int b, int h):l(l), b(b), h(h){}
        Box(Box& other):l(other.l), b(other.b), h(other.h){}//copy
        
        int getLength(){return l;}
        int getBreadth(){return b;}
        int getHeight(){return h;}
        long long CalculateVolume(){return (long long)l*(long long)b*(long long)h;}
        
        bool operator < (Box const &object)
        {
            return ( l < object.l )? true: ( ( b < object.b ) && l==object.l )? true: ( ( h < object.h ) && b==object.b && l==object.l )? true:false  ;
        }
        friend ostream& operator << (ostream &os,const Box &object)
        {
            return os<<object.l<<" "<<object.b<<" "<<object.h;
        }
    
};

