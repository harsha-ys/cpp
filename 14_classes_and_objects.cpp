

// Write your Student class here
class Student
{
    private:
        int scores[5];
    public:
        void input() 
        {
            int i,index=0;
            while(cin>>i) scores[index++]=i;
        }
        int calculateTotalScore() 
        {
            int sum=0;
            for( int i:scores) sum+=i;
            return sum;
        }
};

