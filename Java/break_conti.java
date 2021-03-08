class break_conti
{
    //public:
    static int counter;
    static int count;

    public static void main(String args[])
    {
        for(counter=0;counter<10;counter++)
        {
            System.out.println("Hello world");
            if(counter == 4)
            {
                System.out.println("Counter runs "+counter+" times."+"(break end)");
                break;
            }
            System.out.println("*****");
        }
        for(count=0;count<10;count++)
        {
            System.out.println("Hello new world");
            if(count == 4)
            {
                System.out.println("Count runs "+count+" times."+"(conti end)");
                continue;
            }
            System.out.println("*****");
        }
    }
}