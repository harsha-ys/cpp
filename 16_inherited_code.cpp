

/* Define the exception here */
class BadLengthException : public std::exception
{
    private: int n;
    public :
        BadLengthException(int n):n(n){}
        int what(){ return n;}
};

